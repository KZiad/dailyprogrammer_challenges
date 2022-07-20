// 399.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>

using namespace std;
int lettersum(string);
int main()
{
	while (1) {
		string s;
		cout << "s: ";
		getline(cin, s);
		cout << lettersum(s) << endl;
	}
	
}
int lettersum(string s) {

	int sum = 0;
	for (char l : s) {
		sum += (l - 'a' + 1);
	}
	return sum;
}