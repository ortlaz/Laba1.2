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
    }else{
        tail->pNext = cur;
    }
    tail=cur;
}

void Car::outList(){
    Node *cur = start;
    while(cur){
    cout<<"Type:"<<cur->type<<"\nCountry:"<<cur->country<<"\nYear:"<<cur->year<<endl;
    cout<<cur->pNext<<endl;
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

Node* Car::findElement(string value){
    Node* strt = start;
    while(strt){
        if(strt->type==value)
            break;
        strt = strt->pNext;
    }
    return strt;
}

void Car::delEl(Node &node, string value, Node* pointer){
    Node* cur1 = new Node;
    cur1 = pointer;
    while(cur1->pNext){
        if(cur1->pNext->type != value){
            break;
        }
        cur1 = cur1->pNext;
    }

    if (pointer == start){
        start = cur1->pNext;
        return;
    }
    Node* cur = new Node;
    cur = start;
    while (cur->pNext != pointer)
        cur = cur->pNext;
    cur->pNext = cur1->pNext;
    delete cur1;
}

void Car::insertEl(Node &node){
     if(!start){
        Node* cur = new Node;
        cur->type=node.type;
        cur->country=node.country;
        cur->year=node.year;
        return;
    }
    Node* c = start;
    while(c->pNext){
        if (c->pNext->type==node.type){
            if(c->pNext->year<node.year){
                break;
            }
        }else if(c->type==node.type){
            break;
        }
        c=c->pNext;
    }

    Node* temp = new Node;
    temp->type=node.type;
    temp->country=node.country;
    temp->year=node.year;
    //вставка
    temp->pNext=c->pNext;
    c->pNext = temp;
}
