#include "WorkerM.h"
#include <iostream>
using namespace std;
WorkerM::WorkerM()
{
	setN("");
	setW(80);
	setH(0);
}

WorkerM::WorkerM(double x, string y)
{
	setN(y);
	setW(x);
	setH(0);
}

void WorkerM::Show()
{
	cout << "Current salary(" << getH() << "hours per week) with wage " << getW() << endl;
}

int WorkerM::Balance()
{
	return getH() * 4 * getW();
}


WorkerM::WorkerM(double x)
{
	setN("");
	setW(x);
	setH(0);
}

WorkerM::WorkerM(string x)
{
	setN(x);
	setW(80);
	setH(0);
}

istream& operator>>(istream& in, WorkerM& m)
{
	string n;
	double w;
	int x1, x2, x3, x4, x5, x6, x7;
	do {
		cout << "Name:"; in >> n;
		cout << "Wage=?"; in >> w;
		cout << "Hours per day" << endl;
		cout << "Mon=?"; in >> x1;
		cout << "Tue=?"; in >> x2;
		cout << "Wed=?"; in >> x3;
		cout << "Thu=?"; in >> x4;
		cout << "Fri=?"; in >> x5;
		cout << "Sat=?"; in >> x6;
		cout << "Sun=?"; in >> x7;

	} while (x1 < 0 || x2 < 0 || x3 < 0 || x4 < 0 || x5 < 0 || x6 < 0 || x7 < 0 || w <= 0
		|| x1 > 16 || x2 > 16 || x3 > 16 || x4 > 16 || x5 > 16 || x6 > 16 || x7 > 16);
	m.setN(n);
	m.setW(w);
	m.setH(x1 + x2 + x3 + x4 + x5 + x6 + x7);
	return in;
}

void WorkerM::Payment()
{
	cout << "Worker payment" << endl;
	Show();
	cout << Balance() << endl;
	setH(0);
}