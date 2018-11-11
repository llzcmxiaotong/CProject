#include "FunctionTest.h"

#include <iostream>

using namespace std;

FunctionTest::FunctionTest()
{
}

void FunctionTest::test()
{
	exec(bind(&FunctionTest::fun, this, placeholders::_1, placeholders::_2), 2, 5);
}

void FunctionTest::exec(function<int(int a, int b)> func, int a, int b)
{
	int result = func(a, b);
	cout << "result: " << result << endl;
}

int FunctionTest::fun(int a, int b)
{
	return a * b * a * b;
}


FunctionTest::~FunctionTest()
{
}
