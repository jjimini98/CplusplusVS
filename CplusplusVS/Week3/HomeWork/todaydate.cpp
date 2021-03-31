//
// Created by jimin on 3/18/2021.
//
//p.60 시간 간격 측정
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
