//// p.47 반복문 - 하노이탑 
//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	int move;
//	cout << "원반의 개수는? ";
//	cin >> move;
//	int result = pow(2, move) - 1;
//	cout << "원반" << move << "개의 최소 이동 횟수는" << result << "입니다 " << endl;
//
//}
//
//
//
//
//
//// p.58 랜덤 숫자 생성 - 가위바위보 
//#include <iostream>
//#include <stdlib.h>
//#include <ctime>
//using namespace std;
//
//int alice;
//int bob;
//
//int main() {
//
//   srand((unsigned int)time(NULL));
//    alice = rand() % 3;
// 
//
//    cout << "Bob의 값을 입력하시오(0:가위, 1:바위 , 2:보) >>";
//    cin >> bob;
//    while (1) {
//        if (bob == 0) { //가위
//           if (alice == 1) { cout << "alice가 바위를 내었고 bob이 가위를 내어서 alice가 이겼습니다" << endl; }
//           else if (alice == 2) { cout << "alice가 보를 내었고 bob이 가위를 내어서 bob이 이겼습니다" << endl; break; }
//           else { cout << "alice가 가위를 냈고 bob이 가위를 내서 서로 비겼습니다" << endl; }
//        }
//       else if (bob == 1) { // 바위
//            if (alice == 1) { cout << "alice가 바위를 내었고 bob이 바위를 내어서 서로 비겼습니다" << endl; }
//            else if (alice == 2) { cout << "alice가 보를 내었고 bob이 바위 내어서 alice가 이겼습니다" << endl; }
//            else { cout << "alice가 가위를 냈고 bob이 바위를 내서 bob이 이겼습니다" << endl; break; }
//       }
//       else {//보
//            if (alice == 1) { cout << "alice가 바위를 내었고 bob이 보를 내어서 bob이 이겼습니다" << endl; break; }
//            else if (alice == 2) { cout << "alice가 보를 내었고 bob이 보를내어서 서로 비겼습니다" << endl; }
//            else { cout << "alice가 가위를 냈고 bob이 보를 내서 alice가 이겼습니다" << endl; }
//        }
//
//   }
//
//
//
//}
//
//
//
////p.60 시간 간격 측정 
//#include <iostream>
//#include <math.h> 
//#include <time.h>
//
//using namespace std;
//int primenumber[10] = { 2, 3, 5, 7, 5, 11, 13, 17, 19, 23 };
//
//// 소수 판별 
//bool Prime(int n) {
//    if (n <= 1) { return false; }
//
//    for (int i = 2; i <= sqrt(n); i++) {
//        if ((n % i) == 0) { return false;    }}
//
//     return true; }
//
////약수 판별 
//int divisor(int n) {
//    int* p = primenumber; //배열에 접근하기 위한 포인터 
//    for (int i = 0; i <= sizeof(primenumber); i++) {
//        if (n % primenumber[i] == 0) { return primenumber[i]; }    }
//    return 0; }
//
//int main(void) {
//    time_t start, finish; //실행시간 측정
//    double runtime;
//    start = time(NULL); //시작
//
//    int date;
//    cout << "오늘 날짜를 입력하세요 (예 : 210301) : ";
//    cin >> date;
//    cout << endl;
//    if (Prime(date) == true) { cout << date << "는 소수입니다" << endl << endl; }
//    else { cout << date << "는" << divisor(date) << "의 배수입니다" << endl << endl; }
//
//    finish = time(NULL); //끝 
//
//    runtime = (double)(finish - start);
//    cout << "걸린 시간은" << runtime << "초 입니다." << endl;
//    return 0;}
//
