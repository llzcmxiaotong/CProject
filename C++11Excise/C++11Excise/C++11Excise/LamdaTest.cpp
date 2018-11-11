#include "LamdaTest.h"


#include <iostream>

using namespace std;


LamdaTest::LamdaTest()
{
}

void LamdaTest::test()
{
	auto f = [](int a, int b) -> int {
		return a * b;
	};

	int result = f(2, 5);
	cout << "result: " << result << endl;
}


LamdaTest::~LamdaTest()
{
}
