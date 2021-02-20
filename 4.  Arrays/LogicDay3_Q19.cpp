//Accept data in 3*3 matrix if any row has all 0 replace it with ‘#’ and print the matrix
#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
    int matrix[3][3]={0,1,0,0,0,0,1,0,1};
    int zero[3];
    /*
    cout<<"Enter the data in 3*3 matrix"<<endl;
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            cin>>matrix[x][y];
        }
    }
    */
    
    for(int x=0;x<3;x++)
    {
        for(int c=0;c<3;c++)
        {
            zero[c]=matrix[x][c];
        }

        if(zero[0] == 0  & zero[1] == 0  & zero[2] == 0)
        {          
            for(int y=0;y<3;y++)
            {
                cout<<"# ";
            }
        }

        else{
            for(int y=0;y<3;y++)
            {
                cout<<matrix[x][y]<<" ";
            }
        }
        cout<<endl;
    }     
    return 0;
}

