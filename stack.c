#include<stdio.h>
#define Max 100
typedef struct{
    int top;
    int data[Max];
}Struct;

void push(Struct *s,int item)
{
    if(s->top<Max){
        s->data[s->top]=item;
        s->top=s->top+1;
    }
    else{
        printf("Stack Full\n");
    }
}

int top(Struct *s)
{
    int item;
    if(s->top==0){
        return -1;
    }
    else{
        s->top = s->top-1;
        item = s->data[s->top];

    }
    return item;
}


int main()
{
        Struct my_stack;
        my_stack.top = 0;
        push(&my_stack,4);
        push(&my_stack,5);
        push(&my_stack,6);
        printf("%d\n",my_stack.data[0]);
        printf("%d\n",top(&my_stack));

    return 0;
}
