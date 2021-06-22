#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number"<<endl;
    cin>>n;
    
    for(i=1;i<=n;i++)             //Loop for row
    {
        
        for(j=1;j<=n;j++)        //Loop for coloumn
        {
            
            if(j>=(n+1)-i)
            {
                cout<<"*";
            }
            
            else
            {
                cout<<"";
            }
            cout<<"\t";
        }
        cout<<"\n";
    }
}