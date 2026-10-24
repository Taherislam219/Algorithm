#include<iostream>
using namespace std;

struct Node
{

    int data;
    Node *left,*right;

};

void insert(Node *&root,int x)
{

    if(root==nullptr)
    {
        root=new Node;
        root->data=x;
        root->left=root->right=nullptr;

        return;
    }

    if(x<root->data)
    {
        insert(root->left,x);
    }
    else if(x>root->data)
    {
        insert(root->right,x);
    }

}

void bst(Node *root,int el)
{

    if(root==nullptr)
    {
        cout<<"Not found";
        return;
    }

    if(root->data==el)
    {
        cout<<"Found";
        return;
    }
    else if(el<root->data)
    {
        bst(root->left,el);
    }
    else if(el>root->data)
    {
        bst(root->right,el);
    }

}

void preorder(Node *root)
{

    if(root==nullptr)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


int main()
{

    Node *root=nullptr;
    int x;

    cout<<"Enter data (-1 for stop) : ";
    while(true)
    {

        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(root,x);
    }

    cout<<"Preorder travarsel :";
    preorder(root);

    int el;
    cout<<"Enter element to search :";
    cin>>el;

    bst(root,el);

    cout<<endl;

    return 0;

}
