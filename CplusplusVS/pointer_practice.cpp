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



// & �����ڿ� ������ - ������ 

// & ������ : ���� �տ� �پ ������ ����� �ּҸ� �����Ѵ�.
//#include <iostream>
//using namespace std;
//int main(void) {
//
//	int* a, b;
//	a = &b;
//	cout << "a�� �������" << a << endl;
//
// 
// 
// 
//}

// * ������ : ���� �տ� �پ ������ ����� ���� �����Ѵ�.
#include <iostream>
using namespace std;

int main(void) {

	int *a, b , c;
	a = &b; 
	b = 30;
	c = *a;
	cout << "a�� ���� " << a << "b�� ����" << b << "c�� ����" << c << endl; 



}