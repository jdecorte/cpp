// Exercise 12.17 Solution: CarbonFootprint.h
// Abstract base class for classes that can calculate carbon footprint.
#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

class CarbonFootprint
{
public:
   virtual void getCarbonFootprint() = 0;
   virtual ~CarbonFootprint() {}; // end class CarbonFootprint
};
#endif
