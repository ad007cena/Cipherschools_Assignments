
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int high,low,i,j,count=0;
    
    cout<<"Enter Low :";
    cin>>low;
    cout<<"Enter High :";
    cin>>high;
    
    for(i=low;i<high+1;i++)
    {
        for(j=2;j<=i/2;j++)
        
        {
            
            if(i%j==0)
            {
                count=1;
                break;
            }
            else
            {
                count=0;
            }
            
        }
        if (count==0 && i!=1)
        {
            cout<<i<<endl;
        }
        }
    }


    
    
    
