// Header for overloaded stream insertion operators
// (See utils.cpp for implementation, vecdemo.cpp & algdemo.cpp for usage)

#include <iostream>
#include <vector>
#include <string>

std::ostream& operator << (std::ostream&, const std::vector<int>&);
std::ostream& operator << (std::ostream&, const std::vector<std::string>&);
