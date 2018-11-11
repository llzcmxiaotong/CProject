#include "TestB.h"

#include <iostream>

using namespace std;

TestB::TestB()
{
	cout << "TestB constructor" << endl;
}

void TestB::setRef(shared_ptr<TestA> refA)
{
	mPtrA = refA;
}


TestB::~TestB()
{
	cout << "TestB deconstructor" << endl;
}
