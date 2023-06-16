// Exercise 12.17 Solution: Bicycle.h
// Calculate the carbon footprint of a bicycle.
#ifndef BICYCLE_H
#define BICYCLE_H

#include <iostream>
#include "CarbonFootprint.h"

class Bicycle : public CarbonFootprint
{
public:
   // Not counting the carbon used to make the bicycle,
   // a bike's carbon footprint is 0
   // http://www.livemint.com/2009/06/04230851/
   //    How-big-is-your-carbon-footpri.html?pg=1
   virtual void getCarbonFootprint()
   {
      std::cout << "Bicycle: 0" << std::endl;
   } // end function getCarbonFootprint
}; // end class Bicycle

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
