#include <iostream>

void BubbleSort(int InputArray[], int ArrayLength)
{
    bool swapped = true;
    int i = 0;
    do {
        swapped = false;
        for (int ii = 0; ii < ArrayLength - 1 - i; ii++)
        {
            if (InputArray[ii] > InputArray[ii + 1])
            {
                //holds on to ii
                int temp = InputArray[ii];
                //swaps values
                InputArray[ii] = InputArray[ii + 1];
                InputArray[ii + 1] = temp;
                swapped = true;
            }
        }

        i++;
    } while (swapped == true);            
}

int main()
{
    int NewArray[]{ 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int Length = sizeof(NewArray) / sizeof(NewArray[0]);
    BubbleSort(NewArray, Length);

    for (int iii = 0; iii < Length; iii++)
    {
        std::cout << NewArray[iii] <<"\n";
    }
}
