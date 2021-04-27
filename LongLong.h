#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Exception.h"
#pragma pack(1)

using namespace std;
class LongLong
{
protected:
	long LONG1;
	long LONG2;
public:
	long GetLONG1() const;
	long GetLONG2() const;

	void SetLONG1(long value);
	void SetLONG2(long value);

	LongLong();
	LongLong(long, long);
	LongLong(const LongLong&);

	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&) throw(invalid_argument, Exception, bad_exception&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;

	string toString() const;
	void Read();
	void Display();

	friend bool operator > (const LongLong A, const LongLong B);
	friend bool operator < (const LongLong A, const LongLong B);
	friend bool operator == (const LongLong A, const LongLong B);
};

