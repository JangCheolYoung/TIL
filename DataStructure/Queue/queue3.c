#include<stdio.h>

#define QUEUE_SIZE 3

int queue[QUEUE_SIZE];
int front = 0;
int rear = 0;

void put(int x);
int get();
void show_queue();

int main(){
    while(1){
        int select = 0;
        int input = 0;
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
            scanf("%d", &input);
            put(input);
            break;
        case 3:
            output = get();
            printf("Output Data : %d\n", output);
            break;
        case 4:
            return 0;
        }
    }
    
    return 0;
}

void put(int x){
    if(rear >= QUEUE_SIZE){
        printf("overflow\n");
    }else{
        queue[rear++] = x;
    }
}

int get(){
    if(front >= rear){
        printf("underflow\n");
        return -1;
    }else{
        int res = queue[front];
        queue[front++] = 0;
        return res;
    }
}

void show_queue(){
    int i = 0;
    for(i = 0; i < QUEUE_SIZE; i++){
        printf("[%d] ", queue[i]);
    }
    printf("\n");
}
