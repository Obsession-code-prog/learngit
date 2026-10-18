#pragma once
#include "robot/action.hpp"
namespace robot{
    class Rotate :public Action{
        public:
            explicit Rotate(double angle_deg);
            void setAngle() const noexcept {return angle_deg_;}
            void execute() const override;
            std::string name() const override {return "旋转";}
        private:
            double angle_deg_;
    };
}