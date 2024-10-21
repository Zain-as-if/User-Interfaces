// COMP2811 Coursework 1: Quake class

#include <stdexcept>
#include "quake.hpp"

using namespace std;

// Constructor
Quake::Quake(const string& tm, double lat, double lon, double dep, double mag):
  time(tm), latitude(lat), longitude(lon), depth(dep), magnitude(mag)
{
  if (latitude > MAX_LATITUDE || latitude < MIN_LATITUDE){
    throw out_of_range("Latitude Is Outside Of Allowed Range");
  }
  else if (longitude > MAX_LONGITUDE || longitude < MIN_LONGITUDE) {
    throw out_of_range("Longitude Is Outside Of Allowed Range");
  }
  else if (depth < 0) {
    throw invalid_argument("Depth Can Not Be Negative");
  }
  else if (magnitude < 0) {
    throw invalid_argument("Magnitude Can Not Be Negative");
  }
}


ostream& operator<<(ostream& out, const Quake& quake)
{
  return out << "Time: " << quake.getTime()
             << "\nLatitude: " << quake.getLatitude() << " deg"
             << "\nLongitude: " << quake.getLongitude() << " deg"
             << "\nDepth: " << quake.getDepth() << " km"
             << "\nMagnitude: " << quake.getMagnitude() << endl;
}
