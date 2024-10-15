#pragma once

class Array
{
  public:
    Array(int);
    Array(const Array&);  // <1>
    ~Array();  // <2>
    int getSize() const { return size; }
    Array& operator = (const Array&);  // <3>
    float operator [] (int) const;  // <4>
    float& operator [] (int);

  private:
    int size;
    float* data;
};
