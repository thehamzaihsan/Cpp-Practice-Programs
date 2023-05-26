#include <iostream>
using namespace std;

int main()
{
    // declaring array
    int arr[3][3] = {0};

    // Taking array input

    cout << "Input value in Array one by one" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "You inputed this array" << endl;

    // displaying the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
    cout << "1.The sum of both diagonals\n2.Sum of rows\n3.Sum of Col\n4.The sum of the upper triangle\n5.The sum of the lower triangle\n6.The largest element in each row\n7.The largest element in each col\n";

    int option;
    cin >> option;
    int sum = 0;

    if (option == 1)
    {
       sum = arr[1][1] + arr[0][0] + arr[2][2] + arr[0][2] + arr[1][1] + arr[2][0];
       cout << sum;
    }
    else if (option == 2)
    {
        int row;
        cout << "Enter row no.";
        cin >> row;

        for (int i = 0; i < 3; i++)
        {
            sum += arr[row][i];
        }

        cout << sum;
    }
      else if (option == 3)
    {
        int col;
        cout << "Enter col no.";
        cin >> col;

        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][col];
        }

        cout << sum;
    }
    else if (option == 4)
    {   
        for (int i = 0; i < 3; i++)
        {
            for (int j = i; j < 3; j++)
            {
                sum += arr[i][j];
            }
            
        }

        cout << sum;
    }
    else if (option == 5)
    {
         for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += arr[i][j];
            }
            
        }

        cout << sum;
    }
    else if (option == 6)
    {
        int max;
        for (int i = 0; i < 3; i++)
        {
            max = arr[i][0];
            for (int j = 0; j < 2; j++)
            {
                if ( max < arr[i][j+1])
                {
                    max = arr[i][j+1];
                }
                
            }
            
            cout << "Row " <<i << " max number is: " << max << endl;
            
        }
        
    }
     else if (option == 7)
    {
        int max;
        for (int i = 0; i < 3; i++)
        {
            max = arr[0][i];
            for (int j = 0; j < 2; j++)
            {
                if ( max < arr[j+1][i])
                {
                    max = arr[j+1][i];
                }
                
            }
            
            cout << "Column " <<i << " max number is: " << max << endl;
            
        }
    }
    

    
}