// C++11Excise.cpp : 定义控制台应用程序的入口点。
//

#include <iostream>

#include <cstdlib>

#include "NullptrTest.h"

#include "ForEach.h"

#include "STDArray.h"

#include "ForwardListTest.h"

#include "UnorderedMapTest.h"

#include "UnorderedSetTest.h"

#include "ThreadTest.h"

#include "AtomicTest.h"

#include "MutexTest.h"

#include "SharedPtrTest.h"

#include "WeakPtrTest.h"

#include "LamdaTest.h"

#include "FunctionTest.h"

#include "RightReferenceTest.h"

using namespace std;

auto multiple(int a, int b)
{
	return a * b;
}


int main()
{
	cout << "hello world" << endl;

	int a = 10;
	int b = 30;

	int mul = a * b;

	cout << "mul: " << mul << endl;

	auto at = 100;
	auto ab = 1000;

	auto result = multiple(at, ab);
	cout << "at: " << at << endl;
	cout << "ab: " << ab << endl;
	cout << "result: " << result << endl;

	NullptrTest nullptrTest;
	nullptrTest.print(NULL);
	nullptrTest.print(nullptr);

	ForEach foreachTest;
	foreachTest.print();

	STDArray stdArrayTest;
	stdArrayTest.print();

	ForwardListTest forwardListTest;
	forwardListTest.print();

	UnorderedMapTest mapTest;
	mapTest.print();

	UnorderedSetTest unorderedSetTest;
	unorderedSetTest.print();

	ThreadTest threadTest;
	threadTest.test();

	/*AtomicTest atomicTest;
	atomicTest.test();*/

	MutexTest mutexTest;
	mutexTest.test();

	SharedPtrTest ptrTest;
	ptrTest.test();

	WeakPtrTest weakPtrTest;
	weakPtrTest.test();

	LamdaTest lamdaTest;
	lamdaTest.test();

	FunctionTest functionTest;
	functionTest.test();

	cout << "sizeof(long long)" << sizeof(long long) << endl;

	cout << "sizeof (void *)" << sizeof(void *) << endl;

	cout << "sizeof (long)" << sizeof(long) << endl;

	cout << "main is end" << endl;

	int t = 10;
	const int c = t;

	cout << "c: " << c << endl;

	int aa = 10;
	int *pa = &a;
	decltype(*pa) cc = aa;
	cc = 50;
	cout << "aa: " << aa << endl;

	RightReferenceTest rtest;
	rtest.test();

	return 0;
}

