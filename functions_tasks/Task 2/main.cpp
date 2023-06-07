#include <iostream>
using namespace std;

// function
char U_case(char ch)
{
    // minus 32 to make upper case
    ch = ch - 32;
    return ch;
}

char L_case(char ch)
{
    // adds 32 to make lower case
    ch = ch + 32;
    return ch;
}

int main()
{
    char ch;

    // input char
    cin >> ch;

    // if it uppercase than L case function is called
    if (ch >= 66 && ch <= 91)
    {
        cout << L_case(ch);
    }
    // else lower case function is called
    else
    {
        cout << U_case(ch);
    }
}