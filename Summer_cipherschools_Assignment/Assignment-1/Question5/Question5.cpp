
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string toggle;
    int i;
    cout<<"Enter a String with only Lowercase or Uppercase Alphbets : ";
    getline(cin,toggle);
    for(i=0;i<toggle.length();i++)
    {
        if(toggle[i]>=65 && toggle[i]<=91)    //This will check for uppercase alphabets
        {
            toggle[i]=toggle[i]+32;          //This will convert uppercase to lowercase alphabets
        }
        
       else 
        {
            toggle[i]=toggle[i]-32;         //This will convert lowercase to uppercase alphabets
        }
    }
    cout<<toggle<<endl;
}

    
    
    
