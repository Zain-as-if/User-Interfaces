// COMP2811 Coursework 1: QuakeDataset class

#pragma once

#include <vector>
#include "quake.hpp"

/*
Methods:
+ QuakeDataset() // Constructor
  QuakeDataset(filename: string) // Constructor
  loadData(filename: string) 
  size() : int // Returns no. of earthquake entries
  operator[](index: int) : Quake 
  strongest(): Quake // Returns strongest earthquake
  shallowest() : Quake // Returns earthquake with least depth 
  meanDepth() : double // Returns mean depth of all earthquakes
  meanMagnitude() : double // Returns mean magnitude of all earthquakes
*/

class QuakeDataset
{
  public:
    // Specify prototypes or inlined methods here
    // (see UML diagram for what is required)

    // Inlined Constructors
    QuakeDataset() = default; // Empty Constructor
    QuakeDataset(const std::string& filename) { loadData(filename); } // Constructor Uses loadData Method

    // Not Inline, Too Complicated
    void loadData(const std::string& filename); // Loads Data From CSV

    // Inlined No. Of Earthquakes
    int size() const { return data.size(); } // Returns No. Of Earthquakes
    
    // Inlined Overloaded Operator
    const Quake& operator[](int index) const {
      if (index < 0 || index >= data.size()) {
        throw std::out_of_range("Index out of range");
      }
      return data[index];
    }

    // Not Inlined as not called as often and more complicated
    Quake strongest() const;
    Quake shallowest() const;
    double meanDepth() const;
    double meanMagnitude() const;

  private:
    std::vector<Quake> data;
};
