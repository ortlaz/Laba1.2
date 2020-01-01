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
    Node* tail;
public:
    Car() : start(0), tail(0) {};
    ~Car();

    //добавление узла в список
    void pushBack(Node &node);

    //вывод односвязного списка
    void outList();

    //поиск элемента
    Node* findElement(string value);

    //вставка элемента
    void insertEl(Node &node);

    //удаление элементов
    void delEl(Node &node, string value, Node* pointer);


};

#endif // CAR_H
