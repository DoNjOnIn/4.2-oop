#pragma once
#include <string>
using namespace std;
class Worker 
{
public:
	virtual void Payment() abstract;
	virtual void Show() abstract;
	virtual int Balance() abstract;
	virtual void addH(int x) abstract;
	virtual void setH(int x) abstract;
	virtual int getH() abstract;
	virtual void setN(string x) abstract;
	virtual string getN() abstract;
	virtual void setW(double x) abstract;
	virtual double getW() abstract;
};
