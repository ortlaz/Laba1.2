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
public:
    Car() : start(0) {};
    ~Car();

    //���������� ���� � ������
    void pushBack(Node &node);

    //����� ������������ ������
    void outList();

    //����� ��������


    //������� ��������


    //�������� ���������


};

#endif // CAR_H
