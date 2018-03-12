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

	void insert_after(int a,int z)
	{
		node *temp=new node;
		temp=head;

		node *temp2=new node;
		temp2->data=z;
		while((temp->data!=a)&&(temp->next!=head))
		{
			temp=temp->next;
		}
			temp2->next=temp->next;
			temp->next=temp2;

	}





};
int main(int argc, char const *argv[])
{
	circularll cl;
	for (int i = 1; i < 10; ++i)
	{
		cl.insert(i);
		/* code */
	}
	cl.display();
	int x,y;
	cout<<"bitch be humble"<<endl;
	cin>>x>>y;
	cl.insert_after(x,y);
	cl.display();
	return 0;
}