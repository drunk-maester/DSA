#include<iostream>
using namespace std;
struct node
{
int data;
node *left;
node *right;	
};
class tree
{
private: 
	node *root;
	bool flag;
public:
	tree()
	{
		root=NULL;
		flag=true;	
	}
	
     void insert(int a)
      {
      		node *temp =new node;
      		node *parent;
      		temp->data=a;
      		temp->right=NULL;
      		temp->left=NULL;
      		if(flag)
      			{root=temp;flag=false;}
      		else
      		{
      			node *ptr=new node;
      			ptr=root;
      			while(ptr!=NULL)
      			{
      				parent=ptr;
      				if(a<ptr->data)
      					ptr=ptr->left;
      				else
      					ptr=ptr->right;
				}
				if(a<parent->data)
					parent->left=temp;
				else
					parent->right=temp;
      		}
      		
      }
      void treedisplay()
      {
      	cout<<"Enter 1 for preorder display"<<endl;
      	cout<<"Enter 2 for inorder display"<<endl;
      	cout<<"Enter 3 for postorder display"<<endl;
      	int t;
      	cin>>t;
      	switch(t)
      	{
      		case 1:
      				cout<<"preorder"<<endl;
      				 preorder(root);
      				 break;
      		case 2:

      				cout<<"preorder"<<endl;
      				 inorder(root);
      				 break;
      		case 3:

      				cout<<"preorder"<<endl;
      				 postorder(root);
      				 break;
      		default:
      				 cout<<"jai mata di"<<endl;
      				 //preorder(root);
      					
      	}
      }
      void preorder(node *temp)
      {
      	if(temp!=NULL)
      	{	cout<<"   "<<temp->data<<"   "<<endl;	
      		preorder(temp->left);
      		preorder(temp->right);
      	}
      }

      void inorder(node *temp)
      {
      	if(temp!=NULL)
      	{
      		inorder(temp->left);
      		cout<<"   "<<temp->data<<"   "<<endl;	
      		inorder(temp->right);
      	}
      }

      void postorder(node *temp)
      {
      	if(temp!=NULL)
      	{
      		postorder(temp->left);
      		postorder(temp->right);
      		cout<<"   "<<temp->data<<"   "<<endl;	
      		
      	}
    }

};
int main(int argc, char const *argv[])
{
	tree bst;
	int t,ip;
	cout<<"no. of elements you want to insert"<<endl;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cout<<"node"<<endl;
		cin>>ip;
		bst.insert(ip);
	}
	bst.treedisplay();

	return 0;
}