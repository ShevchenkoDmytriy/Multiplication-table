#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
class Tab
{
public:
	int a,n;
	int b;
	int c;
	int f = 0;
	void Maths()
	{
		
		for (int i = 0; i < 10; i++)
		{
			a = rand() % 11;
			b = rand() % 11;
			c = a * b;
			cout << a << " * " << b << " = " << " ?\n";
			cin >> n;
			if (n == c)
			{
				cout << "\nRight\n";
				f++;
			}
			else
			{
				cout << "\nWrong\n";
			}
		}
		cout << "Your result : " << f;
		if (f == 10)
		{
			cout << "\nGreat!!!!";
		}
		else if (f >= 8 && f <= 9)
		{
			cout << "\nGood!!!!";
		}
		else if (f >= 6 && f <= 7)
		{
			cout << "\nSatisfactorily!!!!";
		}
		else if (f >= 8 && f <= 9)
		{
			cout << "\nPoorly!!!!";
		}
	}
	
};
int main()
{
	Tab x;
	srand(time(0));
	x.Maths();
}
