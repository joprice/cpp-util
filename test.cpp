
#include "util.h"
#include "unused.h"
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

template <int A, int B>
struct Pair {
  int one = A;
  int two = B;
};

int test1() {
  return 1;
}

int test2() {
  return 1;
}

UNUSED(
int test3() {
  return test1() + test2();
}
)

void testCopy() {
  vector<int> v {1,2,3};
  copy(v, ostream_iterator<int>(cout, "\n"));
}

template <int A, int B>
ostream& operator<<(ostream& os, const Pair<A, B>& p) {
  os << p.one << ' ' << p.two;
  return os;
}

template <int N>
struct Factorial {
  enum { 
    value = N * Factorial<N - 1>::value 
  };
};
 
template <>
struct Factorial<0> {
    enum { value = 1 };
};

int main() {
  int x = Factorial<4>::value; // == 24
  int y = Factorial<0>::value; // == 1
  cout << x << ' ' << y << '\n';
  //testCopy();
  Pair<1,2> p;
  cout << p << '\n';

  return 0;
}

