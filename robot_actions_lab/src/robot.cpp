#include "robot/robot.hpp"

#include <cmath>
#include <stdexcept>

#include "robot/move_forward.hpp"
#include "robot/rotate.hpp"
#include "robot/wave.hpp"

namespace robot {

std::unique_ptr<Action> Robot::createAction(const std::string& type,
                                            double value) {
    if (type == "前进" || type == "forward" || type == "move") {
        return std::make_unique<MoveForward>(value);
    }

    if (type == "旋转" || type == "rotate" || type == "turn") {
        return std::make_unique<Rotate>(value);
    }

    if (type == "挥手" || type == "wave") {
        if (std::floor(value) != value) {
            throw std::invalid_argument("挥手次数必须是整数");
        }
        return std::make_unique<Wave>(static_cast<int>(value));
    }

    throw std::invalid_argument("未知动作类型：" + type);
}

void Robot::execute(const std::string& type, double value) {
    // 1. 由 Robot 内部创建具体动作
    auto action = createAction(type, value);

    // 2. 通过基类接口执行，体现多态
    action->execute();

    // 3. Robot 持有这个动作对象，体现组合
    actions_.push_back(std::move(action));
}

void Robot::replay() const {
    for (const auto& action : actions_) {
        action->execute();
    }
}

void Robot::clear() {
    actions_.clear();
}

}  // namespace robot