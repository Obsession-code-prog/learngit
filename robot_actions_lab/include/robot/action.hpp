#pragma once
#include<string>
namespace robot{
    class Action{
    public:
        virtual ~Action()=default;
        virtual void execute() const=0;
        virtual std::string name() const=0;
    };
}