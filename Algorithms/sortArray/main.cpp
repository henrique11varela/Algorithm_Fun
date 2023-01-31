#include <iostream>
#include <string>

using namespace std;

// sort int array
void sortArray(int *arr, int arrSize)
{
    // repeat until done
    bool switched = false;
    do
    {
        switched = false;
        // For each
        for (int i = 0; i < (arrSize - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                switched = true;
            }
        }
    } while (switched);
};

// sort float array
void sortArray(float *arr, int arrSize)
{
    // repeat until done
    bool switched = false;
    do
    {
        switched = false;
        // For each
        for (int i = 0; i < (arrSize - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                float aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                switched = true;
            }
        }
    } while (switched);
};

// sort double array
void sortArray(double *arr, int arrSize)
{
    // repeat until done
    bool switched = false;
    do
    {
        switched = false;
        // For each
        for (int i = 0; i < (arrSize - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                double aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                switched = true;
            }
        }
    } while (switched);
};

// sort string array
void sortArray(string *arr, int arrSize)
{
    // repeat until done
    bool switched = false;
    do
    {
        switched = false;
        // For each
        for (int i = 0; i < (arrSize - 1); i++)
        {
            int depth = 0; // character position to compare
            if (depth < arr[i].length() && depth < arr[i + 1].length())
            {
                while (int(arr[i][depth]) == int(arr[i + 1][depth]))
                {
                    depth++;
                }
                if (int(arr[i][depth]) > int(arr[i + 1][depth]))
                {
                    string aux = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = aux;
                    switched = true;
                }
            }
            else if (arr[i].length() > arr[i + 1].length())
            {
                string aux = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = aux;
                switched = true;
            }
        }
    } while (switched);
};

// Main Example
int main(int argc, char const *argv[])
{
    // Array with test values
    int size = 10;
    string *list = new string[size];
    list[0] = "Mariana";
    list[1] = "Maria";
    list[2] = "Manuel";
    list[3] = "Miguel";
    list[4] = "Bernardo";
    list[5] = "Daniel";
    list[6] = "Pedro";
    list[7] = "Martim";
    list[8] = "Fabio";
    list[9] = "Claudio";

    // Print list
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << endl;
    }
    cout << endl;

    // Order the string
    sortArray(list, size);

    // Print list
    for (int i = 0; i < size; i++)
    {
        cout << list[i] << endl;
    }
    cout << endl;

    return 0;
}
