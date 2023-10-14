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

/*
    to insert a given value in a BST we recursively iterate the function till the perfect position of the value is found according to the rule of BST
    root=NULL
    we assign memory to the node using DMA and then assign its pointers to NULL and assign the value given and insert it in the position given.
    we also have a condition when the value we are trying to insert is already present in the bst in that case we wont insert the value we will just return the orignal BST.
*/
