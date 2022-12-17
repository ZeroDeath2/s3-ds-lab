#include <stdio.h>
#include <stdlib.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void enqueue(int value){
	if (front == -1){
		front++;rear++;
		queue[rear] = value;
	}
	else if(rear==size-1) {
		printf("Queue is full!! Queue overflow\n");
	}
	else{
		queue[++rear] = value;
	}
}
void dequeue(){
	if (front == -1){
		printf("Queue is empty !! Queue Underflow\n");
	}
	else if(front==rear){
		printf("The deleted element : %d\n",queue[front]);
		front = rear = -1;
	}
	else{
		printf("The deleted element : %d\n",queue[front++]);
	}
}
void peek(){
	if(front == -1 ){
		printf("Queue is empty !! Queue Underflow\n");
	}
	else{
		printf("The element at rear : %d\n",queue[front]);
	}
	
}
void display(){
	if(front==-1){
		printf("Queue is Empty!! Queue underflow.\n");
	}
	else{
		for(int i=front;i<=rear;i++){
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}
void main(){
	int choice,ele;
	while (1){
		printf("--------------------MENU----------------------\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
		printf("Enter choice : \n");
		scanf("%d",&choice);
		printf("\n");
		switch (choice){
			case 1 : printf("Enter the element : "); 
				scanf("%d",&ele);
				enqueue(ele);
				break;
			case 2 : dequeue();
				break;
			case 3 : peek();
				break;
			case 4 : display();
				break;
			case 5 : exit(0);
			default : printf("Wrong Choice ! Enter valid choice ...\n");
		}
	}
}
