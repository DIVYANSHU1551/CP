//Recursive Function to perform preorder tranversal
void preorder(Node *root)
{
  if(root==nullptr)
   return;

   cout<<root->data<<" ";

   preorder(root->left);

   preoder(root->right);
}

//To convert above recursive procedure to iterative one,we need an explicit stack.Below is simple stack based iterative algorithm to do preorder traversal.

void preorderIterative(Node *root)
{
    if(root==nullptr)
    return;

    stack<Node*> stack;
    stack.push(root);

    while(!stack.empty())
    {

        Node *curr=stack.top();
        stack.pop();

        cout<<curr->data<<" ";
        if(curr->right);
          stack.push(curr->right);

          if(curr->left)
          stack.push(curr->left); 
          
    }
}