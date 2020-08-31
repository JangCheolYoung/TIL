#include<stdio.h>

#define QUEUE_SIZE 100

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;

void put(int x);
int get();

int main(){
    put(10);
    put(20);
    put(30);
    
    printf("%d\n", get());
    printf("%d\n", get());
    printf("%d\n", get());

    return 0;
}

void put(int x){
    if(rear >= QUEUE_SIZE){
        printf("overflow\n");
    }else{
        queue[rear] = x;
        rear++;
    }
}

int get(){
    if(front >= rear){
        printf("underflow");
        return -1;
    }else{
        int res = queue[front];
        front++;
        return res;
    }
}
