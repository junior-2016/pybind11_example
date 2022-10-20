cmake_minimum_required(VERSION 3.4...3.18)
project(pybind11_example)

find_package(pybind11 CONFIG)

# 这里可以添加任何的submodule

pybind11_add_module(pybind11_example # 模块名称
	            lib.cpp # 导出接口的实现
		    add.cpp # 其他的实现文件
		    # 后面可以添加任何的c++实现文件... 
		    )


