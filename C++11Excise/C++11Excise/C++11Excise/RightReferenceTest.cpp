#include "RightReferenceTest.h"

#include <iostream>

using namespace std;

MyTest::MyTest(int value) : ptr(new int(value))
{
	cout << "MyTest constructor" << endl;
}

MyTest::MyTest(const MyTest& t) : ptr(new int(*t.ptr))
{
	cout << "MyTest copy constructor" << endl;
}

MyTest::MyTest(MyTest&& t) : ptr(t.ptr)
{
	t.ptr = nullptr;
	cout << "MyTest right copy constructor" << endl;
}

/*MyTest& MyTest::operator=(MyTest& a)
{
	if (ptr != nullptr)
	{
		delete ptr;
	}

	ptr = new int(*a.ptr);
	cout << "operator=(MyTest&)" << endl;
}*/

MyTest& MyTest::operator=(const MyTest& a)
{
	if (ptr != nullptr)
	{
		delete ptr;
	}

	ptr = new int(*a.ptr);
	cout << "operator=(const MyTest&)" << endl;
	return *this;
}

MyTest& MyTest::operator=(MyTest&& a)
{
	ptr = a.ptr;
	a.ptr = nullptr;
	cout << "operator=(MyTest&&)" << endl;
	return *this;
}

MyTest::~MyTest()
{
	if (ptr != nullptr)
	{
		delete ptr;
	}
	cout << "MyTest deconstructor" << endl;
}

ostream& operator<<(ostream& os, MyTest&a)
{
	os << *a.ptr << endl;
	return os;
}

RightReferenceTest::RightReferenceTest()
{
}

void refTest(int&& rref)
{
	cout << "rref: " << rref << endl;
}

void refTest(const int& lref)
{
	cout << "lref: " << lref << endl;
}

MyTest getMyTest()
{
	MyTest test(10);
	return test;
}


template<typename T>
void swapTest(T& a, T&b)
{
	// 调用移动拷贝构造函数
	T temp = move(a);
	// 调用右值拷贝操作符
	a = move(b);
	// 同上
	b = move(temp);
}


void RightReferenceTest::test()
{
	refTest(10);
	MyTest test = getMyTest();

	int&& i = 10;
	int& p = i;
	cout << "i: " << i << ", p: " << p << endl;

	MyTest a(10);
	MyTest b(20);
	swapTest(a, b);

	cout << "a: " << a << ", b: " << b << endl;
	
}


RightReferenceTest::~RightReferenceTest()
{
}
