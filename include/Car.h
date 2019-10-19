#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <cstdlib>

using namespace std;

class Car
{
    private:
        string type;
        string country;
        int year;
        Car* next;

    public:
        Car(){next =0;};
        //setters
        string get_type(){ return type; };
        string get_country(){ return country; };
        int get_year(){ return year; };
        Car *get_next() { return this->next; };
        //getters
        string set_type(string tp){ type=tp; };
        string set_country(string cntr){ country = cntr; };
        int set_year(int yr){ year = yr; };
        void set_next(Car* next) { this->next = next; };

        void createList(int year, string type, string country);
        void outList();
        Car* findElement(string value);
        Car* pushEl(string type, string country, int year);

};

#endif // CAR_H
