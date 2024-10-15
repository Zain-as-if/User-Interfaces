#include <iostream>
#include <stdexcept>
#include "array.hpp"

using namespace std;

Array::Array(int n): size(n)
{
  if (size <= 0) {
    throw invalid_argument("Array size must be > 0");
  }

  cout << "Creating array with " << size << " elements" << endl;

  data = new float[size];
}

Array::Array(const Array& other): size(other.size)
{
  cout << "Invoking copy constructor" << endl;

  data = new float[size];

  for (int i = 0; i < size; ++i) {
    data[i] = other.data[i];
  }
}

Array::~Array()
{
  cout << "Freeing storage" << endl;

  delete[] data;
}

Array& Array::operator = (const Array& other)
{
  cout << "Invoking assignment operator" << endl;

  // Guard against self-assignment
  if (this == &other) {
    return *this;
  }

  if (size != other.size) {
    // Need to allocate matching amount of space
    float* tmp = new float[other.size];
    delete[] data;
    data = tmp;
    size = other.size;
  }

  for (int i = 0; i < size; ++i) {
    data[i] = other.data[i];
  }

  return *this;
}

float Array::operator [] (int index) const
{
  if (index < 0 || index >= size) {
    throw invalid_argument("Invalid index");
  }

  return data[index];
}

float& Array::operator [] (int index)
{
  if (index < 0 || index >= size) {
    throw invalid_argument("Invalid index");
  }

  return data[index];
}
