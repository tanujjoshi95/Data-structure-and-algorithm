#include <iostream>
using namespace std;




#include <iostream>
#include <queue>
using namespace std;
class node
{
    public:

    int data;
    node * left;
    node * right;

    node(int d)
    {
        this ->data=d;
        this ->left = NULL;
        this ->right =  NULL;
    }
};


node * insertintobst(node * root,int d)
{
    if(root==NULL)
    {
        root=new node(d);
        return root;
    }

    if(root->data<d)
    {
        root->right=insertintobst(root->right,d);
    }
    else
    {
        root->left=insertintobst(root->left,d);
    }
    return root;

}

bool search(node * &root,int d)
{
    // BY USING RECURSION

    if(root->data==NULL)
    {
        return false;
    }

    if(root->data==d)
    {
        return true;

    }

    if(root->data<d)
    {
        search(root->right,d);
    }

    else
    {
        search(root->left,d);
    }

}

bool searchrec(node * &root,int d)
{
    // SEARCH USING RECURSION
    node * temp= root;
    while(temp->data!=NULL)
    {
        if(temp->data==d)
        {
            return true;
        }

        if(temp->data>d)

        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }

    }
    return false;

}


void takeinput(node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertintobst(root,data);
        cin>>data;
    }
}

int main()
{
    node * root = NULL;

    takeinput(root);
   // leveloredertraverse(root);
    return 0;
}
// THE MAIN WORKING FUNCTON

