
#include <vector>

template<class Container, class Iterator>
Iterator copy(const Container& c, Iterator result) {
  return std::copy(c.begin(), c.end(), result);
}

