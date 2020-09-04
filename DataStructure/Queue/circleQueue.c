#include<stdio.h>
#include<stdbool.h>

#define QUEUE_SIZE 5
#define INF 999999999

int queue[QUEUE_SIZE];
int front = QUEUE_SIZE-1;
int rear = QUEUE_SIZE-1;

bool isEmpty();
bool isFull();
void enqueue(int data);
int dequeue();

void show_queue();

int main(){
    while(1){
        int select = 0;
        int data = 0;
        int output = 0;

        printf("1.SHOW QUEUE\t2.PUT\t3.GET\t4.EXIT\n");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            show_queue();
            break;
        case 2:
            printf("Input Data : ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 3:
            output = dequeue();
            printf("Output Data : %d\n", output);
            break;
        case 4:
            return 0;
        }
    }
    
    return 0;
}

bool isEmpty(){
    return front == rear;
}
bool isFull(){
    return (rear+1) % QUEUE_SIZE == front; // 모듈러 연산 (나머지 연산)
}

void enqueue(int data){
    if(isFull()){
        printf("overflow\n");
        return;
    }
    rear = (rear+1) % QUEUE_SIZE;
    queue[rear] = data;
}

int dequeue(){
    if(isEmpty()){
        printf("underflow\n");
        return INF;
    }
    int res = queue[front = (front+1 ) % QUEUE_SIZE];
    queue[front] = 0;
    return res;
}

void show_queue(){
    int i = 0;
    for(i = 0; i < QUEUE_SIZE; i++){
        printf("[%d] ", queue[i]);
    }
    printf("\n");
}
