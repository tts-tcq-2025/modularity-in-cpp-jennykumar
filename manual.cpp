#include "manual.hpp"
#include "colorcoder.hpp"
#include <ostream>
#include <sstream>

namespace TelCoColorCoder {

std::string FormatReferenceManual() {
  std::ostringstream out;
  out << "25-Pair Color Code Reference\n";
  out << "Pair\tNumber\tMajor\tMinor\n";
  for (int n = 1; n <= 25; ++n) {
    ColorPair p = GetColorFromPairNumber(n);
    out << n << "\t" << n << "\t" << p.ToString() << "\n";
  }
  return out.str();
}

void PrintReferenceManual(std::ostream& os) { os << FormatReferenceManual(); }

}  // namespace TelCoColorCoder
