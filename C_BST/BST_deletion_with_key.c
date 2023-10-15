struct node* minValueNode(struct node* node) {
    struct node* current = node;
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct node* deleteNode(struct node* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        struct node* temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}


/*
  in bst the node with a smaller value is placed to the left of the parent node and larger value is placed to the right.
  so what we are doing in the code is checking if the parent node is smaller or larger than the value to delete if its larger we move to the left, if its smaller we move to right.
  if the values are equal we check if the found node has no chile 1 child or 2 child.
  if it has no child or 1 child we remove that node and replace the node with child node
  if it has two childs we find the minimum value from the right subtree and then we delete it recursively
*/


void delete_node(struct node * root,int val){
    while(root!=NULL){
        if(root->data>val){
            root=root->right;
        }else if(root->data<val){
            root=root->left;
        }
        else{
            if(root->left==NULL){
                
}
