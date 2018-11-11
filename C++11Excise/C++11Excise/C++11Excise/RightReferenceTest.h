#pragma once

#include <iostream>

using namespace std;

class MyTest
{
public:
	MyTest(int value);
	MyTest(const MyTest& t);
	MyTest(MyTest&& tt);
	// MyTest& operator=(MyTest& a);
	MyTest& operator=(const MyTest& a);
	MyTest& operator=(MyTest&& a);
	~MyTest();

	friend ostream& operator<<(ostream& os, MyTest& a);

private:
	int *ptr;
};

class RightReferenceTest
{
public:
	RightReferenceTest();
	void test();
	~RightReferenceTest();
};

