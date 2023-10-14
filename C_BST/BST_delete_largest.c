struct node* delete_largest(struct node* root){
  if(root==NULL){
    return NULL;
  }
  else if(root->right==NULL){
    struct node *temp=root;
    free(temp);
    root=NULL;
    return root;
  }
  else
    root->right=delete_smallest(root->right);
  return root;
}

/*
  we know that the largest value in a BST lies on the right side so we traverse through the BST on the right side 
  when we reach the end we assign a temp variable the node and delete the temp and assign root as NULL and return root.
*/
