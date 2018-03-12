#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class loopinll
{
private:
	node *head;
	node *tail;
public:
	loopinll()
	{
		head=NULL;
		tail=NULL;
	}
//	~loopinll();
	void insert(int a)
	{
		node *temp=new node;
		temp->data=a;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=tail->next;
		}
	}
	void display()
	{
		node *temp=new node;
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	//say i want to insert loop at the element x
	/*   a  ->   b  ->c  ->d  ->x -> e  -> f ->g --
								^				    |
								| z <- t  <- p <-o-
	*/
	void insertloop(int a)
	{
		node *temp1=new node;
		node *temp2=new node;
		temp1 = head;
		while(temp1->data!=a)
		{
			temp1=temp1->next;
		}
		temp2=temp1->next;
		while(temp2->next!=NULL)
		{temp2=temp2->next;
		}		
		temp2->next=temp1;
		cout<<"Loop inserted successfuly at"<<a<<endl;
	}

	int loopdetect()
	{
		node *fast=new node;
		node *slow=new node;
		fast=head;
		slow=head;
		while(slow && fast && fast->next)
		{
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast)
			{
			remove(fast);
			return 1;
			}
		}

		return 0;
	}
	void remove(node *fast)
	{
		node *slow=new node;
		slow=head;
		while((slow->next)!=(fast->next))
		{
			slow=slow->next;
			fast=fast->next;


		}
		if((slow->next)==(fast->next))
			{fast->next=NULL;}
	cout<<"loop removed"<<endl;
	}



};
int main(int argc, char const *argv[])
{
	loopinll ll;
	for (int i = 1; i <= 10; ++i)
	{
		ll.insert(i*2);
		
	}
	ll.display();
	int x;
	cout<<"loop at ?"<<endl;
	
	cin>>x;
	ll.insertloop(x);
	//ll.display();	
	if(ll.loopdetect())
	 	cout<<"loop detected and removed"<<endl;
	 	else
	  	cout<<"loop not detected"<<endl;
	 ll.display();
	return 0;

}