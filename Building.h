// Exercise 12.17 Solution: Building.h
// Calculate the carbon footprint of a building.
#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include "CarbonFootprint.h"

class Building : public CarbonFootprint
{
public:
   Building( int sm )
      : squareMeter( sm )
   {
      // empty constructor
   } // end Building constructor

   virtual void getCarbonFootprint()
   {
      std::cout << "Building with " << squareMeter << " square meter: "
         << squareMeter * 100 << std::endl;
   } // end function getCarbonFootprint
private:
   int squareMeter; // square footage of building
}; // end class Building

#endif


/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
