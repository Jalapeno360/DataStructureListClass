//
// Created by jalapeno on 1/31/2017.
//

#ifndef DATASTRUCTURE_LIST_H
#define DATASTRUCTURE_LIST_H

#include <iostream>


using namespace std;

struct node {
    int data = NULL;
    void * ptData = nullptr;
    node * next = nullptr;
    node * prev = nullptr;
};

class List {
private:
    node * f = nullptr; //Front pointer for list
    // r pointer will also move to the end of the list
    // meaning that its the next node until it gets to the last node.
    node * r = nullptr ; //Rear pointer for list

    int size = 0; // tracks the size of the list

public:
    void insert_front(int data); // inserting integer data in the front of the list
    void insert_front(void * data); // inserting pointer data in the front of the list
    void insert_rear(int data); //inserting integer data at the end of the list
    void insert_rear(void * data); // inserting pointer data at the end of the list
    int remove_front_i(); // returns integer data at the front of the list then removes the node
    void * remove_front_p(); // returns pointer data at the front of the list then removes the node
    int remove_rear_i(); // returns integer data at the rear of the list then removes the node
    void * remove_rear_p(); // returns pointer data at the rear of the list then removes the node
    int empty(); // returns the size of the list
    bool isEmpty(); // returns true or false if list is empty or not
    void print_reverse();
    void print_forward();

};

#endif //DATASTRUCTURE_LIST_H
