#include<stdio.h> 
#include<stdlib.h> 
#define Size 10
int Top=-1, inp_array[Size]; 
int Top2=-1,aux[Size];
int flag=0;
void Push(); 
void Peek(); 
void Display(); 

int main() { 
	int choice; 
	while(1) { 
		printf("\nOperations performed by Stack"); 
		printf("\n1.Push the element\n2.Peek\n3.Display\n4.Exit\n"); 
		printf("\n\nEnter the choice:"); 
		scanf("%d",&choice); 
		switch(choice) { 
			case 1: Push(); 
			break; 
			case 2: Peek();
			break; 
			case 3:  Display(); 
			break; 
			case 4: exit(0); 
			break; 
			default: printf("\nInvalid choice!!"); 
		} 
	} 
}
 
void Push() { 
	int x; 
	if(Top==Size-1) { 
		printf("\nStack is Full"); 
	} 
	else { 
		printf("\nEnter element to be inserted to the stack:"); 
		scanf("%d",&x); 
		Top=Top+1; 
		inp_array[Top]=x;
		if (flag==0){
			flag=1;
			Top2++;
			aux[Top2]=x;
		}
		else if (x<aux[Top2]){

			Top2++;
			aux[Top2]=x;
		} 
	} 
}
void Peek() { 
	printf("Peek (minimum element) : %d",aux[Top2]);
} 
void Display() { 
	if(Top==-1) { 
		printf("\nUnderflow!!"); 
	} 
	else { 
		printf("\nElements present in the stack: \n"); 
		for(int i=Top;i>=0;--i) 
			printf("%d\n",inp_array[i]); 
	} 
}
