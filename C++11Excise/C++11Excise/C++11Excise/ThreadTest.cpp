#include "ThreadTest.h"

#include <iostream>

#include <thread>

#include <cstdlib>

using namespace std;


ThreadTest::ThreadTest()
{
}

void ThreadTest::test()
{
	thread t(&ThreadTest::sum, this, 100);
	// t.join();
	t.detach();
}

void ThreadTest::sum(int maxNum)
{
	int sum = 0;
	for (int i = 0; i < maxNum; i++)
	{
		sum += i;
	}

	_sleep(3000);

	cout << "thread id: " << this_thread::get_id() << ", sum: " << sum << endl;
}


ThreadTest::~ThreadTest()
{
}
