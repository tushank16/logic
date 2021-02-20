//Q4. Accept 5 number in an array and sort it (insertion sort)
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
         int arr[5]={9,2,3,1,6};
        int n = 5;
        cout<<endl<<"Sorted array before sort"<<endl;
        for (int i = 0; i < n; i++)
        {
                cout<<arr[i]<<" ";
        }

        //INSERTION SORT
        int i, j, key;
        for (i = 0; i < n; i++)  
        {  
                key = arr[i];  
                j = i - 1;  
                while (j >= 0 && arr[j] > key) 
                {  
                        arr[j + 1] = arr[j];  
                        j = j - 1; 
                }  
                arr[j + 1] = key;  
        }  
        
        cout<<endl<<"Sorted array after sort"<<endl;
        for (int i = 0; i < n; i++)
        {
                cout<<arr[i]<<" ";
        }
        return 0;
}