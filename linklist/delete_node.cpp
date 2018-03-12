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
//  ~linklist();

    //adding a node
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
        cout<<"value inser6ted "<<a<<endl;
    }
// dis[lay function sort of traversing
    void display()
    {
        cout<<endl;
        node *temp=new node;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->next;
        cout<<endl;

        }

    }

    

    void deleteit(int key)
    {
        node *temp=new node;
        node *temp2=new node;
        temp=head;temp2=head;
        if(temp->data==key)
        {
            head=temp->next;
            return;
        }
        while(temp->next!=NULL)
        {
            if(temp->data==key)
            {
                temp2->next=temp->next;
            }
            temp2=temp;
            temp=temp->next;
        }
        if(temp->data==key)
            temp2->next=NULL;


    }       
};
 int main()
 {
linklist obj;
                for (int i = 0; i <10; ++i)
                {
                    obj.insert(i*10);
                    /* code */
                }
        obj.display();
        for (int i = 0; i < 4; ++i)
        {
            
        int key;
        cin>>key;
        obj.deleteit(key);
        obj.display();
            /* code */
        }
}