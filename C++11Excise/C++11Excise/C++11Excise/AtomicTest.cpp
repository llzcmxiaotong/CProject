#include "AtomicTest.h"

#include <thread>

#include <iostream>

using namespace std;



AtomicTest::AtomicTest() : mCount(100)
{
}


void AtomicTest::test()
{
	const int threadCount = 5;
	thread t[threadCount];

	for (int i = 0; i < threadCount; i++)
	{
		t[i] = thread(&AtomicTest::fun, this);
	}

	for (int i = 0; i < threadCount; i++) {
		t[i].join();
	}
}

void AtomicTest::fun()
{
	for (int i = 0; i < 20; i++)
	{
		cout << "thread id: " << this_thread::get_id() <<", mCount: "<< mCount-- << endl;
	}
}


AtomicTest::~AtomicTest()
{
}
