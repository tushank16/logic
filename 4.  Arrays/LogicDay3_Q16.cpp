/*Q16. Let user enter number 0 to 15 and you accept them as follows
0 2 5 9
1 4 8 12
3 7 11 14
6 10 13 15
*/

#include <iostream>
using namespace std;

int main(int argc, char* argv [])
{
    int arr[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    //int array[4][4]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    //int arr1[4],arr2[4],arr3[4],arr4[4];
    /*for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ()
            {
                cout<<i<<j<<" ";
            }
            
        }
        cout<<endl;
    }
    */
    int k=0; 
    int i=0;
    while(i < 16)
    {
        
        cout<<arr[i]<<" ";
        i++;
        i=i+i;
       
    }
    return 0;
}