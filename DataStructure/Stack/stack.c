#include<stdio.h>

#define STACK_SIZE 100
int stack[STACK_SIZE];
int top = 0;

void push(int x);
int pop();

int main(){
    push(10);
    push(20);
    push(30);

    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}

void push(int x){
    if(top >= STACK_SIZE){
        printf("overflow\n");
    }else{
        stack[top] = x;
        top++;
    }
}

int pop(){
    if(top <= 0){
        printf("underflow");
        return -1;
    }else{
        int res = stack[top-1];
        top--;
        return res;
    }
}
