//
// Created by jimin on 3/19/2021.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int i;
int sorting[10];

int main(void) {

    srand((int)time(NULL));

    for (i = 0; i < 10; i++) { //10ȸ
        sorting[i] = rand() % 101; printf("%d ", sorting[i]);
    } printf("\n");

    for (i = 0; i < 10; i++) {
        if (sorting[i] > sorting[i + 1]) {
            sorting[i] = sorting[i + 1]; sorting[i + 1] = sorting[i];
            printf("%d ", sorting[i]);
        }
        else if (sorting[i] < sorting[i + 1]) { sorting[i] = sorting[i]; sorting[i + 1] = sorting[i + 1]; printf("%d ", sorting[i]);
        }
       
    }

    printf("\n");


}