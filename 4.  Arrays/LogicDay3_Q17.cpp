/*take two array from the user separated by space atleast one of them should be of 20 inlength. and
none of them is more than 40 in length. and it should gives the new o/p array followed by new line with
sum of above array
sample input :999 11111111111111111111
o/p 11111111111111112110
*/

// sum of 2 arrays
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
    int A[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int B[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int Sum[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int A_length;
    int B_length;
    cout<<"Enter the length of array 1( enter less than 20)"<<endl;
    cin>> A_length;
    A_length=20-A_length;
    for (int i = A_length; i < 20; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the length of array 2( enter less than 20)"<<endl;
    cin>> B_length;
    B_length=20-B_length;
    for (int i = B_length; i < 20; i++)
    {
        cin>>B[i];
    }
    cout<<endl<<"Array A :";

    for (int i = 0; i < 20; i++)
    {
        cout<<A[i]<<" ";
    }

    cout<<endl<<"Array B :";
    for (int i = 0; i < 20; i++)
    {
        cout<<B[i]<<" ";
    }
    int CarryOver=0;
    for (int i = 19; i > 14; i--)
    {
        int k  = (A[i]+B[i]+CarryOver);
        if(k<10)
        {
            cout<<"k<10"<<endl;
            Sum[i]=A[i]+B[i]+CarryOver;
            cout<<Sum[i]<<" = "<<A[i]<<"+"<<B[i]<<"+"<<CarryOver<<endl;
            CarryOver=0;
        }
        if(k>10)
        {
            cout<<"k>10"<<endl;
            Sum[i]=(A[i]+B[i]+CarryOver)%10;
            CarryOver=1;
            cout<<Sum[i]<<" = "<<A[i]<<"+"<<B[i]<<"+"<<CarryOver<<endl;

        }
        if(k==10)
        {
            cout<<"k==10"<<endl;
            Sum[i]=0+CarryOver;
            CarryOver=1;
            cout<<Sum[i]<<" = "<<A[i]<<"+"<<B[i]<<"+"<<CarryOver<<endl;
        }

    }

    cout<<endl;
    for (int i = 0; i < 20; i++)
    {
        cout<<Sum[i]<<" ";
    }
    return 0;
}