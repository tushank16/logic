//Q1. Accept 5 number in an array, accept a number from user and check if given number is there in an array or not
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
    int array[5], no, flag = 0;
 
    cout<<"Enter 5 number in array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter a number to check if it is there in the array"<<endl;
    cin>>no;
    for (int i = 0; i < 5; i++)
    {
        if(no==array[i])
        {
            flag = 1;
            cout<<"No is present at index  "<<i<<endl;
        }
    }
    if(flag == 0)
        cout<<no<<" is NOT present in the array"<<endl;
    return 0;
}

