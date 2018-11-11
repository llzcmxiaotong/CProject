#include "ForwardListTest.h"

#include <iostream>

#include <forward_list>

using namespace std;



ForwardListTest::ForwardListTest()
{
}

void ForwardListTest::print()
{
	forward_list<int> list = { 1, 2, 3, 4, 5, 4, 4 };
    forward_list<int>::iterator iterator = list.begin();
	while (iterator != list.end())
	{
		cout << "forward list iterator: " << *iterator << endl;
		iterator++;
	}
}


ForwardListTest::~ForwardListTest()
{
}
