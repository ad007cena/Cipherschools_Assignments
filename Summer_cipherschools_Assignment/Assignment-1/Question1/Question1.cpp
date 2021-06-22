/*Armstrong number : As stated in the question take input and print yes/no depending on whether
a number is or not an armstrong number.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,n,n1,result,armstrong=0;
    cin>>num;
    int digits = 0;
      n=num;
    while (n != 0)
    {
        n = n / 10;
        ++digits;
    }
    n = num;
    while (n != 0)
    {
       n1=n % 10;
       result = round(pow(n1, digits));
       armstrong = armstrong + result;
       n=n/10; 
    }
   
    if(armstrong == num)
     {
      cout<<"Yes"<<endl;
     }
    else
    {
      cout<<"No"<<endl;
    }

}
