//Recursive function to perform inorder tranversal
void inorder(Node *root)
{
    if(root == nullptr)
    return;

     
     inorder(root->left);

     cout<<root->data<< " ";

     inorder(root->right);
}

//to convert recursive procedure to iterative one,we need an
//explicit stack.Below is a simple stack based iterative algorithm to do inoder traversal.

void inorderIterative(Node *root)
{
  stack<Node*> stack;
 
    Node *curr=root;

    while (!stack.empty() || curr !=nullptr)
    {
     
     if(curr !=nullptr)
     {
         stack.push(curr);
         curr = curr->left;
     }
     else
     {
         curr = stack.top();
         stack.pop();
         cout<<curr->data<<" ";
         curr = curr->right;
     }   
 }
}
