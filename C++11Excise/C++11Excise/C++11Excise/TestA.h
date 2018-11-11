#pragma once

#include <memory>

#include "TestB.h"

using namespace std;

class TestB;

class TestA
{
public:
	TestA();
	void setRef(shared_ptr<TestB> ptrB);
	~TestA();

private:
	weak_ptr<TestB> mPtrB;
};

