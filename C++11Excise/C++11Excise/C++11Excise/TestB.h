#pragma once

#include <memory>

#include "TestA.h"

using namespace std;

class TestA;

class TestB
{
public:
	TestB();
	void setRef(shared_ptr<TestA> ptrA);
	~TestB();

private:
	weak_ptr<TestA> mPtrA;
};

