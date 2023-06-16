// Exercise 12.17 Solution: Car.h
// Calculate the carbon footprint of a car.
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "CarbonFootprint.h"

class Car : public CarbonFootprint
{
public:
   Car( double l )
      : liter( l )
   {
      // empty constructor
   } // end Car constructor

   virtual void getCarbonFootprint()
   {
      std::cout << "Car that uses " << liter << " liters of gas per 100 km: "
         << liter * 20 << std::endl;
   } // end function getCarbonFootprint
private:
   double liter;
}; // end class Car

#endif

