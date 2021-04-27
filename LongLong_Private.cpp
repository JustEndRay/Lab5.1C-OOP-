#include "LongLong_Private.h"
LongLong_Private::LongLong_Private() { SetLONG1(0); SetLONG2(0); }
LongLong_Private::LongLong_Private(long long1 = 0, long long2 = 0)
{
	SetLONG1(long1); SetLONG2(long2);
}
LongLong_Private::LongLong_Private(LongLong_Private& A)
{
	SetLONG1(A.GetLONG1());
	SetLONG2(A.GetLONG2());
}

LongLong& LongLong_Private::operator=(const LongLong_Private& A)
{
	LongLong(A.GetLONG1(), A.GetLONG2());
	return *this;
}

ostream& operator << (ostream& out, const LongLong_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong_Private& A) throw(const char*, bad_exception&)
{
	cout << "Enter a long1 "; in >> A.LONG1;
	if (A.LONG1 < 0)
		throw bad_exception();
	cout << "Enter a long2 "; in >> A.LONG2;
	if (A.LONG2 < 0)
		throw bad_exception();
	cout << endl;
	return in;
}
LongLong_Private::operator string() const
{
	stringstream ss;
	ss << "long1= " << this->GetLONG1() << endl;
	ss << "long2= " << this->GetLONG2() << endl;
	return ss.str();
}

LongLong_Private& LongLong_Private::operator++ ()
{
	this->SetLONG1(this->GetLONG1() + 1);
	return *this;
}
LongLong_Private& LongLong_Private::operator -- ()
{
	this->SetLONG1(this->GetLONG1() - 1);
	return *this;
}
LongLong_Private LongLong_Private::operator ++ (int)
{
	LongLong_Private t(*this);
	this->SetLONG2(this->GetLONG2() + 1);
	return t;
}
LongLong_Private LongLong_Private::operator -- (int)
{
	LongLong_Private t(*this);
	this->SetLONG2(this->GetLONG2() - 1);
	return t;
}

bool operator>(const LongLong_Private A, const LongLong_Private B)
{
	if (A.GetLONG1() > B.GetLONG1()) { return 1; }
	if (A.GetLONG1() == B.GetLONG1())
	{
		if (A.GetLONG2() > B.GetLONG2()) { return 1; }
	}
	if (A.GetLONG1() < B.GetLONG1()) { return 0; }
}

bool operator<(const LongLong_Private A, const LongLong_Private B)
{
	if (A.GetLONG1() < B.GetLONG1()) { return 1; }
	if (A.GetLONG1() == B.GetLONG1())
	{
		if (A.GetLONG2() < B.GetLONG2()) { return 1; }
	}
	if (A.GetLONG1() > B.GetLONG1()) { return 0; }
}

bool operator==(const LongLong_Private A, const LongLong_Private B)
{
	if (A.GetLONG1() == B.GetLONG1() && A.GetLONG2() == B.GetLONG2()) { return 1; }
	else { return 0; }

}
