//Q2. Accept 5 number in an arrayand sort it (bubble sort)
/*
        for i=0 to i <n-i
                for j=0 to j<n-i
                        if arr[j]>arr[j+1]
                                Swap arr[j] and arr[j+1]
*/
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
        int arr[5]={9,8,5,7,2}/*{1,1,1,1,1}*/, flag;
        int n = 5;
        cout<<endl<<"Sorted array before sort"<<endl;
        for (int i = 0; i < n; i++)
        {
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        //BUBBLE SORT
        for (int i = 1; i < n; i++)
        {
                flag =0;
                for (int j = 0; j < n-i; j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                cout<<"Iterating"<<endl;
                                swap(arr[j],arr[j+1]);
                                flag=1;
                        }
                }
                if (flag==0)
                {
                       break;
                }
        }
        cout<<endl<<"Sorted array after sort"<<endl;
        for (int i = 0; i < n; i++)
        {
                cout<<arr[i]<<" ";
        }
        return 0;
}