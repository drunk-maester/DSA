#include<iostream>
using namespace std;
struct node
{
		int data;
		node *next;	
};
class linklist
{
private:
	node *head,*tail;
public:
	linklist()
	{
		head = NULL;
		tail = NULL;
	}
//	~linklist();
	void insert(int a)
	{
		node *temp=new node();
		temp->data=a;
		temp->next=NULL;
		if (head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
		}
		cout<<"inserted"<<a<<endl;
	}
	void display()
	{
		node *temp=new node;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data;
			temp=temp->next;
		cout<<endl;
		}
	}	
};


 int main(int argc, char const *argv[])
 {
 	linklist ll;
	for (int i = 0; i <10; ++i)
	{
	ll.insert(i*10);
	}
	ll.display();
 }