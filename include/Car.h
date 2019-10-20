#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <cstdlib>

using namespace std;

struct Node{
    string type;
    string country;
    int year;

    void input(Node &node);
    Node* pNext;
};

class Car{
    Node* start; //указатель на начало списка
public:
    Car() : start(0) {};
    ~Car();

    //добавление узла в список
    void pushBack(Node &node);

    //вывод односвязного списка
    void outList();

    //поиск элемента


    //вставка элемента


    //удаление элементов


};

#endif // CAR_H
