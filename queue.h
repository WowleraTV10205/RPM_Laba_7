//
// Created by Valera on 09.06.2020.
//
#ifndef RPM_LABA_7_QUEUE_H
#define RPM_LABA_7_QUEUE_H

#include <list>
#include <iostream>

template <typename T> class Queue
{
public:
    std::list<T> list;
    void empty_check() {
        if (list.empty()) { std::cout << "Очередь пуста" << std::endl; }
        else { std::cout << "Очередь не пуста" << std::endl; }
    }
    bool empty()
    {
        return list.empty();
    }
    void enqueue(T item)
    {
        list.push_back(item);
        std::cout << "В очереди " << item << std::endl;
    }
    void show()
    {
        try
        {
            if (empty())
            {
                throw 1;
            }
            for (auto iter = list.begin(); iter != list.end(); iter++) {
                std::cout << *iter << " ";
            }
            std::cout << std::endl;
        }
        catch(int n)
        {
            std::cout << "Ошибка! " << n << ":  Очередь пуста!" << std::endl;
        }
    }

    int size()
    {
        std::cout << "Размер очереди: " << list.size() << std::endl;
        return list.size();
    }
    void dequeue()
    {
        try
        {
            if (empty())
            {
                throw 2;
            }
            list.pop_front();
            std::cout << "Успешно!l" << std::endl;
        }
        catch(int n)
        {
            std::cout << "Ошибка! " << n << ": Очерель пуста!" << std::endl;
        }
    }
    T front()
    {
        try
        {
            if (empty())
            {
                throw 1;
            }
            std::cout << "Первый элемент: " << list.front() << std::endl;
            return list.front();
        }
        catch(int n)
        {
            std::cout << "Ошибка! " << n << ": Очередь пуста!" << std::endl;
        }
    }
    T back()
    {
        try
        {
            if (empty())
            {
                throw 1;
            }
            std::cout << "Последний элемент: " << list.back() << std::endl;
            return list.back();
        }
        catch(int n)
        {
            std::cout << "Ошибка! " << n << ": очередь пуста!" << std::endl;
        }
    }
};
#endif //RPM_LABA_7_QUEUE_H