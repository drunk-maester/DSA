//source geeksforgeeks
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left, *right;
};
 int minDepth(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
       return 1;
 if (!root->left)
       return minDepth(root->right) + 1;
   if (!root->right)
       return minDepth(root->left) + 1;
 
    return min(minDepth(root->left), minDepth(root->right)) + 1;
}
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data  = data;
    temp->left  = temp->right = NULL;
    return (temp);
}
 
int main()
{
    Node *root        = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    cout << minDepth(root);
    return 0;
}