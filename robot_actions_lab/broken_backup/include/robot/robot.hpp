#pragma once
#include<bits/stdc++.h>
#include "robot/action.hpp"
namespace robot{
    class Robot{
        public:
            void execute(const std::string& type,double value);
            void replay() const;
            void clear();
            std::size_t actionCount() const noexcept {return actions_.size();}
        private:
            static std::unique_ptr<Action> createAction(const std::string& type,double value);
            std::vector<std::unique_ptr<Action>> actions_;
    };
}