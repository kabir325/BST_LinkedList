struct node* delete_smallest(struct node* root){
  if(root==NULL){
    return NULL;
  }
  else if(root->left==NULL){
    struct node *temp=root;
    free(temp);
    root=NULL;
    return root;
  }
  else
    root->left=delete_smallest(root->left);
  return root;
}

/*
  we know that the smallest value in a BST lies on the left side so we traverse through the BST on the left side 
  when we reach the end we assign a temp variable the node and delete the temp and assign root as NULL and return root.
*/
