#ifndef DATA_STRUCT_H
#define DATA_STRUCT_H
#include <string>
#include <iostream>
#include <iomanip>

#include "Delimeter.hpp"

namespace kornienko
{
  struct DataStruct
  {
    bool operator<(const DataStruct & other) const;
    double key1;
    unsigned long long key2;
    std::string key3;
  };

  std::istream & operator>>(std::istream & in, DataStruct & value);
  std::ostream & operator<<(std::ostream & out, const DataStruct & value);
}

#endif
