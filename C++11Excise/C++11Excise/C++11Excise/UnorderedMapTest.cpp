#include "UnorderedMapTest.h"

#include <unordered_map>

#include <iostream>

using namespace std;

UnorderedMapTest::UnorderedMapTest()
{
}


void UnorderedMapTest::print()
{
	unordered_map<int, string> map;
	map.insert(pair<int, string>(1, "abc"));
	map.insert(pair<int, string>(2, "bcd"));

	unordered_map<int, string>::iterator iterator = map.begin();
	while (iterator != map.end())
	{
		cout << "unordered map key: " << iterator->first << ", value: " << iterator->second.data() << endl;
		iterator++;
	}

	bool contains = map.find(3) != map.end();
	cout << "contains 3: " << contains << endl;
	contains = map.count(1) > 0;
	cout << "contains 1: " << contains << endl;

}

UnorderedMapTest::~UnorderedMapTest()
{
}
