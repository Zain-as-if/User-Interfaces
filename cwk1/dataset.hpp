// COMP2811 Coursework 1: QuakeDataset class

#pragma once

#include <vector>
#include "quake.hpp"

/*
- time, lat, long, depth, mag PRIVATE ( In quake.hpp )
+ Quake, getTime, getLatitude, getLongitude, getDepth, getMagnitude PUBLIC
*/

class QuakeDataset
{
  public:
    // Specify prototypes or inlined methods here
    // (see UML diagram for what is required)

  private:
    std::vector<Quake> data;
};
