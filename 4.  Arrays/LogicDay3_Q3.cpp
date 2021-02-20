//Q3. Accept 5 number in an array and sort it (selection sort)
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

        //SELECTION SORT
        for(int i=0;i<n-1;i++)
        {
                int smallest = i;
                for(int j = i+1;j<n;j++)
                {
                        if(arr[j]<arr[smallest])
                        {
                                smallest = j;
                        }
                }
                swap(arr[i],arr[smallest]);
        }
        
        cout<<endl<<"Sorted array after sort"<<endl;
        for (int i = 0; i < n; i++)
        {
                cout<<arr[i]<<" ";
        }
        return 0;
}