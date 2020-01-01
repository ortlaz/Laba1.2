#include "Models.h"

Models::~Models(){
    Element* cur = head;
    while (cur){
        cur = head->next;
        delete head;
        head = cur;
    }
}

void Models::pushBack(Node *p, Element &elem){
    Element* cur = new Element;

    cur->model=elem.model;
    cur->beg = p;

    cur->next = 0;

    if(!head){
        head = cur;
    }else{
        ending->next = cur;
    }
    ending=cur;
}

void Models::outList(){
    Element *cur = head;
    while(cur){
    cout<<"Type:"<<cur->model<<"\nУказатель на ряд:"<<cur->beg<<endl;
    cur = cur->next;
    }
}
void Element::input(Element &elem){
    cout<<"Заполните информацию о машине\n";
    cout<<"Модель:";
    cin>>model;

}

Node* Models::findElement(string value){
 Element* strt = head;
    while(strt){
        if(strt->model==value)
            return strt->beg;
        strt = strt->next;
    }
    return 0;
}
