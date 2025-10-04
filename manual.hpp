#ifndef TELCO_MANUAL_HPP_
#define TELCO_MANUAL_HPP_

#include <iosfwd>
#include <string>

namespace TelCoColorCoder {
std::string FormatReferenceManual();       // full text (for files/tests)
void PrintReferenceManual(std::ostream&);  // direct print (e.g., std::cout)
}  // namespace TelCoColorCoder

#endif
