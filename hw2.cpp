#include <iostream>
using namespace std;

static int i = 1;

struct  A
{
    A() {cout<<"Hello World from A"<<endl;};
};

struct  B
{
    B() {cout<<"Hello World from B"<<endl;};
};

struct  C : public A, public B
{
    C() {
        cout<<"Hello World from C"<<endl;
    };
};

struct  D : public B, public A
{
    D() {
        cout<<"_________________"<<endl;
        cout<<"Hello World from D"<<endl;
    };
};

static void printx(){
    cout<<"Hello World!"<<endl;
}

int main(){
    cout<<"Hello World from main!"<<endl;
    return 0;
}

static A a1;
static A a2;
static B b1;
static C c1;
static D d1;