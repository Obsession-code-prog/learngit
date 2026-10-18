#pragma once

#include <iomanip>
#include <sstream>
#include <string>

namespace robot {

// 把 100.0 输出成 "100"，把 12.5 输出成 "12.5"，避免多余的尾随零。
inline std::string formatNumber(double value) {
    std::ostringstream out;
    out << std::setprecision(15) << std::defaultfloat << value;
    return out.str();
}

}  // namespace robot
