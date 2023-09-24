#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// creation of the tree

node *tree(node *root)
{
    int data;
    cout << "Enter the data : ";
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data in left of node " << data << " : " << endl;
    root->left = tree(root->left);
    cout << "Enter the data in the right of node " << data << ": " << endl;
    root->right = tree(root->right);
    return root;
}

// traversal of the binary tree

void leveloredertraverse(node *root)
{
    // cout<<"enter";
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void buildfromlevel(node *&root)
{
    queue<node *> q;
    cout << "\nEnter the root value : ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        int leftdata;
        cout << "\nEnter the left node for  " << temp->data << " : ";
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        int rightdata;
        cout << "\nEnter the right node for" << temp->data << " : ";
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

// counting of leaf node

void counting(node* root,int &count)
{
    if(root==NULL)
    {
        return;
    }

    counting(root->left,count);

    if(root->right==NULL && root->left==NULL)
    {
        count++;
    }
    counting(root->right,count);

    

    
}

int main()
{
    node *root = NULL;
    int c=0;
    // tree(root);
    buildfromlevel(root);
    leveloredertraverse(root);
    // buildfromlevel(root);
   counting(root,c);
   cout<<"The number of leaf node is : "<<c<<endl;
   
   
    return 0;
}
