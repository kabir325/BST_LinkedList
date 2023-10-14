void postorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

/*

   5
   /\
  3  7
 /\
1  4

inorder traversal for the rollowing tree will be-> 1 4 3 7 5

*/
