// Exercise 7.21 Solution: Ex07_21.cpp
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
{
   const size_t PEOPLE = 5;
   const size_t PRODUCTS = 6;
   array< array< double, PRODUCTS>, PEOPLE > sales = { {{0.0}} };

   // enter sales slips
   cout << "Enter the salesperson (1 - 4), product number (1 - 5), and "
      << "total sales.\nEnter -1 for the salesperson to end input.\n";
   int salesPerson = 0;
   cin >> salesPerson;

   // continue receiving input for each salesperson until -1 is entered
   while ( salesPerson != -1 )
   {
      size_t product = 0;
      double value = 0.0;
      cin >> product >> value;
      // sales[ salesPerson ][ product ] += value;
      try
      {
         sales.at(salesPerson).at(product) += value;
      }
      catch (out_of_range &ex)
      {
         cout << "Salesperson and/or product invalid; try again" << endl;
         cout << ex.what() << endl;
      }

      cin >> salesPerson;
   } // end while

   cout << "\nThe total sales for each salesperson are displayed at the "
      << "end of each row,\n" << "and the total sales for each product "
      << "are displayed at the bottom of each column.\n " << setw( 12 )
      << 1 << setw( 12 ) << 2 << setw( 12 ) << 3 << setw( 12 ) << 4
      << setw( 12 ) << 5 << setw( 13 ) << "Total\n" << fixed << showpoint;
   array< double, PRODUCTS > productSales = { 0.0 };

   // display salespeople and sales
   for ( size_t i = 1; i < PEOPLE; ++i )
   {
      double totalSales = 0.0;
      cout << i;

      // add total sales, and display individual sales
      for ( size_t j = 1; j < PRODUCTS; ++j )
      {
         totalSales += sales[ i ][ j ];
         cout << setw( 12 ) << setprecision( 2 ) << sales[ i ][ j ];
         productSales[ j ] += sales[ i ][ j ];
      } // end inner for

      cout << setw( 12 ) << setprecision( 2 ) << totalSales << '\n';
   } // end outer for

   cout << setw(12) << "\nTotal" << setprecision( 2 );

   // display total product sales
   for ( size_t j = 1; j < productSales.size(); ++j )
      cout << setw( 12 ) << setprecision( 2 ) << productSales[ j ];

   cout << endl;
} // end main

