//
// Created by adamv on 03.03.2021.
//

#ifndef _MYSTACK_H_
#define _MYSTACK_H_

class MyStack{
private:
    int top = -1;
    int* data = nullptr;
    int capacity = 4;
public:
    MyStack();
    ~MyStack();
    bool push(int);
    bool pop(int*);
};

#endif //_MYSTACK_H_
