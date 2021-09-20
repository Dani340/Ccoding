#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "binaryTree.h"

int main() {
    int value;

    printf("Enter the value of the node to be inserted: ");
    scanf("%d", &value);

    struct node* root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(6);

    printBTree(root);
    printf("\n");

    insertNode(root, value);
    printBTree(root);

    return 0;
}
