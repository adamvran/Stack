//
// Created by adamv on 03.03.2021.
//
#include "MyStack.h"

MyStack::MyStack(){
    this->data = new int[this->capacity];
}
MyStack::~MyStack(){
    delete[] this->data;
    this->data = nullptr;
}
bool MyStack::push(int value) {
    if ((this->top <= this->capacity - 2) && (this->top >= -1))
    {
        //stack->top++;
        this->data[++this->top] = value;
        return true;
    }
    return false;
}
bool MyStack::pop(int* value){
    if (this->top >= 0 && this->top <= this->capacity-1 )
    {
        if (value!= nullptr){
            *value = this->data[this->top];
        }
        this->top--;
        return true;
    }
    return false;
}

