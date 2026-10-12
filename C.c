#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int items[SIZE];
int front = -1;
int rear = -1;
int isFull() {
return 1;
if ((front == 0 && rear == SIZE - 1) || (rear + 1 == front)) {
}
return 0;
}
int isEmpty() {
if (front == -1) {
return 1;
}
return 0;
}
void enqueue(int value) {
if (isFull()) {
printf("\nQueue Overflow! Cannot insert %d.\n", value);
} else {
if (front == -1) { // If inserting the first element
front = 0;
}
rear = (rear + 1) % SIZE; // Circular increment of rear pointer
items[rear] = value;
printf("\nInserted -> %d\n", value);
}
}
int dequeue() {
int element;
if (isEmpty()) {
printf("\nQueue Underflow! Nothing to delete.\n");
return -1;
} else {
element = items[front];
if (front == rear) { // If the queue has only one element left
front = -1;
rear = -1;
} else {
front = (front + 1) % SIZE; // Circular increment of front pointer
}
return element;
}
}
void display() {
int i;
if (isEmpty()) {
printf("\nQueue is empty!\n");
} else {
printf("\nFront -> %d", front);
printf("\nItems -> ");
for (i = front; i != rear; i = (i + 1) % SIZE) {
printf("%d ", items[i]);
}
printf("%d ", items[i]); // Print the last element (where i == rear)
printf("\nRear -> %d\n", rear);
}
}
int main() {
int choice, value;
while (1)
{
printf("\n*** CIRCULAR QUEUE MENU ***\n");
printf("1. Enqueue (Insert)\n");
printf("2. Dequeue (Delete)\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter the value to insert: ");
scanf("%d", &value);
enqueue(value);
break;
case 2:
value = dequeue();
if (value != -1) {
printf("\nDeleted element -> %d\n", value);
}
break;
case 3:
display();
break;
case 4:
printf("\nExiting program...\n");
exit(0);
default:
printf("\nInvalid choice! Please select a valid option.\n");
}
}
return 0;
}
HASHING
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int hashTable[SIZE];
void initTable() {
for (int i = 0; i < SIZE; i++) {
hashTable[i] = -1;
}
}
{
int hashFunction(int key)
return key % SIZE;
}
void insert(int key) {
int index = hashFunction(key);
int originalIndex = index;
while (hashTable[index] != -1)
{
{
index = (index + 1) % SIZE;
if (index == originalIndex)
printf("Hash Table is Full! Cannot insert key %d\n", key);
return;
}
}
hashTable[index] = key;
printf("Inserted %d at index %d\n", key, index);
void displayTable()
}
{
printf("\n--- Hash Table Contents ---\n");
for (int i = 0; i < SIZE; i++)
{
if (hashTable[i] != -1) {
printf("Index %d: %d\n", i, hashTable[i]);
}
else {
printf("Index %d: Empty\n", i);
}
}
printf("---------------------------\n\n");
}
{
int main()
initTable();
insert(12); // 12 % 10 = index 2
insert(22); // 22 % 10 = index 2 (Collision -> placed at index 3)
insert(42); // 42 % 10 = index 2 (Collision -> placed at index 4)
insert(15); // 15 % 10 = index 5
displayTable();
return 0;
}
