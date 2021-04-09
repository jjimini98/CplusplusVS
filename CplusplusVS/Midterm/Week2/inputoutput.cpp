// 1. C inputoutput

//#include <stdio.h>
//
//int main(void) {
//
//
//	printf("---------------------------\n");
//	printf("     소속              이름 \n");
//	printf("---------------------------\n");
//	printf("   빅데이터공학과     유지민\n");
//	printf("---------------------------\n");
//
//	getchar(); // 하나의 문자를 입력받아 프로그램을 종료한다
//
//
//}

// 2. printf 예시

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
//	printf("%s 은 %d 살입니다. \n 키는 %f cm 입니다\n", name, age, height);
//	//결과가 이상하다
//}
//
//



//3. printf 함수 예시

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
//	system("pause"); // stdlib.h 필요
//}

//4.  자료형 범위 확인
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <float.h>
//
//int main(void) {
//
//	printf("Min value of short = %d \n", SHRT_MIN); //short 형의 범위 중 최소값
//	printf("Max value of int = %d \n", INT_MAX);
//	printf("Max value of float = %g \n", FLT_MAX);
//	printf("Min value of double = %g\n", DBL_MIN);
//	
//	system("pause");
//
//
//}

//5. 8진수/ 16진수

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

// 6. C언어의 입출력 연습
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


// 7. C++입출력연습
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

// 8. C++ 함수 입출력 연습 
//#include <iostream>
//
//double area(int r);  //함수의 원형을 선언
//
//double area(int r) { return 3.14 * r * r; } // 함수 구현 
//
//int main(void) {
//	int n = 2;
//	char c = '#';
//	std::cout << c << "Lec2" << '-' << "ex" << true + 1 << std::endl;
//	std::cout << "면적은" << area(n);
//}
// 암호를 입력받아 맞으면 종료 틀리면 경고문
// 
#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
	char passwd[4];
	while (true) {
		cout << "암호를 입력하세요>";
		cin >> passwd;
		if (strcmp(passwd ,"C++")==0) { cout << "프로그램을 정상종료합니다" << endl; break; }
		else cout << "암호가 틀립니다\n";

	}
} 