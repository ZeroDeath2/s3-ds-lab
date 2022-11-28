#include <stdio.h>
#define size 10

int queue[size];
int front == -1;
int rear == -1;

void enqueue(int value){
	if (front == rear == -1){
		front++;rear++
	}
	else if(rear==size-1) {
		printf("Queue is full!! Queue overflow");
	}
	else{
		queue[++rear] = value;
	}
}
void dequeue(){
	if(front==rear==-1){
		printf("Queue is Empty!! Queue underflow.\n");
	}
	else{
		printf("The deleted element : %d",queue[front++]);
	}
	
}
void peek(){
	printf("The element at rear : %d\n",)
}
