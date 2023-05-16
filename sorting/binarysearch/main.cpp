#include <iostream>
using namespace std;

int main()
{

    // binarysearch
    const int array_size = 13;
    int arr[array_size] = {1, 3, 13, 23, 32, 34 , 35 , 39 , 45 , 51 , 54 , 55 , 60};
    int search;
    int mid = (array_size / 2) -1 ;
    int lower_bound = 0;
    int higher_bound = array_size;

    cout << "search for:";
    cin >> search;

    for (int i = lower_bound; i < array_size; i++)
    {
        if (arr[mid] == search)
        {
            cout << "index:" << mid;
            break;
        }
        else if (arr[mid] < search)
        {
            lower_bound = mid + 1;
            mid = (lower_bound + higher_bound)/2;
        }
        else   
        {
            higher_bound = mid + 1;
            mid = (lower_bound + higher_bound)/2;
        }
        
    }

}