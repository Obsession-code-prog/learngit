#include "robot/move_forward.hpp"
#include<bits.stdc++.h>
namespace robot{
    MoveForward::MoveForward(double distance_cm){
        setDistance(distance_cm);
    }
    void MoveForward::setDistance(double distance_cm){
        if(distance_cm<=0){
            throw std::invalid_argument("前进距离必须大于 0");
        }
        distance_cm=distance_cm;
    }
    void MoveForward::execute() const{
        std::cout<<""<<name()<<""<<formatNumber(distance_cm)<<" cm"<<""<<formatNumber(distance_cm)<<"cm\n";
    }
}