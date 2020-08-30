#include<stdio.h>


int queue[100];
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
    queue[rear] = x;
    rear++;
}

int get(){
    int res = queue[front];
    front++;
    return res;
}
