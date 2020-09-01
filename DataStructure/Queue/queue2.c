#include<stdio.h>

#define QUEUE_SIZE 3

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;

void put(int x);
int get();
void show_queue();

int main(){
    show_queue();
    put(10);
    show_queue();
    put(20);
    show_queue();
    put(30);
    show_queue();
    put(40);
    show_queue();
    
    printf("get result : %d\n", get());
    show_queue();
    printf("get result : %d\n", get());
    show_queue();
    printf("get result : %d\n", get());
    show_queue();
    printf("get result : %d\n", get());
    show_queue();

    return 0;
}

void put(int x){
    printf("%d put\n", x);
    if(rear >= QUEUE_SIZE){
        printf("overflow\n");
    }else{
        queue[rear] = x;
        rear++;
    }
}

int get(){
    if(front >= rear){
        printf("underflow\n");
        return -1;
    }else{
        int res = queue[front];
        queue[front] = 0;
        front++;
        return res;
    }
}

void show_queue(){
    printf("queue : ");
    int i = 0;
    for(i = 0; i < QUEUE_SIZE; i++){
        printf("[%d] ", queue[i]);
    }
    printf("\n");
}
