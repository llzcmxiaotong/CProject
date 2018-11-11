#include "TestA.h"

#include <iostream>

using namespace std;

TestA::TestA()
{
	cout << "TestA constructor" << endl;
}

void TestA::setRef(shared_ptr<TestB> ptrB)
{
	mPtrB = ptrB;
}


TestA::~TestA()
{
	cout << "TestA decontructor" << endl;
}
