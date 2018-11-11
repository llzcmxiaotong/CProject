#include "UnorderedSetTest.h"

#include <unordered_set>

#include <iostream>

#include <cstring>

using namespace std;


UnorderedSetTest::UnorderedSetTest()
{
}

void UnorderedSetTest::print()
{
	unordered_set<string> set;
	set.insert("abdc");
	set.insert("dca");
	set.insert("abc");
	set.insert("abdc");

	cout << "set size: " << set.size() << endl;

	unordered_set<string>::iterator iterator = set.begin();
	while (iterator != set.end())
	{
		cout << "iterator value: " << iterator->data() << endl;
		iterator++;
	}
}


UnorderedSetTest::~UnorderedSetTest()
{
}
