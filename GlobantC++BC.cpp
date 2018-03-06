// GlobantC++BC.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <thread>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
#define sum(a,b) a+b

int main()
{
	int sum = 0;
	int a, b, s;
	cout << "Enter a positive integer: ";
	cin >> a;
	cout << "Enter a positive integer: ";
	cin >> b;


	s = sum(a, b);
	printf("sum correcta: %d", s);



	int sum1 = 0;
	int c, d, s1;
	cout << "\nEnter a positive integer: ";
	cin >> c;
	cout << "Enter a positive integer: ";
	cin >> d;


	s1 = sum(c, d);
	printf("sum incorrecta: ", s1);

}
/*void sum_correcto()
{
	int n, sum = 0;
	int a, b, s;
	cout << "Enter a positive integer: ";
	cin >> a;
	cout << "Enter a positive integer: ";
	cin >> b;


	s = sum(a, b);
	printf("sum correcta: %d", s);
}

void sum_incorrecto()
{
	int n, sum = 0;
	int a, b, s;
	cout << "Enter a positive integer: ";
	cin >> a;
	cout << "Enter a positive integer: ";
	cin >> b;


	s = sum(a, b);
	printf("sum incorrecta: ", s);
}


*/