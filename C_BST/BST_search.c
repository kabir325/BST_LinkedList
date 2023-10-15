void search(struct node *root,int val){
  while(root!=NULL){
    if(val<root->data){
      root=root->left;
    }
    else if(val>root->data){
      root=root->right;
    }
    else{
      printf("value found in list\n");
      return ;
    }
  }
  printf("value not found\n");
}

/*
  so what we are doing in this code is moving through the BST compairing the value to the data on root node.
  ifany node data is equal to the value we print value found and return the value.
  if we reach a node which is NULL in the process we escape out of the while loop and print value not fond.
*/
