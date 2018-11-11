#pragma once
#include <mutex>

using namespace std;

class MutexTest
{
public:
	MutexTest();

	void test();

	void fun();

	void trylockFun();

	void execute();

	void tryExecute();

	~MutexTest();

private:
	mutex mMutex;
	volatile int mCount;
};

