//#include <iostream>
//#include <math.h>
//#include <time.h>
//
//using namespace std;
//int primenumber[10] = {2, 3, 5, 7, 5, 11, 13, 17, 19, 23};
//
//
////�Ҽ� �Ǻ� 
//bool Prime(int n) {
//    if (n <= 1) {return false; }
//
//    for (int i = 2; i <= sqrt(n); i++) {
//        if ((n % i) == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
////��� �Ǻ� 
//int divisor(int n) {
//    int* p = primenumber; 
//    for (int i = 0; i <= sizeof(primenumber); i++) {
//        if (n % primenumber[i] == 0) {return primenumber[i];}
//            }
//    return 0;
//}
//
//
//int main(void) {
//    time_t start, finish;
//    double runtime;
//    start = time(NULL);
//
//
//    int date;
//    cout << "���� ��¥�� �Է��ϼ��� (�� : 210301) : ";
//    cin >> date;
//    cout << endl; 
//    if ( Prime(date) == true) { cout << date << "�� �Ҽ��Դϴ�" << endl <<endl ; }
//    else { cout << date<< "��" << divisor(date) << "�� ����Դϴ�"<< endl <<endl ; }
//
//
//
//
//
//    finish = time(NULL);
//
//    runtime = (double)(finish - start);
//    cout << "�ɸ� �ð���"<< runtime << "�� �Դϴ�." << endl;
//    return 0;
//
//
//
//}
//
//
