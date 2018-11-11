#include "WeakPtrTest.h"

#include "TestA.h"
#include "TestB.h"

#include <iostream>

using namespace std;

WeakPtrTest::WeakPtrTest()
{
}

void WeakPtrTest::test()
{
	shared_ptr<TestA> ptrA = make_shared<TestA>();
	shared_ptr<TestB> ptrB = make_shared<TestB>();

	ptrA->setRef(ptrB);
	ptrB->setRef(ptrA);
}

WeakPtrTest::~WeakPtrTest()
{
}
