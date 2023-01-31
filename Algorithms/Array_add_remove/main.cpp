#include <iostream>

using namespace std;

//Add in position
int* add(int *arr, int *size, int value, int position) // todo
{
    int *temp = new int[*size + 1];
    int tempPos = 0;
    for (int i = 0; i < *size + 1; i++)
    {
        if (i == position)
        {
            temp[i] = value;
        }
        else
        {
            temp[i] = arr[tempPos];
            tempPos++;
        }
    }
    delete[] arr;
    (*size)++;
    return temp;
};

//Add at the end
int* push(int *arr, int *size, int value)
{
    int *temp = new int[*size + 1];
    for (int i = 0; i < *size; i++)
    {
        temp[i] = arr[i];
    }
    temp[*size] = value;
    delete[] arr;
    (*size)++;
    return temp;
};

//Add at the start
int* unshift(int *arr, int *size, int value)
{
    int *temp = new int[*size + 1];
    temp[0] = value;
    for (int i = 1; i < *size + 1; i++)
    {
        temp[i] = arr[i - 1];
    }
    delete[] arr;
    (*size)++;
    return temp;
};

//Remove from position
int* remove(int *arr, int *size, int index_remove)
{
    int *temp = new int[*size - 1];
    int tempPos = 0;
    for (int i = 0; i < *size; i++)
    {
        if (i != index_remove)
        {
            temp[tempPos] = arr[i];
            tempPos++;
        }
    }
    delete[] arr;
    (*size)--;
    return temp;
};

//Remove from end
int* pop(int *arr, int *size)
{
    int *temp = new int[*size - 1];
    for (int i = 0; i < *size - 1; i++)
    {
            temp[i] = arr[i];
    }
    int output = arr[*size - 1];
    delete[] arr;
    (*size)--;
    return temp;
};

//Remove from start
int* shift(int *arr, int *size)
{
    int *temp = new int[*size - 1];
    for (int i = 0; i < *size - 1; i++)
    {
        temp[i] = arr[i + 1];
    }
    int output = arr[0];
    delete[] arr;
    (*size)--;
    return temp;
};

//Main example
int main(int argc, char const *argv[])
{
    //Test values
    int size = 10;
    int* array = new int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = (i * 94648) % 5;
    }
    
    //Display default array
    cout << "\nDisplay array: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    array = shift(array, &size);
    array = pop(array, &size);

    //Display array after removing
    cout << "\nArray after shift and pop: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    array = unshift(array, &size, 7);
    array = push(array, &size, 7);

    //Display array after adding
    cout << "\nArray after unshift and push: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
