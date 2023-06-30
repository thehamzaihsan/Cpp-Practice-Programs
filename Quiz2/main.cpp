#include <iostream>
using namespace std;

void cnicinfo(int cnic[]){
    string arr[8] = {"NAN", "KPK", "FATA", "Punjab", "Sindh", "Balochistan", "Islamabad" , "GB"};
    cout << "You are from "<< arr[cnic[0]] << endl;
    string gender;
    gender = cnic[12]%2 ==0 ? "Female" : "Male";
    cout << "You are a " << gender;
    
}
int main()
{
    int cnic[13] = {0};
    bool correct = false;
    while (!correct)
    {
        for (int i = 0; i < 13; i++)
        {
            cin >> cnic[i];
            if (cnic[i] == '-')
            {
                cout << "Error start again" << endl;
            }
        }

        if (cnic[0] > 1 && cnic[0] < 7)
        {
            correct = true;
        }
        else
        {
            cout << "Not valid";
        }
    }

    cnicinfo(cnic);
}