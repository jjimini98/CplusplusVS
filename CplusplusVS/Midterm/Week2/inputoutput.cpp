// 1. C inputoutput

//#include <stdio.h>
//
//int main(void) {
//
//
//	printf("---------------------------\n");
//	printf("     �Ҽ�              �̸� \n");
//	printf("---------------------------\n");
//	printf("   �����Ͱ��а�     ������\n");
//	printf("---------------------------\n");
//
//	getchar(); // �ϳ��� ���ڸ� �Է¹޾� ���α׷��� �����Ѵ�
//
//
//}

// 2. printf ����

//#include <stdio.h>
//#include <cstring>
//
//using namespace std;
//
//int main(void) {
//	string name = "jimin";
//	int age = 24; 
//	long height = 158.2;
//
//	printf("%s �� %d ���Դϴ�. \n Ű�� %f cm �Դϴ�\n", name, age, height);
//	//����� �̻��ϴ�
//}
//
//



//3. printf �Լ� ����

//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int a =-1, b = 23, c = 4567;
//	long d = 325678;
//	printf("01. a=%d\n", a);
//	printf("02. a=%7d\n", a);
//	printf("03. a=%07d\n", a);
//	printf("04. b=%7d\n", b);
//	printf("05. b=%+7d\n", b);
//	printf("06. b=%- 7d\n", b);
//	printf("07. c=%7d\n", c);
//	printf("08. c=%+7d\n", c);
//	printf("09. c=%- 7d\n", c);
//	printf("10. d=%7d\n", d);
//
//	float e = -123.45, f = 9876.5;
//	double g = 2.468;
//	printf("11. e=%8.3f\n", e);
//	printf("12. f=%8.3f\n", f);
//	printf("13. g=%8.3f\n", g);
//	printf("14. g=%8.f\n", g);
//	printf("15. g=%8.1f\n", g);
//	printf("16. g=%.2f\n", g);
//	printf("17. e=%.2f\n", e);
//	printf("18. e=%+.2f\n", e);
//	printf("19. e=%-.2f\n", e);
//	printf("20. e=%8.1f\n", e);
//	printf("21. e=%8.2f\n", e);
//	printf("22. e=%8.3f\n", e);
//	printf("23. f=%.2f\n", f);
//
//
//
//
//	system("pause"); // stdlib.h �ʿ�
//}

//4.  �ڷ��� ���� Ȯ��
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <float.h>
//
//int main(void) {
//
//	printf("Min value of short = %d \n", SHRT_MIN); //short ���� ���� �� �ּҰ�
//	printf("Max value of int = %d \n", INT_MAX);
//	printf("Max value of float = %g \n", FLT_MAX);
//	printf("Min value of double = %g\n", DBL_MIN);
//	
//	system("pause");
//
//
//}

//5. 8����/ 16����

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//	printf("%d %x %o \n", 19, 19, 19);
//	printf("%d %x %o\n", 0x1c, 0x1c, 0x1c); // 28 1c 34
//	printf("%d %x %o\n", 017, 017, 017); // 15 f 17
//	printf("%d\n", 11 + 0x11 + 011); // 37
//	printf("%x\n", 2097151); // 0x1fffff
//	printf("%d\n", 0x1FfFFf); // 2097151
//	printf("%#d %#x %#o\n\n", 19, 19, 19); // 19 0x13 023
//	int a;
//	printf("Type a hexadecimal number : ");
//	scanf_s("%x", &a);
//	printf("The number is %#o in octal number.\n", a);
//	system("pause");
//
//}
//

// 6. C����� ����� ����
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main(void) {
//
//	printf("%d\n", "jimin");
//
//
//
//}


// 7. C++����¿���
//#include <iostream>
//
//int main(void) {
//
//
//	int n = 3;
//	char c = '#';
//	std::cout << c << 5.5 << '-' << n << "hello" << true;
//	std::cout << "hello\n"; 
//}

// 8. C++ �Լ� ����� ���� 
//#include <iostream>
//
//double area(int r);  //�Լ��� ������ ����
//
//double area(int r) { return 3.14 * r * r; } // �Լ� ���� 
//
//int main(void) {
//	int n = 2;
//	char c = '#';
//	std::cout << c << "Lec2" << '-' << "ex" << true + 1 << std::endl;
//	std::cout << "������" << area(n);
//}
// ��ȣ�� �Է¹޾� ������ ���� Ʋ���� ���
// 
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char passwd[4];
	while (true) {
		cout << "��ȣ�� �Է��ϼ���>";
		cin >> passwd;
		if (strcmp(passwd ,"C++")==0) { cout << "���α׷��� ���������մϴ�" << endl; break; }
		else cout << "��ȣ�� Ʋ���ϴ�\n";

	}
} 