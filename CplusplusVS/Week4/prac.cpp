//
// Created by jimin on 3/28/2021.
//

#include <iostream>
using namespace std;

int main(void) {

    char data[4] = "abc";
    char *p1 = data;
    char *p2 ;

    p2 = &data[0];
    cout << *p1 << "," << *p2 << endl ;
    cout << "두번째" << p1 << "," << p2 <<endl;

    system("pause");



}