#ifndef NEWSTACK_H
#define NEWSTACK_H

typedef struct node
{
    int data;
    node* next;
}node;

class newstack
{
    public:
        newstack(int maxnum);
        newstack(int data, int maxnum);
        virtual ~newstack();

        void printStack();
        void newPush(int data);
        int newPop();

    protected:

    private:
        node* top;
        int maxnum;
        int stackCount;
};

#endif // NEWSTACK_H
