#include <bits/stdc++.h>
using namespace std;

//Creating Node 
struct Node{
 int data;
 Node *link;
};

Node *head=NULL;

//Function to reverse linked list
void reverseList()
{
Node *p,*c,*n;
p=NULL;
c=head;
while(c!=NULL)
{

 n=c->link;
 c->link=p;
 p=c;
 c=n;
}
head=p;
}

//Function to insert at the end of linked list
void insertEnd (int d)
{

 Node *p = new Node();
 p->data=d;
 p->link=NULL;

 if(head==NULL)
 head=p;
 else
 {
  Node *temp = head;
  while(temp->link != NULL)
  {
   temp=temp->link;
  }
  temp->link=p;

 }

}

//Function to display linked list
void displayList()
{
 Node *p=head;
 while(p!=NULL )
 {
    cout<<p->data<<" ";
    p=p->link;
    
   
 }
 cout<<"\n";
}


int main()
{
 
 int n;
 cout<<"Enter size of list ";
 cin>>n;
 
 
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;
    insertEnd(x); //calling of the function to insert 
 }
cout<<"Input List :";
 displayList();
 reverseList();
cout<<"Output List :";
 displayList();    //To display the list
 return 0;
}