#pragma once
#include "robot/action.hpp"
namespace robot{
    class MoveForward:public Action{
        public:
            explicit MoveForward(double distance_cm);
            void setDistance(double distance_cm);
            double distance() const noexcept {return distance_cm};
            void execute() const override;
            std::string name() const override {return "前进";}
        private:
            double distance_cm;
     };
}