#include "ForEach.h"

#include <iostream>

using namespace std;

ForEach::ForEach()
{
}

void ForEach::print()
{
	int a[10] = { 1, 2, 3, 4, 5 };
	for (auto num : a)
	{
		cout << "num: " << num << endl;
	}
}


ForEach::~ForEach()
{
}
