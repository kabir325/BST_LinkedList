void preorderTraversal(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

/*

   5
   /\
  3  7
 /\
1  4

inorder traversal for the rollowing tree will be-> 5 3 1 4 7

*/
