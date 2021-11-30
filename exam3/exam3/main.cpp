#include <iostream>
using namespace std;

const int ARRAYSIZE1 = 7;
const int ARRAYSIZE2 = 7;

void arrayComparison(int& array1[], int& array2[], int& x, int& y)
{
int larger;
int smaller;
int equals;
int sum1;
int sum2;

for (int j = 0; j < ARRAYSIZE1; j++)
{
    sum1 += array1[j];
}
for (int k = 0; k < ARRAYSIZE2; k++)
{
    sum2  += array2[k];
    }
    if (sum1 != sum2)
    {
        cout << "The sizes of the arrays are not equal." << endl;
    }
    for (int i = 0; i < x; i++)
    {
        if (array1[i] > array2[i])
    {
        larger += 1;
    }
    else if (array1[i] < array2[i])
    {
        smaller += 1;
    }
    else if (array1[i] == array2[i])
    {
        equals += 1;
    }
}

    cout << "Array 1 has " << larger << " larger elements than array 2. " << endl;
    cout << "Array 1 has " << smaller << " smaller elements than array 2. " << endl;
    cout << "Array 1 has " << equals << " equal elements to array 2. " << endl;}
}

int main()
{
    int array1[ARRAYSIZE1];
    int array2[ARRAYSIZE2];

    for (int i = 0; i < ARRAYSIZE1; i++)
    {
        cout << "Please input a number for element in array 1. " << endl;
        cin >> array1[i];
    }

    for (int j = 0; j < ARRAYSIZE2; j++)
    {
        cout << "Please input a number for the element in array 2. " << endl;
        cin >> array2[j];
    }

    arrayComparison(array1[], array2[], ARRAYSIZE1, ARRAYSIZE2);

    return 0;
}
