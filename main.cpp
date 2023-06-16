// Exercise 12.16 Solution: ex12_16.cpp
// Test program for CarbonFootprint and implementing classes.
#include <vector>
#include "CarbonFootprint.h"
#include "Bicycle.h"
#include "Building.h"
#include "Car.h"
using namespace std;

int main()
{
   vector< CarbonFootprint* > list;

   // add elements to list
   list.push_back( new Bicycle() );
   list.push_back( new Building( 250 ) );
   list.push_back( new Car( 8 ) );

   // display carbon footprint of each object
   for ( size_t i = 0; i < list.size(); ++i )
      list[ i ]->getCarbonFootprint();

   // release elements of list
   for ( size_t i = 0; i < list.size(); ++i )
      delete list[ i ];


} // end main

