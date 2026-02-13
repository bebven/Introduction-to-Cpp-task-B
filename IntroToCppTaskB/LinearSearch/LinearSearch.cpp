#include <iostream>

int LinearSearch(int TargetNum, int InputArray[], int ArrayLength)
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

}
