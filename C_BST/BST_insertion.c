struct node* insert(struct node* root, int data) {
    if (root == NULL) {
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->data=data;
        temp->left=temp->right=NULL;
        return root;
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}
