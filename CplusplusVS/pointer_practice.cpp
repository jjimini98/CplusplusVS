//#include <iostream>
//using namespace std;
//
//int main(void) {
//	char data[4] = "abc"; 
//	char* p1 = data;
//	char* p2;
//
//	p2 = &data[0];
//
//	cout << *p1 << "," << *p2 << endl;
//	system("pause");
//
//
//}



// & 연산자와 연산자 - 포인터 

// & 연산자 : 변수 앞에 붙어서 변수가 저장된 주소를 전달한다.
//#include <iostream>
//using namespace std;
//int main(void) {
//
//	int* a, b;
//	a = &b;
//	cout << "a의 결과값은" << a << endl;
//
// 
// 
// 
//}

// * 연산자 : 변수 앞에 붙어서 변수에 저장된 값을 전달한다.
#include <iostream>
using namespace std;

int main(void) {

	int *a, b , c;
	a = &b; 
	b = 30;
	c = *a;
	cout << "a의 값은 " << a << "b의 값은" << b << "c의 값은" << c << endl; 



}