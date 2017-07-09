//============================================================================
// Name        : HelloCpp.cpp
// Author      : roeuihyun
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

int main() {

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	int a;		// 정수형 변수 선언 (ex: -1, 0, 1, 2 ...)
	float b; 	// 실수형 변수 선언 (ex: 0.1, 2.1, 3.15 ...)
	char c; 		// 문자형 변수 선언 (ex: a, b, c, A, B, C ...)
	bool d;		// 참, 거짓 변수 선언 (ex: 1(true), 0(false))

	a = 555;
	b = 0.1234;
	c = 'Y';
	d = true;

	cout << "a : "<< a << endl; // prints a
	cout << "b : "<< b << endl; // prints b
	cout << "c : "<< c << endl; // prints c
	cout << "d : "<< d << endl; // prints d

    int arr[10];
    int *parr = arr;

    int i;
    int *pi = &i;

	cout << "arr : "<< arr << endl; // prints arr
	cout << "parr : "<< parr << endl; // prints parr
	cout << "i : "<< i << endl; // prints i
	cout << "pi : "<< pi << endl; // prints pi

	for(i=0;i<10;i++){
		cout << i << endl;
	}

	return 0;

}
