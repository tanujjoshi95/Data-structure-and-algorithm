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


void leveloredertraverse(node* root)
 {
   // cout<<"enter";
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp ->data << " ";
            if (temp ->left)
            {
                q.push(temp ->left);
            }

            if (temp ->right)
            {
                q.push(temp ->right);
            }
        }
    }

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
    leveloredertraverse(root);
    return 0;
}