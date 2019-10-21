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
    Element* head; //��������� �� ������ ������
    Element* ending;
public:
    Models() : head(0), ending(0) {};
    ~Models();

    //���������� ���� � ������
    void pushBack(Node *p, Element &elem);

    //����� ������������ ������
    void outList();

    //����� ��������
    Node* findElement(string value);

};

#endif // MODELS_H
