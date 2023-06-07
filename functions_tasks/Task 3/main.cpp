#include <iostream>
using namespace std;

// function
int area(int width , int height){
    //multiplying width and height
    return width * height;
}

int main()
{
   int width , height;
   cout << "Enter width then height" << endl;
   //Input width and height
   cin >> width >> height;
   //passing values to function and calling it
   cout << "Area is " << area(width , height);
}