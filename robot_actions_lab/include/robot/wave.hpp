#pragma once

#include "robot/action.hpp"

namespace robot {

class Wave : public Action {
public:
    explicit Wave(int times);

    // 挥手动作特有的配置接口。
    void setTimes(int times);
    int times() const noexcept { return times_; }

    void execute() const override;
    std::string name() const override { return "挥手"; }

private:
    int times_;
};

}  // namespace robot
