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
    Node* start; //��������� �� ������ ������
    Node* tail;
public:
    Car() : start(0), tail(0) {};
    ~Car();

    //���������� ���� � ������
    void pushBack(Node &node);

    //����� ������������ ������
    void outList();

    //����� ��������
    Node* findElement(string value);

    //������� ��������
    void insertEl(Node &node);

    //�������� ���������
    void delEl(Node &node, string value, Node* pointer);


};

#endif // CAR_H
