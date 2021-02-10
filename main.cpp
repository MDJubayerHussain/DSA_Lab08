// Md. Jubayer Hussain NSU
//Hackerrank id : @jubayer_1996Hus1

//Linkedlist Insertion
#include<iostream>
using namespace std;

struct Node
{
    int data ;
    Node * next;

};
Node * head;
void Insert (int value)
{
    Node* a;
    a=new Node();
    a->data=value;
    a->next=NULL;
    if (head!=NULL)
    {
        a->next=head;
    }
    head=a;
}
void Insertlast(int value)
{
   Node* node =new Node();
   node->data=value;
   node->next=NULL;
   Node* nextval= head;
   while(nextval->next!=NULL)
   {
       nextval= nextval->next;
   }
   nextval->next=node;
}
void Print()
{
    Node* node = head;
    cout<<"List is : ";
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    //node=node->next;
    cout<<endl;
}

int main()
{
    head =NULL;
    int n;
    cout<<"Enter how many number you want to insert  : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        Insert(temp);
        Print();
    }
    cout<<endl;
    int n1,n2;
    cout<<"Enter the last two number :";
    cin>>n1>>n2;
    Insertlast(n1);
    Insertlast(n2);
    Print();
}
