#include <iostream>
using namespace std;

// Finding Frequency in an array
int main()
{

    const int size = 10;
    int arr[size] = {1, 2, 3, 3, 5, 7, 5, 4, 12, 8};
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    const int maxc = max + 1;
    int freq[maxc] = {0};

    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < maxc; i++)
    {
        if (freq[i] != 0)
        {
            cout << "Number " << i << ": " << freq[i] << endl;
        }
        
    }

    return 0;
}
