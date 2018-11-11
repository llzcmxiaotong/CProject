#include "NullptrTest.h"

#include <iostream>

using namespace std;

NullptrTest::NullptrTest()
{
}

void NullptrTest::print(int index)
{
	cout << "non ptr print, index: " << index << endl;
}


void NullptrTest::print(int *index)
{
	cout << "ptr print" << endl;
}

NullptrTest::~NullptrTest()
{
}
