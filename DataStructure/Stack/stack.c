#include<stdio.h>

int stack[100];
int top = 0;

void push(int x);
int pop();

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}

void push(int x){
    stack[top] = x;
    top++;
}

int pop(){
    int res = stack[top-1];
    top--;
    return res;
}
