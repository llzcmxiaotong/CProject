#include "STDArray.h"

#include <array>

#include <iostream>

using namespace std;

STDArray::STDArray()
{
}

void STDArray::print()
{
	array<int, 4> a = { 1,2 };
	for (int num : a)
	{
		cout << "array num: " << num << endl;
	}

	array<int, 4>::iterator iterator = a.begin();
	while (iterator != a.end())
	{
		cout << "array num iterator: " << *iterator << endl;
		iterator++;
	}

}


STDArray::~STDArray()
{
}
