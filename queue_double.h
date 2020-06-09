//
// Created by Valera on 09.06.2020.
//
#ifndef RPM_LABA_7_QUEUE_DOUBLE_H
#define RPM_LABA_7_QUEUE_DOUBLE_H

#include "iostream"
#include "queue.h"

void queue_double() {
    auto *i = new Queue<double>();
    bool quit=false;
    while (!quit) {
        std::cout << "(1) Добавить элемент в очередь" << std::endl;
        std::cout << "(2) Удалить элемент из очереди" << std::endl;
        std::cout << "(3) Показать очередь" << std::endl;
        std::cout << "(4) Показать размер очереди" << std::endl;
        std::cout << "(5) Показать первый элемент очереди" << std::endl;
        std::cout << "(6) Показать последний элемент очереди" << std::endl;
        std::cout << "(7) Проверить очередь на пустоту" << std::endl;
        std::cout << "(8) Выход" << std::endl;
        int menu;
        std::cin >> menu;
        switch (menu) {
            case 1:
                float item;
                std::cin >> item;
                i->enqueue(item);
                break;
            case 2:
                i->dequeue();
                break;
            case 3:
                i->show();
                break;
            case 4:
                i->size();
                break;
            case 5:
                i->front();
                break;
            case 6:
                i->back();
                break;
            case 7:
                i->empty_check();
                break;
            case 8:
                quit = true;
                std::cout << "До встреч!" << std::endl;
                break;
            default:
                break;
        }
    }
}
#endif //RPM_LABA_7_QUEUE_DOUBLE_H