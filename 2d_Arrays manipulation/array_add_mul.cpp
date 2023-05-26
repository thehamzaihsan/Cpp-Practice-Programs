#include <iostream>
using namespace std;

int displayarray(int ans[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
int main()
{

    int arr1[3][3] = {0};
    int arr2[3][3] = {0};
    int ans[3][3] = {0};

    // Taking array input array 1
    cout << "Input value in Array 1 one by one" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr1[i][j];
        }
    }

    // Taking array input array 2
    cout << "Input value in Array 2 one by one" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }

    cout << "1.Addition\n2.Multiplication";
    cout << endl;
    int option;
    cin >> option;
    if (option == 1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ans[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        displayarray(ans);
    }

    if (option == 2)
    {
        for (int i = 0; i < 3 ; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    ans[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        displayarray(ans);
    }

    return 0;
}