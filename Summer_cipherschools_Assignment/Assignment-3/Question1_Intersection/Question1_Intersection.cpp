#include <bits/stdc++.h>
using namespace std;

vector<int> intersection( vector<int> nums1,vector<int> nums2)    //Function for finding the intersected elements
{
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int x=min(nums1.size(),nums2.size());
    int j=0;
    vector<int> temp;
    for(int i=0;i<x;)
    {
        if(nums1[i]==nums2[j]) 
        {
            temp.push_back(nums1[i]);
            i++;
            j++;
        }
        if(nums1[i]>nums2[j])
        j++;
        if(nums1[i]<nums2[j]) 
        i++;
    }
    return temp;
}
int main() {
    int n1,n2;
    cout<<"Enter Size for Array 1:";
    cin>>n1;
    vector<int> nums1;
    cout<<"Enter elements for Array 1 :"<<endl;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    cout<<"Enter Size for Array 2:";
    cin>>n2;
    vector<int> nums2;
    cout<<"Enter elements for Array 2 :"<<endl;
    for(int i=0;i<n2;i++)
    {
        int y;
        cin>>y;
        nums2.push_back(y);
    }
    vector<int> p=intersection(nums1,nums2);
    for(auto z:p)
    {
    cout<<z<<" ";
    }
}