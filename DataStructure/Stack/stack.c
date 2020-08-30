#include<stdio.h>

int stack[100];
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
    if(top >= 100){
        printf("overflow\n");
    }else{
        stack[top] = x;
        top++;
    }
}

int pop(){
    if(top <= 0){
        printf("underflow");
    }else{
        int res = stack[top-1];
        top--;
        return res;
    }
}
