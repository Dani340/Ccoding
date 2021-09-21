struct node {
    int value;
    struct node* left;
    struct node* right;
};


struct node* newNode(int val) {
    struct node* node = (struct node*)malloc(sizeof(struct node));

    node->value = val;

    node->left = NULL;
    node->right = NULL;

    return node;
}

void printBTree(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%d", root->value);
    printBTree(root->left);
    printBTree(root->right);
}

int height(struct node* node)
{
    if (node==NULL) {
        return 0;
    }
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);

        if (lheight > rheight) {
            return(lheight+1);
        }
        else {
            return(rheight+1);
        }
    }
}

int insertNode(struct node* root, int level, int value)
{
    if (root == NULL) {
        return 0;
    }
    if (level == 1) {
        if (root->left == NULL) {
            root->left = newNode(value);
            return root->value;
        }

        else if (root->right == NULL) {
            root->right = newNode(value);
            return root->value;
        }

    }
    else if (level > 1) {
        int result1 = insertNode(root->left, level-1, value);
        if(result1 != -1) {
            return result1;
        }
        int result2 = insertNode(root->right, level-1, value);
        if(result2 != -1) {
            return result2;
        }
    }
}

int levelOrder(struct node* root, int value) {
    int h = height(root);
    int i, x;

    for (i = 1; i <= h; i++) {
        x = insertNode(root, i, value);
        if(x != 0) {
            return x;
        }
    }
}




