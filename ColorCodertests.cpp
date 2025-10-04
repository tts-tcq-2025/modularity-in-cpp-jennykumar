#include <assert.h>
#include <iostream>
#include "colorcoder.hpp"

using namespace TelCoColorCoder;

static void testNumberToPair(int pairNumber,
                             MajorColor expectedMajor,
                             MinorColor expectedMinor) {
  ColorPair colorPair = GetColorFromPairNumber(pairNumber);
  std::cout << "Got pair " << colorPair.ToString() << "\n";
  assert(colorPair.getMajor() == expectedMajor);
  assert(colorPair.getMinor() == expectedMinor);
}

static void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
  int pairNumber = GetPairNumberFromColor(major, minor);
  std::cout << "Got pair number " << pairNumber << "\n";
  assert(pairNumber == expectedPairNumber);
}

void RunAllTests() {
  testNumberToPair(4, WHITE, BROWN);
  testNumberToPair(5, WHITE, SLATE);
  testPairToNumber(BLACK, ORANGE, 12);
  testPairToNumber(VIOLET, SLATE, 25);
}
