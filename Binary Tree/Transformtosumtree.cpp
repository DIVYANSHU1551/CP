int transform(Node*root){
    if(!root) return 0;

    int lsum=transform(root->left);
    int rsum=transform(root->right);
    int val = lsum +rsum+root->value;
    root->data=lsum+rsum;
    return val;
}