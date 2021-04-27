#pragma once
#include "LongLong.h"
class LongLong_Public : public LongLong
{
public:
	LongLong_Public();
	LongLong_Public(long, long);
	LongLong_Public(LongLong_Public&);

	LongLong_Public& operator = (const LongLong_Public&);
	friend ostream& operator << (ostream&, const LongLong_Public&);
	friend istream& operator >> (istream&, LongLong_Public&);
	operator string() const;

	LongLong_Public& operator ++ ();
	LongLong_Public& operator -- ();
	LongLong_Public operator ++ (int);
	LongLong_Public operator -- (int);

	friend bool operator > (const LongLong_Public A, const LongLong_Public B);
	friend bool operator < (const LongLong_Public A, const LongLong_Public B);
	friend bool operator == (const LongLong_Public A, const LongLong_Public B);
};

