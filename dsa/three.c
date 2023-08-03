#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue[MAX], item, ch, i;
int rear = -1;
int front = -1;
int main()
{
do
{
printf("\nOperations Queue");
printf("\n 1. Insert");
printf("\n 2. Delete");
printf("\n 3. Display");
printf("\n 4. Exit");
printf("\n Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: insert();
break;
case 2: delete();
break;
case 3: display();
break;
case 4: exit(0);
break;
default: printf("\nPlease enter a valid choice");
}
}while(ch!=4);
}
void insert()
{
printf("\nEnter the element to be inserted in the queue = ");
scanf("%d",&item);
if (front==-1 && rear==-1) //condition to check if queue is empty
{
front=0;
rear=0;
queue[rear]=item;
}
else if((rear+1)%MAX==front) //condititon to check if the queue is
{
printf("Queue is overflow..");
}
else
{
rear=(rear+1)%MAX; //rear is incremented
queue[rear]=item; //assigning a value to the queue at the 

}
}
void delete()
{
if ((front == -1 ) && (rear==-1)) //condition to check the queue is empty
{
printf("Queue Underflow\n");
}
else if(front==rear) //there is only one element in he queue
{
printf("\nThe deleted element is %d",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("The deleted element is: %d\n", queue[front]);
front = (front +1)%MAX;
}
}
void display()
{
i=front; 
if (front == -1 && rear==-1)
{
printf("Queue is empty... \n");
}
else
{
printf("\nElements in a queue are: \n");
for (i = front; i <= rear; i++)
printf("\n%d", queue[i]);
printf("\nFront = %d,Rear = %d",front,rear);
printf("\n");
}
}
