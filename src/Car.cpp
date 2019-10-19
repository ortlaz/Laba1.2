#include "Car.h"

//создание списка
void Car::createList(int year, string type, string country){

    Car* newCar = new Car;

    newCar->set_type(type);
    newCar->set_country(country);
    newCar->set_year(year);
    newCar->set_next(0);

    if(next == 0){
        next = newCar;
    }
    else{
        newCar->set_next(next);
        next = newCar;
    }
}


//вывод списка
void Car::outList(){
    Car* newCar = next;
        cout<<"Information.\n";
    while (newCar){
        cout<<"Type:"<<newCar->get_type()<<"\nCountry:"<<newCar->get_country()<<"\nYear:"<<newCar->get_year()<<endl;
        newCar = newCar->get_next();
        }
}
//поискк элемента по значению
Car* Car::findElement(string value){

    Car* pointer= next;

    while(pointer){
        if(pointer->get_type()==value)
            break;
        pointer=pointer->get_next();
    }
    return pointer;
}
//вставка элемента
Car* Car::pushEl(string type, string country, int year){
    Car *temp, *ptr, *pointer=next;

    temp=new Car;
    temp->get_type();
    temp->get_country();
    temp->get_year();
    temp = temp->get_next();

    while(pointer->get_next()){
        if (pointer->get_next()->get_type()==temp->get_type()){
            if(pointer->get_next()->get_year()<temp->get_year()){
            break;
            }
        }else if(pointer->get_type()==temp->get_type()){
            break;
        }
    pointer=pointer->get_next();

    }

    //вставка
    ptr=pointer->next;
    pointer->next=temp;
    temp->next = ptr;

    return temp;
}

