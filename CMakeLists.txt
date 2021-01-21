# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.17)

# 项目名称
project(cplusproject)

# C14标准
set(CMAKE_CXX_STANDARD 14)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加code子目录
add_subdirectory(code)

# 指定生成目标
add_executable(cplusproject ${DIR_SRCS})
