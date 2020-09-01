#include<stdio.h>

#define STACK_SIZE 3
int stack[STACK_SIZE];
int top = 0;

void push(int x);
int pop();
void show_stack();

int main(){

    show_stack();
    push(10);
    show_stack();
    push(20);
    show_stack();
    push(30);
    show_stack();
    push(40);
    show_stack();

    printf("pop result : %d\n", pop());
    show_stack();
    printf("pop result : %d\n", pop());
    show_stack();
    printf("pop result : %d\n", pop());
    show_stack();
    printf("pop result : %d\n", pop());
    show_stack();
    return 0;
}

void push(int x){
    printf("%d push\n", x);
    if(top >= STACK_SIZE){
        printf("overflow\n");
    }else{
        stack[top] = x;
        top++;
    }
}


int pop(){
    if(top <= 0){
        printf("underflow\n");
        return -1;
    }else{
        int res = stack[top-1];
        stack[top-1] = 0;
        top--;
        return res;
    }
}

void show_stack(){
    printf("stack : ");
    int i = 0;
    for(i = 0; i < STACK_SIZE; i++){
        printf("[%d] ", stack[i]);
    }
    printf("\n");
}
