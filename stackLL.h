struct Node {
    int value;
    struct Node *next;
};

bool isEmpty(struct Node **top) {
    if (top == NULL) {
        return true;
    }
    else {
        return false;
    }
}
