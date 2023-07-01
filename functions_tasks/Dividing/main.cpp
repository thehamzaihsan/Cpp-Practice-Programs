#include <iostream>
using namespace std;

// function
float divider(float n1, float n2)
{
    // if n2 is not zero than dividing two nums
    if(n2 != 0){
        return n1/n2;
    }
    else{
        return -1;
    }
}
    
int main()
{
    float n1, n2;
    cout << "Enter number 1 then number 2" << endl;
    // Input n1 and n2
    cin >> n1 >> n2;
    // passing values to function and calling it
    cout << divider(n1, n2);
    return 0;
}