#include "robot/rotate.hpp"

#include <cmath>
#include <iostream>
#include <stdexcept>

#include "robot/format.hpp"

namespace robot {

Rotate::Rotate(double angle_deg) {
    setAngle(angle_deg);
}

void Rotate::setAngle(double angle_deg) {
    if (angle_deg == 0.0) {
        throw std::invalid_argument("旋转角度不能为 0");
    }
    angle_deg_ = angle_deg;
}

void Rotate::execute() const {
    const bool turn_left = angle_deg_ > 0.0;
    const double magnitude = std::abs(angle_deg_);

    std::cout << "执行动作：" << name()
              << " 旋转角度：" << formatNumber(magnitude) << "°"
              << " 机器人向" << (turn_left ? "左" : "右") << "旋转了 "
              << formatNumber(magnitude) << "°\n";
}

}  // namespace robot#include "robot/rotate.hpp"

#include <cmath>
#include <iostream>
#include <stdexcept>

#include "robot/format.hpp"

namespace robot {

Rotate::Rotate(double angle_deg) {
    setAngle(angle_deg);
}

void Rotate::setAngle(double angle_deg) {
    if (angle_deg == 0.0) {
        throw std::invalid_argument("旋转角度不能为 0");
    }
    angle_deg_ = angle_deg;
}

void Rotate::execute() const {
    const bool turn_left = angle_deg_ > 0.0;
    const double magnitude = std::abs(angle_deg_);

    std::cout << "执行动作：" << name()
              << " 旋转角度：" << formatNumber(magnitude) << "°"
              << " 机器人向" << (turn_left ? "左" : "右") << "旋转了 "
              << formatNumber(magnitude) << "°\n";
}

}  // namespace robot