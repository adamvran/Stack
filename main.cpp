#include <iostream>
#include "MyStack.h"
#include <stack>

using namespace std;

bool checkParity(const string& text){
    MyStack stack;

    for (auto c : text)
    {
        if (c=='(')
            if (!stack.push(1))
            {
                cout << "Stack is full (propably)." << endl;
                return false;
            }
        if (c==')')
            if (!stack.pop(nullptr))
                return false;
    }
    if (!stack.pop(nullptr))
        return true;
    else
        return false;
}

int main(){
    string text = "Nejaky (ret)ezec (ide(al)ne) i ()se (z)avorkami";
    cout << "Parity OK: " << checkParity(text) << endl;

    return 0;
}