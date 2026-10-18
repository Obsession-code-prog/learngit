#pragma once
#include<bits.stdc++.h>
namespace robot{
    inline std::string formatNumber(double value){
        std::ostringstream out;
        out<<std::setprecision(15)<<std::defaultfloat<<value;
        return out.str();
    }
}