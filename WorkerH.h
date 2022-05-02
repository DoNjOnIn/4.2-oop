#pragma once
#include "Worker.h"
class WorkerH :
	public Worker
{
private:
	string name;
	double wage;
	int hours;
public:
	WorkerH();
	WorkerH(double x);
	WorkerH(string x);
	WorkerH(double x, string y);

	void Payment();
	void addH(int x) { hours += x; };
	void setH(int x) { hours = x; };
	int getH() { return hours; };
	void setN(string x) { name = x; };
	string getN() { return name; };
	void setW(double x) { wage = x; };
	double getW() { return wage; };
	void Show();
	int Balance();
};

