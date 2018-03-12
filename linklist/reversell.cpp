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
    void reverse()
    {
        node *prev=new node;
        node *cur=new node;
        cur=head;prev=head;
        while(cur->next!=NULL)
        {
            
            cur->next=prev;
            cur

        }


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
            /* code */
        }
}


/*public void reverseIterative(Node head){
        Node currNode = head;
        Node nextNode = null;
        Node prevNode = null;

        while(currNode!=null){
            nextNode = currNode.next;
            currNode.next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        head = prevNode;
        System.out.println("\n Reverse Through Iteration");
        display(head);
    }
