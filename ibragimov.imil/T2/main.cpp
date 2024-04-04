#include <algorithm>
#include <iostream>
#include <iterator>
#include <limits>
#include <vector>
#include "dataStructure.hpp"

int main()
{
  using namespace ibragimov;

  std::vector< DataStructure > data;
  while (!std::cin.eof())
  {
    using is_iterator = std::istream_iterator< DataStructure >;
    std::copy(is_iterator{std::cin}, is_iterator{}, std::back_inserter(data));
    if (!std::cin)
    {
      std::cin.clear();
      std::cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n');
    }
  }

  std::sort(std::begin(data), std::end(data));

  {
    using os_iterator = std::ostream_iterator< DataStructure >;
    std::copy(std::begin(data), std::end(data), os_iterator(std::cout, "\n"));
  }

  return 0;
}
