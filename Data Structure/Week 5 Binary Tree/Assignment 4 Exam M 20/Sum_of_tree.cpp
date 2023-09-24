#include<bits./stdc++.h>
using namespace std;
class Node{
    public: int val;
            Node* left;
            Node* right;
        Node(int val)
        {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
Node* level_order_input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node* >q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* p =q.front();
        q.pop();

        int l, r;
        cin>> l>>r;
        Node* left;
        Node* right;
        if(l == -1) left =NULL;
        else left = new Node(l);

        if(r == -1) right = NULL;
        else right = new Node(r);

        p->left= left;
        p->right= right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void level_order__print(Node* root)
{
        if (root == NULL)
    {
        cout << "Tree nai" << endl;
        return;
    }
    queue <Node* >q;
    q.push(root);
    while (!q.empty())
    {
        Node* p=q.front();
        q.pop();

        cout<<p->val<<endl;

        if(p->left)q.push(root);
        if(p->right)q.push(root);
    }

}
int main()
{
    level_order_input_tree();
    return 0;
}