#include <iostream>
using namespace std;

// function
int getAverage(int arr[])
{
    int sum = 0;
    int ave;

    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    ave = sum / 10;

    return ave;
}

int main()
{
    int arr[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Array value " << i + 1 << " ";
        cin >> arr[i];
    }

    cout << "Average is " << getAverage(arr);
    return 0;
}