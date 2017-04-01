//
// Created by jalapeno on 1/31/2017.
//


#include "List.h"




void List::insert_front(int data)
{
    size++;
    node * p = new node;
    p->data = data;

    if (f == nullptr) {
        f = p;
        r = p;
        p->prev = p->next = nullptr;
    }
    else {
        p->next = f;
        p->prev = nullptr;
        f->prev = p;
        f = p;

    }
}
void List::insert_front(void *data) {
    size++;
    node * p = new node;
    p->ptData = data;

    if (f == nullptr) {
        f = p;
        r = p;
        p->prev = p->next = nullptr;
    }
    else {
        p->next = f;
        p->prev = nullptr;
        f->prev = p;
        f = p;

    }
}

void List::insert_rear(int data) {
    node *p = new node;

    size++;
    if(f == nullptr){

        f = p;
        r = p;
        p->prev = nullptr;

    }else {

        r->next = p;
        p->prev = r;
        r = p;
        p -> next = nullptr;

    }

    r->data = data;
}

void List::insert_rear(void *data) {
    node *p = new node;
    size++;

    if(r == nullptr){

        f = p;
        r = p;
        p->prev = nullptr;

    }else {
        p->prev = r;
        r->next = p;
        r = p;
        p -> next = nullptr;

    }

    r->ptData = data;
    r->data = NULL;

}

int List::remove_front_i() {
    node *p;
    int returnVal;
    if (f== nullptr){
        cout<<"No list made" << endl;
        returnVal = NULL;
    }else if (f == r){
        size--;
        p = f;
        f = nullptr;
        r = nullptr;
        p->next = p->prev = nullptr;
        returnVal = p->data;

    }else{
        size--;
        p = f;
        f = p->next;
        returnVal = p->data;
        f->prev = nullptr;
        p->next = p->prev = nullptr;
        delete p;
    }

    return returnVal;
}

void * List::remove_front_p() {
    node * p;
    void * returnPointer;

    if (f == nullptr) {
        cout << "No list was made" << endl;
        returnPointer = nullptr;

    } else if (f == r) {
        size--;
        p = f;
        f = nullptr;
        r = nullptr;
        returnPointer = p->ptData;
        p->next = p->prev= nullptr;
        //delete p;
    } else {
        size--;
        p = f;
        f = p->next;
        returnPointer = p->ptData;
        f->prev = nullptr;
        p->next = p->prev = nullptr;
        delete p;
    }
    return returnPointer;
}

int List::remove_rear_i() {
    node * p;
    int returnVal;
    if (f == nullptr)
    {
        cout << "No list there" << endl;
    }
    else if (f == r)
    {
        size--;
        p = f;
        f = r = nullptr;
        returnVal = p->data;
        p->next = p->prev = nullptr;
        delete p;
    }
    else {
        size--;
        p = r;
        r = r->prev;
        r->next = nullptr;
        returnVal = p->data;
        p->next = p->prev = nullptr;
        delete p;

    }
    return returnVal;

}

void * List::remove_rear_p() {
    node *  p;
    void * returnPointer;
    if (f == nullptr)
    {
        cout << "No list there" << endl;
        returnPointer = nullptr;
    }
    else if (f == r)
    {
        size--;
        p = f;
        f = r = nullptr;
        returnPointer = p->ptData;
        p->next = p->prev = nullptr;
        
    }
    else {
        size--;
        p = r;
        r = r->prev;
        r->next = nullptr;
        returnPointer = p->ptData;
        p->next = p->prev = nullptr;
        delete p;

    }
    return returnPointer;
}
int List::empty() {
    int val;
    void * point;

    while(f != nullptr){

        if(f->data !=NULL || !f->data == 0 ){
            val = remove_front_i();
            cout << "Integer " << val << " was deleted" << endl;
        }else{
            point = remove_front_p();
            cout<< "Pointer "<< point << " was deleted "<< endl;

        }

    }
    print_forward();
return 0;




}

bool List::isEmpty() {
    bool returnEmpty;
    returnEmpty = size == 0;
    return returnEmpty;
}

void List::print_reverse() {
    node* p = r;
    while (p!= nullptr) {
        if (p->data != NULL) {
            cout << p->data << " ";


        } else {
            cout << p->ptData << " " << endl;

        }

        p = p->prev;
    }
}

void List::print_forward() {
    node* p = f;
    while (p!= nullptr) {
        if (p->data != NULL) {
            cout << p->data << " ";


        } else {
             cout << p->ptData << " " << endl;

        }

        p = p->next;
    }
}








