#pragma once

#include <atomic>

using namespace std;

class AtomicTest
{
public:
	AtomicTest();

	void test();

	void fun();
	~AtomicTest();

private:
	atomic_int mCount;
};

