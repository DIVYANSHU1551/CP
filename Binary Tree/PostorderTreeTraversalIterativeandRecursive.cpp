// Recursive function to perform postorder traversal of the tree
void postorder(Node *root)
{
   if(root == nullptr)
   return;

   postorder(root->left);

   postorder(root->right);

   cout <<root->data<<" ";

}

//Iterative function to perform postorder traversal of the tree
void postorderIterative(Node* root)
{
    stack<Node*> stk;
    stk.push(root);

    stack<int> out;

    while(!stk.empty())
    {
        Node *curr=stk.top();
        stk.pop();

        out.push(curr->data);
        
        if(curr->left)
        stk.push(curr->left);

        if(curr->right)
        stk.push(curr->right);

    }

while(!out.empty())
{
    cout<<out.top()<< " ";
    out.pop();
}
}