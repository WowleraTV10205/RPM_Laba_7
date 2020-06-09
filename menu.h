//
// Created by Valera on 09.06.2020.
//
#ifndef RPM_LABA_7_MENU_H
#define RPM_LABA_7_MENU_H

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "queue_int.h"
#include "queue_double.h"
#include "queue_string.h"

using namespace std;

int menu() {
    cout << "(1) Создать очередь типа int" << endl;
    cout << "(2) Создать очередь типа double" << endl;
    cout << "(3) Создать очередь типа string" << endl;
    int a;
    cin >> a;
    switch (a) {
        case 1: {
            queue_int();
            break;
        }
        case 2: {
            queue_double();
            break;
        }
        case 3: {
            queue_string();
            break;
        }
        default:
            break;
    }
    return 0;
}
#endif //RPM_LABA_7_MENU_H
