#include <iostream>
#include <string>
using namespace std;

int *addArray(const int *array, int size)
{
    int i;
    int newArraySize = size * 2;
    int *largeArray = new int[newArraySize];

    for (i = 0; i < size; ++i)
    {
        largeArray[i] = array[i];
    }

    for (i = size; i < newArraySize; ++i)
    {
        largeArray[i] = 0;
    }

    return largeArray;
}

int main()
{
    int size;
    int i;
    cout << "enter the size of array: ";
    cin >> size;

    int *array = new int[size];

    for (i = 0; i < size; ++i)
    {
        cout << "enter element " << i << ":";
        cin >> array[i];
    }

    cout << "first array: ";

    for (i = 0; i < size; ++i)
    {

        cout << array[i] << " ";
    }

    cout << endl;

    int *largeArray = addArray(array, size);

    cout << "largerArray: ";

    for (i = 0; i < size * 2; ++i)
    {
        cout << largeArray[i] << " ";
    }

    cout << endl;

    delete[] array;
    delete[] largeArray;

    return 0;
}