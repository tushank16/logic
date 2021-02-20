//Q5. Accept two set of array each having 5 element sort it and put it in new array
#include <iostream>

using namespace std;

int main(int argc, char* argv [])
{
    int array1[5]= {3,1,0,4,6};
    int array2[5]  = {9,8,5,7,2};
    int n=5;
    int newArray[10];
    //sorting the arrays
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(array1[j]>array1[j+1])
                swap(array1[j],array1[j+1]);
        }
    }
    //sorting the arrays
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(array2[j]>array2[j+1])
                swap(array2[j],array2[j+1]);
        }
    }
   
    int i = 0, j = 0, k = 0; 
  
    // Traverse both array 
    while (i<n && j <n) 
    { 
        // Check if current element of first 
        // array is smaller than current element 
        // of second array. If yes, store first 
        // array element and increment first array 
        // index. Otherwise do same with second array 
        if (array1[i] < array2[j]) 
            newArray[k++] = array1[i++]; 
        else
            newArray[k++] = array2[j++]; 
    } 
  
    // Store remaining elements of first array 
    while (i < n) 
        newArray[k++] = array1[i++]; 
  
    // Store remaining elements of second array 
    while (j < n) 
        newArray[k++] = array2[j++];
    
    cout<<endl<<"Sorted Merged array after sort"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<newArray[i]<<" ";
    }
    return 0;
}

