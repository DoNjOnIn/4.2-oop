#include "WorkerH.h"
#include <iostream>
WorkerH::WorkerH()
{
	setN("");
	setW(80);
	setH(0);
}

WorkerH::WorkerH(double x, string y)
{
	setN(y);
	setW(x);
	setH(0);
}

void WorkerH::Payment()
{
	cout << "Worker payment" << endl;
	Show();
	cout << Balance() << endl;
	setH(0);
}

void WorkerH::Show()
{
	cout << "Current payment with wage " << getW() << endl;
}

int WorkerH::Balance()
{
	return getH() * getW();
}

WorkerH::WorkerH(double x)
{
	setN("");
	setW(x);
	setH(0);
}

WorkerH::WorkerH(string x)
{
	setN(x);
	setW(80);
	setH(0);
}
