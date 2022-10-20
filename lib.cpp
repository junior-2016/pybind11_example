#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "add.hpp"

std::pair<std::vector<double>, std::vector<char>> example(std::vector<double>& i, std::vector<double>& j) {
    auto ret = add(i, j);
    return {ret.first, ret.second}; 
}

PYBIND11_MODULE(pybind11_example, m) { // PYBIND11_MODULE(模块名称, m) 
    m.def("example", &example, "A function that adds two numbers"); // 导出模块内的接口函数
}
