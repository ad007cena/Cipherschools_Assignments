
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;     //Ask user to enter size
    int arr[n],i,j,x;
  
    cout<<"Enter the Array Elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];              //Enter array elemnts
    }
    
    cout<<"Enter the number for First and Last Occurence"<<endl;
    
    cin>>x;  
    
    
    
    for(i=0;i<n;i++)       //This is for finding the first occurence
    {
        if(arr[i]==x)
        {
             cout<<"First Occurence = "<<i<<endl;
             break;
        }
       
    }
    
    
    for(j=n;j>=0;j--)       //This is for finding the last occurence
    {
        if(arr[j]==x)
        {
             cout<<"Last Occurence = "<<j<<endl;
             break;
        }
       
    }
    
}
    