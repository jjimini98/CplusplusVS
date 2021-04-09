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
//#include <string>
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
