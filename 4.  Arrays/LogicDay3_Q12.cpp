//Q12. Accept 10 number in an array and print highest 3 number
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
    int A[10];
    int Highest, SecondHighest, ThirdHighest;
    int temp;
    cout<<"insert no in the array"<<endl;
    cin>>A[0];
    Highest=A[0];
    cin>>A[1];
    SecondHighest=A[1];
    if(Highest<SecondHighest)
    {
        swap(Highest,SecondHighest);
    }
    cin>>A[2];
    ThirdHighest=A[2];
    if(Highest>ThirdHighest>SecondHighest)
    {
        swap(ThirdHighest,SecondHighest);
    }
    if (ThirdHighest>Highest)
    {
        swap(ThirdHighest,Highest);
        swap(ThirdHighest,SecondHighest);
    }
    


    for (int i = 3; i < 10; i++)
    {
        cin>>A[i];
        temp = A[i];
        if(temp>Highest)
        {
            swap(ThirdHighest,SecondHighest);
            swap(Highest,SecondHighest);
            Highest = temp;
        }
        else
        {
            if (temp>SecondHighest)
            {
                swap(ThirdHighest,SecondHighest);
                SecondHighest = temp;
            }
            else
            {
                if (temp>ThirdHighest)
                {
                    ThirdHighest = temp;
                }
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"Highest : "<<Highest<<endl;
    cout<<"SecondHighest : "<<SecondHighest<<endl;
    cout<<"ThirdHighest : "<<ThirdHighest<<endl;


    return 0;
}
