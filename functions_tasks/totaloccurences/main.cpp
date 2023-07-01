#include <iostream>
using namespace std;

// function
int totaloccurances(string str, char t)
{
    int count = 0;

    // for loop to loop over each letter of string
    for (int i = 0; i < str.size(); i++)
    {
        // if that  letter is equal to target than count is increase
        if (str[i] == t)
        {
            count++;
        }
    }

    // return count
    return count;
}

int main()
{
    string str;
    char target;

    // taking input
    cout << "Enter string: ";
    cin >> str;
    cout << "Enter Target: ";
    cin >> target;

    // calling function
    cout << totaloccurances(str, target);
}