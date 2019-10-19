#ifndef MODELS_H
#define MODELS_H
#include <iostream>
#include <cstdlib>
#include "Car.h"

class Models
{

    private:
        string type;
        Car* begining;
        Models* next;

    public:
        Models(){next = 0; begining = 0;};
        //setters
        string get_type(){ return type; };
        Models *get_next(){ return this->next; };
        Car *get_begining(){ return this->begining; };
        //getters
        string set_type(string tp){ type=tp; };
        void set_begining(Car* begining){ this->begining = begining; };
        void set_next(Models* next){ this->next = next; };

        void createNewList(int m, string type);
        void outNewList();
        Car* deleteModel( string value);
};

#endif // MODELS_H
