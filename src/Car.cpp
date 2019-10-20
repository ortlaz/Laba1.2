#include "Car.h"

Car::~Car(){
    Node* cur = start;
    while (cur){
        cur = start->pNext;
        delete start;
        start = cur;
    }
}

void Car::pushBack(Node &node){
    Node* cur = new Node;

    cur->type=node.type;
    cur->country=node.country;
    cur->year=node.year;

    cur->pNext = 0;

    if(!start){
        start = cur;
        return;
    }else{
        Node* cur1 = start;
        while(cur1->pNext){
            cur1 = cur1->pNext;
        }
        cur1->pNext = cur;
    }
}
void Car::outList(){
    Node *cur = start;
    while(cur){
    cout<<"Type:"<<cur->type<<"\nCountry:"<<cur->country<<"\nYear:"<<cur->year<<endl;
    cur = cur->pNext;
    }
}
void Node::input(Node &node){
    cout<<"Заполните информацию о машине\n";
    cout<<"Модель:";
    cin>>type;
    cout<<"\nСтрана:";
    cin>>country;
    cout<<"\nГод:";
    cin>>year;
    cout<<endl;
}
