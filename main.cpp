#include <iostream>
#include <cstdlib>
#include <memory>
#include "newstack.h"
#include "gtest/gtest.h"

using namespace std;

int main(int argc,char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    std::unique_ptr<newstack> mystack(new newstack(5));

    mystack->newPush(20);
    mystack->newPush(10);
    mystack->newPush(4);
    mystack->printStack();

    int four = mystack->newPop();
    int ten = mystack->newPop();
    int twenty = mystack->newPop();
    int ser = mystack->newPop();

    mystack->printStack();

    mystack->newPush(190);

    mystack->printStack();

    mystack->newPop();
    mystack->newPop();
    mystack->newPop();
    mystack->newPop();

    mystack->newPush(240);
    mystack->newPush(150);
    mystack->newPush(14);
    mystack->printStack();
    //TEST(stacktest, testsavalue);
    //
    //cout << four << '\n';
    return RUN_ALL_TESTS();
}

TEST(stacktest, testsavalue)
{
    EXPECT_EQ(1,1);
}
