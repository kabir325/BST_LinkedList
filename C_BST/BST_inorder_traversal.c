void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

/*
   5
   /\
  3  7
 /\
1  4

inorder traversal for the rollowing tree will be-> 1 3 4 5 7


*/
