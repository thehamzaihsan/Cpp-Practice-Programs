#include <iostream>
using namespace std;

int main(){
    //declaring arrays
    int arr1[3]={2, 4, 8};
    int arr2[3]={2, 5 ,7};
    int arr3[3]={2, 4, 8};

    //calculating size of array
    int size1 = sizeof(arr1) / sizeof(arr1[1]);
    int size2 = sizeof(arr2) / sizeof(arr2[1]);
    int size3 = sizeof(arr3) / sizeof(arr3[1]);

    //initializing variable for iteration
    int i = 0, j = 0, k = 0;

    cout << "The common elements are: "<<endl;
    //using the while loop statement 
    //the program runs untill i,j,k is less than the size of arrays
     while(i < size1 && j < size2 && k < size3){

        //when the first value of all arrays are equal
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            //output common number
            cout << arr1[i] << " "<<endl;

            //irtration vale will be increased 
            i++;
            j++;
            k++;
        }

        //when i element of array1 is less than j element of array2
        else if (arr1[i] < arr2[j])
        {
            //itration of 1st arry will be increased 
            i++; 
        }
        else if(arr2[j] < arr3[k] ){
            //iteration of 2nd arry will be increased
            j++; 
        }
        else{
            //iteration of 3rd arry will be increased
            k++; 
        }
        
     }
	return 0;
}