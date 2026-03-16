#include <stdio.h>
#include <stdbool.h>

#define MAX 6 

int queue[MAX], front = 0, rear = -1, itemCount = 0;

// Function prototypes
bool isEmpty();
bool isFull();
void insert(int data);
int removeData();

// Insert (Enqueue) - adds to the rear
void insert(int data) {
   if(!isFull()) {
      if(rear == MAX - 1) rear = -1; 
      queue[++rear] = data;
      itemCount++;
      printf("Inserted %d\n", data);
   } else printf("Queue Full\n");
}

// Remove (Dequeue) - removes from the front
int removeData() {
   int data = queue[front++];
   if(front == MAX) front = 0; 
   itemCount--;
   return data;
}

// ... main function to test enqueue/dequeue ...
