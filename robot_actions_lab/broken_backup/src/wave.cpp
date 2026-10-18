#include "robot/wave.hpp"

#include <iostream>
#include <stdexcept>

namespace robot {

Wave::Wave(int times) {
    setTimes(times);
}

void Wave::setTimes(int times) {
    if (times <= 0) {
        throw std::invalid_argument("挥手次数必须大于 0");
    }
    times_ = times;
}

void Wave::execute() const {
    std::cout << "执行动作：" << name()
              << " 挥手次数：" << times_
              << " 机器人完成了 " << times_ << " 次挥手\n";
}

}  // namespace robot