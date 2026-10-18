# robot_actions_lab

一个用于学习 C++17 面向对象设计的机器人动作控制小项目。`Robot` 负责统一调度前进、旋转和挥手动作，代码演示了继承、多态、组合以及 `std::unique_ptr` 的所有权管理。

## 构建与运行

需要 CMake 3.16 及以上版本，以及支持 C++17 的编译器。

```bash
cmake -B build -S .
cmake --build build -j
./build/robot_demo
```

也可以直接执行：

```bash
./run.sh
```

运行后会依次演示前进、旋转和挥手三个动作，并输出每个动作的参数与执行结果。

## 目录结构

- `include/robot/`：动作接口、具体动作和 `Robot` 的声明
- `src/`：具体实现与演示入口
- `broken_backup/`：修复前的代码备份，保留用于对照学习
- `.vscode/`：构建和调试配置

`build/` 是本地生成目录，不纳入版本控制。
