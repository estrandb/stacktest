#include "newstack.h"
#include <cstddef>
#include <iostream>

newstack::newstack(int maxnum)
{
    top = new node();
    top->data = 0;
    top->next = NULL;
    stackCount = 0;
}

newstack::newstack(int data, int maxnum)
{
    top = new node();
    top->data = data;
    top->next = NULL;
    stackCount = 1;
}

newstack::~newstack()
{
    //dtor
}

void newstack::newPush(int data)
{
    if (stackCount == maxnum)
    {
        std::cout << "your stack is full\n";
    }
    if (stackCount == 0)
    {
        top->data = data;
        stackCount++;
        return;
    }
    else
    {
        node* temp = new node();
        temp->data = data;
        temp->next = top;
        top = temp;
        stackCount++;
    }
}

int newstack::newPop()
{
    if (stackCount == 0)
    {
        std::cout << "this stack is empty\n";
        return 0;
    }
    else
    {
        int returnData = top->data;
        node* temp = top;
        if (top->next != NULL)
            top = top->next;
        stackCount--;
        if (stackCount != 0)
            delete temp;

        return returnData;
    }
}

void newstack::printStack()
{
    if (stackCount != 0)
    {
        node* printer = top;
        while (printer != NULL)
        {
            std::cout << printer->data << '\n';
            printer = printer->next;
        }
    }
    else
    {
        std::cout << "nothing on the stack" << '\n';
    }
}
