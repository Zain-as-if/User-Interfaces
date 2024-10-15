// Overloadings of the stream insertion operator so that we can
// conveniently output small vectors of ints and strings

#include "utils.hpp"

using namespace std;

ostream& operator << (ostream& out, const vector<int>& vec)
{
  out << "[";
  if (vec.size() > 0) {
    out << vec[0];
    if (vec.size() > 1) {
      for (int i = 1; i < vec.size(); ++i) {
        out << ", " << vec[i];
      }
    }
  }
  return out << "]";
}

ostream& operator << (ostream& out, const vector<string>& vec)
{
  out << "[";
  if (vec.size() > 0) {
    out << '"' << vec[0] << '"';
    if (vec.size() > 1) {
      for (int i = 1; i < vec.size(); ++i) {
        out << ", \"" << vec[i] << '"';
      }
    }
  }
  return out << "]";
}
