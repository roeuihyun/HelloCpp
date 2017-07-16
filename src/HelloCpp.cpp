//============================================================================
// Name        : HelloCpp.cpp
// Author      : roeuihyun
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
// 기본적인 네임스페이스를 std standard를 사용하겠다는 뜻이다.
using namespace std;

namespace A {
    void Add() {
        printf("A의 Add() 함수 호출\n");
    }
}

namespace B {
    void Add() {
        printf("B의 Add() 함수 호출\n");
    }
}

void func(int a){
    cout << "void func(int a) 함수 호출" << endl;
}

void func(int a, int b){
    cout << "void func(int a, int b) 함수 호출" << endl;
}


struct student {
  int id;
  char *name;
  float percentage;

  void Show() {
	  cout << "student " << endl;
	  cout << "아이디: " << id << endl;
	  cout << "이름: " << name << endl;
	  cout << "백분율: " << percentage << endl;
  }
//  void Show(); // 해당 함수가 구조체 내부에 소속되어 있다는것을 의미한다.
}; // 구조체 뒤에 세미콜론이 와야함

//이것도 가능하다. 함수가 복잡한 경우 다음과 같이 함수 정
//void student::Show() {
//    cout << "아이디: " << id << endl;
//    cout << "이름: " << name << endl;
//    cout << "백분율: " << percentage << endl;
//}


//접근제어자를 적용한  student2
struct student2 {
private:
  int id;
  char *name;
  float percentage;
public:
  void Show();
  void SetInfo(int _id, char * _name, float _percentage);
}; // 구조체 뒤에 세미콜론이 와야함

void student2::Show() {
	cout << "student2 " << endl;
	cout << "아이디: " << id << endl;
	cout << "이름: " << name << endl;
	cout << "백분율: " << percentage << endl;
}

void student2::SetInfo(int _id, char * _name, float _percentage)
{
    id = _id;
    name = _name;
    percentage = _percentage;
}


int main() {

	//1강 기본적인 입출력 및 변수,타입 정의 방법 관련하여 정의
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

	cout << "arr : "<< arr << endl; // prints arr
	cout << "parr : "<< parr << endl; // prints parr
	cout << "i : "<< i << endl; // prints i

	for(i=0;i<10;i++){
		cout << i ;
	}
	cout << "i : " << i << endl;

    int sum = 0;

    for(i=1;i<=10;i++){
        sum += i;
    }

    // 2강 기본적인 Console의 입력과 출력

    cout << "합은 : " << sum << endl;

//    char name[10];
//    cin == console in java의 Scanner System.in 이라 생각하면 편함
//    cout << "이름을 입력하시고 엔터를 치세요 : ";
//    cin >> name;
//    cout << "당신의 이름은 : " << name << " 입니다. "<< endl;

    //3강 네임스페이스(namespace)
    //네임스페이스란 관련있는 것끼리 모여있는 공간
    A::Add();
    B::Add();

    //4강 함수오버로딩(function overloading)
    func(4);
	func(5, 6);

	//5강 메모리할당 삭제(new,delete)
	//new == 힙 영역에 메모리 공간을 할당할 수 있게 도와주는 함수
	//delete == 함수 호출시 할당되었던 메모리 공간을 전부 해제할수 있게 도와주는 함수
	int * ptr1 = new int; // 객체를 동적 할당합니다.
	int * ptr2 = new int[10]; // 길이가 10인 객체의 배열을 동적 할당합니다.
	delete ptr1; // 동적 할당된 객체를 소멸시킵니다.
	delete []ptr2; // 동적 할당된 객체의 배열을 소멸시킵니다.
	//주의할점 : 동적 할당된 객체의 배열을 소멸시킬때는 반드시 4행처럼 작성해야 함, 만약에 3행과 같이 소멸시키신다면, 메모리 누수가 발생한다.

//    int StudentNum, TotalScore=0;
//    int * StudentScore;
//    i = 0;
//
//    cout << "학생 수를 입력하세요: ";
//    cin >> StudentNum;
//    StudentScore=new int[StudentNum];
//
//    for(i=0; i<StudentNum; i++) {
//     cout << i+1 << "번 학생의 점수: ";
//     cin >> StudentScore[i];
//     TotalScore+=StudentScore[i];
//    }
//
//    cout << "모든 학생의 평균: " << TotalScore/StudentNum << endl;
//    delete []StudentScore;

	//6강 구조체의 확장
	//맨 위쪽에 보면 구조체를 네임스페이스 함수 안에 정의한 것을 볼 수 있다.
    student s={1, "김철수", 90.5};
    s.Show();

    student2 s2;
    s2.SetInfo(2, "안철수", 100);
//    s2.id = 10; //id가 private로 설정되어 있기 때문에 직접 변경하려고 하면 에러가 발생한다.
//    에러내용 : declared private here
    s2.Show();
	return 0;

}
