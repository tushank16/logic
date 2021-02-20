//Q7. Accept 5 number in an array ( repeat numbers ) print unique array
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
    int unique[5];
    int uniquePtr = 0;
    int temp;
    bool flag = false;
    cout<<"Enter 5 number in an array "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>temp; 
        //cout<<"Entered Value is "<< temp <<endl;
        for (int j = 0; j < uniquePtr; j++)
        {
            //cout<<"Checking if "<<temp<<" is matching with "<<unique[j]<<endl;
            if(unique[j]==temp){
                flag = true;
            }
        }

        if (flag==false)
        {
            //cout<<"Adding "<<temp<<" to unique array"<<endl;
            unique[uniquePtr]= temp;
            uniquePtr++;

        }
        flag = false;
    }
    cout<<"unique array "<<endl;
    for (int i = 0; i < uniquePtr; i++)
    {
      cout<<unique[i]<<" "; 
    }

    return 0;
}

