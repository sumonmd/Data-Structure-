#include<stdio.h>
#define MAX 1001
typedef struct{
    int data[MAX];
    int tail,head;
}Queue;
void enqueue(Queue *s,int item)
{
    if((s->tail+1)%(MAX+1) == s->head){
        printf("Queue is Full\n");
    }
    else{
        s->data[s->tail]=item;
        s->tail = (s->tail+1)%(MAX+1);
    }
}
int dequeue(Queue *q)
{
    int item ;

    if(q->tail==q->head){
        printf("Queue is Empty\n");
        return -1;
    }
    else{
        item = q->data[q->head];
        q->head = (q->head+1)%(MAX+1);
    }
    return item;

}
int main()
{
    Queue my_queue;
    my_queue.tail = 0;
    my_queue.head = 0;

    enqueue(&my_queue,5);
    enqueue(&my_queue,6);
    enqueue(&my_queue,7);
    enqueue(&my_queue,8);
    printf("%d\n",my_queue.data[0]);
    printf("%d\n",dequeue(&my_queue));
    printf("%d\n",dequeue(&my_queue));

    return 0;
}
