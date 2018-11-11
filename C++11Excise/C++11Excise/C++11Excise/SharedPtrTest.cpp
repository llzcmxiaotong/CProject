#include "SharedPtrTest.h"

#include <iostream>

#include <memory>

#include "Test.h"

using namespace std;



SharedPtrTest::SharedPtrTest()
{
}

void SharedPtrTest::test()
{
	shared_ptr<Test> testPtr = make_shared<Test>();
	cout << "ref count: " << testPtr.use_count() << endl;
	{
		shared_ptr<Test> p2 = testPtr;
		cout << "ref count: " << testPtr.use_count() << endl;
	}
	cout << "ref count: " << testPtr.use_count() << endl;
}


SharedPtrTest::~SharedPtrTest()
{
}
