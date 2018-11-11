#pragma once

#include <functional>

using namespace std;

class FunctionTest
{
public:
	FunctionTest();
	void test();
	void exec(function<int(int a, int b)> func, int a, int b);
	int fun(int a, int b);
	~FunctionTest();
};

