#include "robot/robot.hpp"

#include <exception>
#include <iostream>

int main() {
    robot::Robot robot;
    std::cout << "机器人已启动\n";

    try {
        robot.execute("前进", 100.0);
        robot.execute("旋转", 90.0);
        robot.execute("挥手", 3.0);
    } catch (const std::exception& error) {
        std::cerr << "执行失败：" << error.what() << '\n';
        return 1;
    }

    std::cout << "所有动作执行完毕\n";
    return 0;
}