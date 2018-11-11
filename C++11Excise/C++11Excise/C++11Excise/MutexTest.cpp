#include "MutexTest.h"

#include <iostream>

#include <thread>

using namespace std;

MutexTest::MutexTest() : mCount(0)
{
}

void MutexTest::test()
{
	const int threadCount = 5;
	thread tt[threadCount];

	for (auto& t : tt)
	{
		t = thread(&MutexTest::fun, this);
	}

	for (auto& t : tt)
	{
		t.join();
	}
}

void MutexTest::fun()
{
	for (int i = 0; i < 20; i++)
	{
		mMutex.lock();
		cout << "thread id: " << this_thread::get_id() << ", mCount: " << mCount++ << endl;
		mMutex.unlock();
	}
}

void MutexTest::trylockFun()
{
	for (int i = 0; i < 20; i++)
	{
		if (mMutex.try_lock())
		{
			cout << "thread id: " << this_thread::get_id() << ", mCount: " << mCount++ << endl;
			execute();
			mMutex.unlock();
		}
	}
}

void MutexTest::execute()
{
	mMutex.lock();
	cout << "execute" << endl;
	mMutex.unlock();
}

void MutexTest::tryExecute()
{
	if (mMutex.try_lock())
	{
		cout << "try execute" << endl;
		mMutex.unlock();
	}
	else
	{
		cout << "execute try lock fail " << endl;
	}
}


MutexTest::~MutexTest()
{
}
