#include<iostream>
using namespace std;
struct node{
  int data;
node *left,*right;
};
class binstree
{
      private:
        node *root;
        bool flag; 
      public:
        binstree()
        {
          root=NULL;
          flag=true;
        }
        void insert(int a)
        {
          node *temp=new node;
          node *parent;
          temp->data=a;
          temp->left=NULL;
          temp->right=NULL;
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
         cout<<"item "<<a<<"  inserted"<<endl;
        } 

        void inord_trav()
        {
          inord_goto(root);
        }
        void inord_goto(node *temp)
        {
          if(temp!=NULL)
          {
            inord_goto(temp->left);
            cout<<"  "<<temp->data<<"  ";
            inord_goto(temp->right);
          }
        }
};
int main(int argc, char const *argv[])
{
  binstree bst;
  for (int i = 1; i < 11; ++i)
  {
    bst.insert(i);
    /* code */
  }
  bst.inord_trav();
  return 0;
}
