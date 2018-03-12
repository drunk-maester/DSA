#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class insertion_in_link_list
{
private:
	node *head,*tail;
public:

	insertion_in_link_list()
	{
		head=NULL;
		tail=NULL;
	}
//	~insertion_in_link_list();

	void insert(int a)
	{
		node *temp=new node;
		temp->data=a;
		temp->next=NULL;
		if (head==NULL)
		{
			head=temp;
			tail=temp;
			/* code */
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
		}

	}
	void Display()
	{
		node *temp=new node;temp=head;
		while(temp!=NULL)
		{
			cout<<"element in link list"<<temp->data<<endl;
			temp=temp->next;
		}
	}
// function for inserting the node in the begining
	void begin_insert(int a)
	{
		node *temp=new node;
		temp->data=a;
		temp->next=head;
		head=temp;

	}
	void insertafter(int val,int x)
	{
		//1. traverse through tail
		node *temp=new node;
		temp=head;
		while(temp->next!=NULL)
		{
			if(temp->data==val)
				break;
			else
				temp=temp->next;
		}
		
		node *temp2=new node;
		temp2->data=x;
		temp2->next=temp->next;
		temp->next=temp2;		
		//2. update next
	}
	
};
int main(int argc, char const *argv[])
{
	insertion_in_link_list l1;
	for (int i = 1; i <=10; ++i)
	{
		l1.insert(i*10);
		/* code */
	}
	l1.Display();
	cout<<"now enter an element at the begining of link list"<<endl;
	int a;
	cin>>a;
	l1.begin_insert(a);
	
	cout<<"link list after insertion"<<endl;
	
	l1.Display();
///scene
cout<<"link list insertion after folllowed by x"<<endl;
	int afte,val;
	cin>>afte>>val;
	cout<<"link list after insertion"<<endl;
	
	l1.insertafter(afte,val);
	l1.Display();	return 0;

}



//do you think you can concatenate two link list by using merge 
// lets try