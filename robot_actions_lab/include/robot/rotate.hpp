#pragma once

#include "robot/action.hpp"

namespace robot {

class Rotate : public Action {
public:
    // 正数表示向左旋转，负数表示向右旋转。
    explicit Rotate(double angle_deg);

    // 旋转动作特有的配置接口。
    void setAngle(double angle_deg);
    double angle() const noexcept { return angle_deg_; }

    void execute() const override;
    std::string name() const override { return "旋转"; }

private:
    double angle_deg_;
};

}  // namespace robot
