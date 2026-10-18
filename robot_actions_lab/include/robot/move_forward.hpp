#pragma once

#include "robot/action.hpp"

namespace robot {

class MoveForward : public Action {
public:
    explicit MoveForward(double distance_cm);

    // 前进动作特有的配置接口。
    void setDistance(double distance_cm);
    double distance() const noexcept { return distance_cm_; }

    void execute() const override;
    std::string name() const override { return "前进"; }

private:
    double distance_cm_;
};

}  // namespace robot
