//// p.47 �ݺ��� - �ϳ���ž 
//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	int move;
//	cout << "������ ������? ";
//	cin >> move;
//	int result = pow(2, move) - 1;
//	cout << "����" << move << "���� �ּ� �̵� Ƚ����" << result << "�Դϴ� " << endl;
//
//}
//
//
//
//
//
//// p.58 ���� ���� ���� - ���������� 
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
//    cout << "Bob�� ���� �Է��Ͻÿ�(0:����, 1:���� , 2:��) >>";
//    cin >> bob;
//    while (1) {
//        if (bob == 0) { //����
//           if (alice == 1) { cout << "alice�� ������ ������ bob�� ������ ��� alice�� �̰���ϴ�" << endl; }
//           else if (alice == 2) { cout << "alice�� ���� ������ bob�� ������ ��� bob�� �̰���ϴ�" << endl; break; }
//           else { cout << "alice�� ������ �°� bob�� ������ ���� ���� �����ϴ�" << endl; }
//        }
//       else if (bob == 1) { // ����
//            if (alice == 1) { cout << "alice�� ������ ������ bob�� ������ ��� ���� �����ϴ�" << endl; }
//            else if (alice == 2) { cout << "alice�� ���� ������ bob�� ���� ��� alice�� �̰���ϴ�" << endl; }
//            else { cout << "alice�� ������ �°� bob�� ������ ���� bob�� �̰���ϴ�" << endl; break; }
//       }
//       else {//��
//            if (alice == 1) { cout << "alice�� ������ ������ bob�� ���� ��� bob�� �̰���ϴ�" << endl; break; }
//            else if (alice == 2) { cout << "alice�� ���� ������ bob�� ������� ���� �����ϴ�" << endl; }
//            else { cout << "alice�� ������ �°� bob�� ���� ���� alice�� �̰���ϴ�" << endl; }
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
////p.60 �ð� ���� ���� 
//#include <iostream>
//#include <math.h> 
//#include <time.h>
//
//using namespace std;
//int primenumber[10] = { 2, 3, 5, 7, 5, 11, 13, 17, 19, 23 };
//
//// �Ҽ� �Ǻ� 
//bool Prime(int n) {
//    if (n <= 1) { return false; }
//
//    for (int i = 2; i <= sqrt(n); i++) {
//        if ((n % i) == 0) { return false;    }}
//
//     return true; }
//
////��� �Ǻ� 
//int divisor(int n) {
//    int* p = primenumber; //�迭�� �����ϱ� ���� ������ 
//    for (int i = 0; i <= sizeof(primenumber); i++) {
//        if (n % primenumber[i] == 0) { return primenumber[i]; }    }
//    return 0; }
//
//int main(void) {
//    time_t start, finish; //����ð� ����
//    double runtime;
//    start = time(NULL); //����
//
//    int date;
//    cout << "���� ��¥�� �Է��ϼ��� (�� : 210301) : ";
//    cin >> date;
//    cout << endl;
//    if (Prime(date) == true) { cout << date << "�� �Ҽ��Դϴ�" << endl << endl; }
//    else { cout << date << "��" << divisor(date) << "�� ����Դϴ�" << endl << endl; }
//
//    finish = time(NULL); //�� 
//
//    runtime = (double)(finish - start);
//    cout << "�ɸ� �ð���" << runtime << "�� �Դϴ�." << endl;
//    return 0;}
//
