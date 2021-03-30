#include <iostream>

using namespace std;

string toStr(int num)
{
	switch(num)
	{
		case 1: return "1";
		case 2: return "2";
		case 3: return "3";
		case 4: return "4";
		case 5: return "5";
		case 6: return "6";
		case 7: return "7";
		case 8: return "8";
		case 9: return "9";
		case 10: return "A";
		case 11: return "B";
		case 12: return "C";
		case 13: return "D";
		case 14: return "E";
		case 15: return "F";
	}
	return "0";
}

string getBase(int num, int base)
{
	int n = num;
	string str = "";
	while(n > 0)
	{
		str = toStr(n%base) + str;
		n /= base;
	}
	return base == 16 ? "0x" + str : str;
}

int main()
{
	cout << "Number: ";
	int num = 0; cin >> num;
	cout << "Base: ";
	int base = 10; cin >> base;
	
	if(num < 0) return -1;
	if(base < 2 || base > 16) return -1;
	
	cout << endl << "Result: ";
	cout << getBase(num,base);
	
	return 0;
}
