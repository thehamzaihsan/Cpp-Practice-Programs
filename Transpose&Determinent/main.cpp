#include <iostream>
using namespace std;

const int row = 2;
const int col = 2;
int array[row][col] = {{1, 2}, {1, 2}};

int displayarray(int ans[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int transpose(int arr[row][col])
{
    int ans[col][row] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }

    cout << endl;
    displayarray(ans);
    return 0;
}

int determinent(int arr[row][col])
{
    int ans;
    ans = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);
    cout << endl
         << ans;
    return 0;
}
int main()
{

    cout << "Input value in Array  one by one" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << endl;
    displayarray(array);
    cout << endl;

    cout << "1.Transpose\n2.Determinent";
    cout << endl;
    int option;
    cin >> option;
    cout << endl;
    if (option == 1)
    {
        transpose(array);
    }
    else if (option == 2)
    {
        determinent(array);
    }

    return 0;
}