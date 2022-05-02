// 4.2.cpp 
#include "WorkerH.h"
#include "WorkerM.h"
#include <iostream>
using namespace std;

int main()
{
    string name;
    name = "Man";
    WorkerH c(40 , name);
    WorkerM b(80 , name);
    Worker* p = new WorkerH(40, name);
    Worker* d = new WorkerM(80, name);
    c.setH(90);
    c.Payment();
    cout << "Type: " << typeid(p).name() << endl;
    cout << "Type: " << typeid(*p).name() << endl;
    cout << "Type: " << typeid(d).name() << endl;
    cout << "Type: " << typeid(*d).name() << endl;
}

