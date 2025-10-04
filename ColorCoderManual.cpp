#include "ColorCoder.h"
#include <iostream>
#include <iomanip>

namespace TelCoColorCoder
{
    void PrintColorCodeManual() {
        std::cout << "Pair# | Major   | Minor\n";
        std::cout << "-------------------------\n";
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair pair = GetColorFromPairNumber(i);
            std::cout << std::setw(5) << i << " | "
                      << std::setw(7) << MajorColorNames[pair.getMajor()] << " | "
                      << MinorColorNames[pair.getMinor()] << "\n";
        }
    }
}
