#include "\queue.h"

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

struct node* insertNode(struct node* root, int value) {
    struct node* p = (struct node*)malloc(sizeof(struct node));

    if (root == NULL) {
        root = newNode(value);
        return root;
    }

    struct Queue* q = malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;

    enQueue(q, root->value);

    while (isEmpty(q) == false) {
        node* temp = q.front(); // aici in mod normal pe g4g asta ar scrie (C++), inteleg ce face, banuiesc ca toate datele nodului din front (->left, ->right, ->value) sunt acum in temp
                                // insa eu nu pot face asta pt ca eu cand dau enqueue singurul lucru pe care il stie despre nodul meu este valoarea, care nu ma ajuta cu nimic, imi trb si left si right
        deQueue(q);

        if (p->left != NULL) {
            enQueue(q, p->left->value);
        }
        else {
            p->left = newNode(value);
            return root;
        }

        if (p->right != NULL) {
            enQueue(q, p->right->value);
        }
        else {
            p->right = newNode(value);
            return root;
        }
    }
}


