#include <iostream>
using namespace std;

int main()
{

    // bubblesort
    const int array_size = 10;
    int arr[array_size];
    int max = arr[1];
    int temp;
    int swap_repeat = 5;

    cout << "Input Array: " << endl;
    for (int i = 0; i < array_size; i++)
    {
        cout << "Input Array value " << i << ": ";
        cin >> arr[i];
    }

    char option;
    cout << "asscending(a) or descending(d)";
    cin >> option;
    if (option == 'a')
    {
        for (int i = 0; i < swap_repeat; i++)
        {
            for (int j = 0; j < array_size - 1; j++)
            {

                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        
    }
    else if (option == 'd')
    {
         for (int i = 0; i < swap_repeat; i++)
        {
            for (int j = 0; j < array_size - 1; j++)
            {

                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << " ";
    }

    int median;

    if (array_size % 2 != 0)
    {
        median = array_size / 2;
        cout << "median :" << arr[median];
    }
    else
    {
        median = array_size / 2;
        cout << "median :" << (arr[median] + (arr[median] + 1)) / 2;
    }
    return 0;
}