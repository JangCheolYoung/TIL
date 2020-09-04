#include<stdio.h>

#define STACK_SIZE 5
int stack[STACK_SIZE];
int top = 0;

void push(int x);
int pop();
void show_stack();

int main(){
    
    while(1){
        int select = 0;
        int input = 0;
        int output = 0;

        printf("1.SHOW STACK\t2.PUSH\t3.POP\t4.EXIT\n");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            show_stack();
            break;
        case 2:
            printf("Input Data : ");
            scanf("%d", &input);
            push(input);
            break;
        case 3:
            output = pop();
            printf("Output Data : %d\n", output);
            break;
        case 4:
            return 0;
        }
    }
    
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
