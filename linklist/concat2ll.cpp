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
 		head=NULL;
 		tail=NULL;

 	}
 //insert
 	node *gethead()
 	{
 		return head;
 	}
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
 	void Display()
 	{
 		cout<<endl;
 		node *temp=new node;
 		temp=head;
 		while(temp!=NULL)
 		{
 			cout<<temp->data<<endl;
 			temp=temp->next;
 		}

 	}
 //	void concat()
 static void concatenate(node *a,node *b)
    {
        if( a != NULL && b!= NULL )
        {
            if (a->next == NULL)
                a->next = b;
            else
                concatenate(a->next,b);
        }
        else
        {
            cout << "Either a or b is NULL\n";
        }
    }


 //	~linklist();
 	
 };
 int main()
 {
 	linklist o1,o2;
 	for (int i = 0; i < 10; ++i)
 	{
 		o1.insert(i*10);
 		o2.insert((i+10)*10);
 		/* code */
 	}
 	o1.Display();
 	o2.Display();
 	linklist::concatenate(o1.gethead(),o2.gethead());
 	o1.Display();
 }