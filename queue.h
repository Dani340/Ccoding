struct QNode {
    int value;
    struct QNode* next;
    struct QNode* front;
    struct QNode* rear;
};

bool isEmpty(struct QNode *q) {

    if(q->front == NULL && q->rear == NULL) {
        return true;
    }
    else {
        return false;
    }
}
