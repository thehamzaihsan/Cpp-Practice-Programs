#include <iostream>
using namespace std;

int main()
{

    // linear search
    const int array_size = 13;
    int arr[array_size] = {1, 3, 13, 23, 32, 34, 35, 39, 39, 51, 54, 55, 60};
    int search;
    int count = 0;

        cout << "search for:";
        cin >> search;
    for (int i = 0; i < array_size; i++)
    {

        if (arr[i] == search)
        {
            cout << "Index:" << i << endl;
            count++;
        }
    }

    cout << "Reapeated: " << count << " times.";
}