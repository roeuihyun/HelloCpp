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

	//cout == console out meaning
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
		cout << i ;
	}
	cout << "i : " << i << endl;

    int sum = 0;

    for(i=1;i<=10;i++){
        sum += i;
    }

    cout << "합은 : " << sum << endl;

    char name[10];

    //cin == console in java의 Scanner System.in 이라 생각하면 편
    cout << "이름을 입력하시고 엔터를 치세요 : ";
    cin >> name;

    cout << "당신의 이름은 : " << name << " 입니다. "<< endl;
	return 0;

}
