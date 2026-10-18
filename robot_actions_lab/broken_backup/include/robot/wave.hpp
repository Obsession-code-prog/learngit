#pragma once
#include "robot/action.hpp"
namespace robot{
    class Wave{
        public:
        explicit Wave(int times);
        void setTimes(int times);
        int times() const noexcept {return times_;}
        void execute() const override {return "挥手";}
    private:
        int times_;
    };
}