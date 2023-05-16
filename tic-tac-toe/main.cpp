#include <iostream>
using namespace std;

bool isBoardSolved(int arr[3][3])
{
    if (arr[0][0] == 1 && arr[1][1] == 1 && arr[2][2] == 1 || arr[0][0] == 2 && arr[1][1] == 2 && arr[2][2] == 2)
    {
        return true;
    }

    for (int i = 0; i < 3; i++)
    {
        if (arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1 || arr[i][0] == 2 && arr[i][1] == 2 && arr[i][2] == 2)
        {
            return true;
        }
        else if (arr[0][i] == 1 && arr[1][i] == 1 && arr[2][i] == 1 || arr[0][i] == 2 && arr[1][i] == 2 && arr[2][i] == 2)
        {
            return true;
        }
    }

    if (arr[0][2] == 1 && arr[1][1] == 1 && arr[2][0] == 1 || arr[0][2] == 2 && arr[1][1] == 2 && arr[2][0] == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int displayArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main()
{

    int arr[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };
    cout << "Use 0 based indexing" << endl;

    bool gamerunning = true;
    bool correctplace = false;
    int player1row, player1column;
    int player2row, player2column;
    int turns = 0;

    while (gamerunning)
    {

        displayArray(arr);

        while (!correctplace)
        {
            cout << "Player 1 enter row: ";
            cin >> player1row;
            cout << "Player 1 enter column: ";
            cin >> player1column;
            if (arr[player1row][player1column] == 0)
            {
                arr[player1row][player1column] = 1;
                correctplace = true;
                turns++;
            }
            else
            {
                correctplace = false;
            }
        }

        displayArray(arr);
        correctplace = false;

        if (isBoardSolved(arr))
        {
            cout << "!!! Player 1 won !!!" << endl;
            gamerunning = false;
            displayArray(arr);
            break;
        }

        while (!correctplace)
        {
            cout << "Player 2 enter row: ";
            cin >> player2row;
            cout << "Player 2 enter column: ";
            cin >> player2column;
            if (arr[player2row][player2column] == 0)
            {
                arr[player2row][player2column] = 2;
                correctplace = true;
                turns++;
            }
            else
            {
                correctplace = false;
            }
        }
        correctplace = false;
        if (isBoardSolved(arr))
        {
            cout << "!!! Player 2 won !!!" << endl;
            gamerunning = false;
            displayArray(arr);
            break;
        }

        if (turns == 9)
        {
            cout << "!!!Draw !!!";
            gamerunning = false;
            break;
        }
    }

    return 0;
}