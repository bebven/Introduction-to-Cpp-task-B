#include <iostream>
#include <cassert>

int LinearSearch(int TargetNum, int InputArray[], int ArrayLength)// loops through an array to find a taget number and returns the index of the number within the array
{
	for (int i = 0; i < ArrayLength; i++)
	{
		if (InputArray[i] == TargetNum)
		{
			return(i);
		}
	}
	return(-1);
}

int main()
{
	int NewArray[]{ 67, 13, 3, 89, 43, 2, 19, 71, 5, 61, 97, 7, 37, 31, 17, 11, 83, 53, 23, 29 };
	const int Length = sizeof(NewArray) / sizeof(NewArray[0]);

	
	assert(LinearSearch(3, NewArray, Length) == 2);
	assert(LinearSearch(7, NewArray, Length) == 11);
	assert(LinearSearch(67, NewArray, Length) == 0);
	assert(LinearSearch(88, NewArray, Length) == -1);

}
