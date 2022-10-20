#include "add.hpp"
#include <bits/stdc++.h>

std::pair<std::vector<double>, std::vector<char>> add(const std::vector<double>& a , const std::vector<double>& b) {
	std::vector<double> ret1;
	std::vector<char> ret2 = { 65, 66, 70, 67 };
	if (a.size() != b.size()) 
	    throw std::runtime_error("input size isn't equal");
	for (int i = 0; i < a.size(); ++i) {
	    ret1.push_back(a[i] + b[i]);
	}
	return {ret1, ret2};
}
