#include<iostream>
using namespace std;
int main()
{
    int sum=0,max=0,arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(i<4 && j<4)
            {
                for(int k=i;k<=i+3;k++)
                {
                    sum+=arr[k][j]+arr[k][j+2];
                }
                sum+=arr[i+1][j+1];
            }                        
        }
        if(sum>max)
        max=sum;
    }
    cout<<max;
    return 0;
}
