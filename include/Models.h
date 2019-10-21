#ifndef MODELS_H
#define MODELS_H
#include "Car.h"

using namespace std;

struct Element{
    string model;
    void input(Element &elem);
    Element* next;
    Node* beg;
};

class Models{
    Element* head; //указатель на начало списка
    Element* ending;
public:
    Models() : head(0), ending(0) {};
    ~Models();

    //добавление узла в список
    void pushBack(Node *p, Element &elem);

    //вывод односвязного списка
    void outList();

    //поиск элемента
    Node* findElement(string value);

};

#endif // MODELS_H
