#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
	
};
class circularll
{
private:
	node *head;
	node *tail;
public:
	circularll()
	{
		head=NULL;
		tail=NULL;
	}
	//~circularll();



	void insert(int a)
	{
		node *temp=new node;
		temp->data=a;		
		if(head==NULL)
		{
			temp->next=temp;	
			head=temp;
		}
		else
		{
			tail=head;
			while(tail->next!=head)
				tail=tail->next;
			temp->data=a;
			temp->next=head;
			tail->next=temp;				
		}
	}
	void display()
	{
		node *temp=new node;
		temp=head;
		do
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}while(temp!=head);
	}
	void deleteit(int x)
	{
		node *prev=new node;
		node *curr=new node;
		curr=head;
		if((curr->next==head)&&(curr->data==x))
			head=NULL;
		else
		{

		cout<<"cp1"<<endl;
			while(curr->next!=head)
			{	

				if(curr->data==x)
				{

					prev->next=curr->next;		

				}
				prev=curr;
				curr=curr->next;
			}
		}
		
	}




};
int main(int argc, char const *argv[])
{
	circularll cl;
	for (int i = 1; i < 10; ++i)
	{
		cl.insert(i);
	}	
	cl.display();
	int x;
	cout<<"bol"<<endl;
	cin>>x;
	cl.deleteit(x);
	cl.display();
	return 0;
}