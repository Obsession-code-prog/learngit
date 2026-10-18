#include "robot/move_forward.hpp"

#include <iostream>
#include <stdexcept>

#include "robot/format.hpp"

namespace robot {

MoveForward::MoveForward(double distance_cm) {
    setDistance(distance_cm);
}

void MoveForward::setDistance(double distance_cm) {
    if (distance_cm <= 0.0) {
        throw std::invalid_argument("前进距离必须大于 0");
    }
    distance_cm_ = distance_cm;
}

void MoveForward::execute() const {
    std::cout << "执行动作：" << name()
              << " 前进距离：" << formatNumber(distance_cm_) << " cm"
              << " 机器人向前移动了 " << formatNumber(distance_cm_)
              << " cm\n";
}

}  // namespace robot
