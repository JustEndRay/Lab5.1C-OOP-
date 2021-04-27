#include <iostream>
#include "LongLong_Public.h"
#include "LongLong_Private.h"
#include <exception>;
#include <stdexcept>;

int main()
{
	LongLong_Public A, B;
	LongLong_Private C, D;
	bool init;
	do
	{
		try
		{
			init = true;
			std::cout << "Private" << endl;
			std::cout << "LongLong C" << endl;
			std::cin >> C;
			std::cout << "\nLongLong D\n" << endl;
			std::cin >> D;
			std::cout << "Public" << endl;
			std::cout << "LongLong A" << endl;
			std::cin >> A;
			std::cout << "\nLongLong B\n" << endl;
			std::cin >> B;
		}
		catch (Exception& e)
		{
			init = false;
			cout << e.what() << endl;
		}
		catch (invalid_argument e)
		{
			init = false;
			cout << e.what() << endl;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what() << endl;
		}
	} while (!init);
	if (A > B) {cout << "A>B" << endl; }
	else
	{
		if (A < B) { cout << "A<B" << endl; }
		else
		{
			if (A == B) { cout << "A=B" << endl; }
		}
	}
	return 0;
}