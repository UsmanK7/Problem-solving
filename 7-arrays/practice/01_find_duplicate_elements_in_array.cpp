#include <iostream>
using namespace std;

bool findDuplicateElementsInArray(int num[], int n)
{
    int temp[n];
    temp[0] = num[0];
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (num[i] == temp[j])
            {
                return true;
            }
        }
        temp[i] = num[i];
    }
    return false;
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 3};
    int n = sizeof(num) / sizeof(int);
    if (findDuplicateElementsInArray(num, n) == 1)
    {
        cout << "true";
        cout << " Duplicate exists!";
    }
    else
    {
        cout << "false";
        cout << " Duplicate not exists!";
    }
}