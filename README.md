"# DataStructureListClass"  

Homework 1

Stacks, queues and the list using linked list


Write a list class to implement a doubly linked list. The list should accommodate integers and pointers. You may add other types as you need them. Include member functions for the following:

void insert_front(int data );
void insert_front(void *data );
void insert_rear(int data );
void insert_rear(void *data );
int   remove_front_i( );
void *  remove_front_p( );
int   remove_rear_i( );
void * remove_rear_p( );
int   empty( );  

Use dynamic memory. Use the "new" instruction to allocate memory when inserting and the delete instruction to return the memory when removing. Make the list into a class where the actual list is private and the member functions are public. Prove your program correctness by applying several test cases. It’s up to you to decide what test cases will provide sufficient confidence your program works correctly. The output should have several test cases. Do a good job as you will use this class in the remainder of your programming assignments.
