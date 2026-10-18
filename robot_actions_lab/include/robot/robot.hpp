#pragma once

#include <cstddef>
#include <memory>
#include <string>
#include <vector>

#include "robot/action.hpp"

namespace robot {

class Robot {
public:
    // 统一入口：外部只指定动作类型和参数，不直接创建具体动作。
    void execute(const std::string& type, double value);

    // 按顺序重新执行已经记录的动作，用于演示 Robot 对动作对象的拥有关系。
    void replay() const;

    void clear();
    std::size_t actionCount() const noexcept { return actions_.size(); }

private:
    static std::unique_ptr<Action> createAction(const std::string& type,
                                                double value);

    std::vector<std::unique_ptr<Action>> actions_;
};

}  // namespace robot
