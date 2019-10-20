#include <iostream>
#include "Car.h"
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Car List;
    Node node;
//    Models Spisk;
    int var;
while(var){
    system("cls");
    cout<<"Меню:\n"<<"1.Создание модельного списка машин.\n2.Вывод модельного списка машин.\n3.Поиск элемента в модельном списке\n4.Вставка информации о новой машине.\n5.Создание списка моеделей машин\n6.Вывод списка машин\n7.Удаление информации о машинах определённой модели\n0.Выход\n";

    cout<<"Выберите действие:";
    cin>>var;

    switch(var){
        case 1:{
            for(int i=0; i<4;i++){
           //something
            node.input(node);
            List.pushBack(node);
            }
            system("pause");
            break;
        }
        case 2:{
            //вывод списка машин
            List.outList();
            system("pause");
            break;
        }

        case 3:{
            //поиск элемента
            cout<<"ELEMENT:\n";
//            Car* Lst = List.findElement("Nissan");
/*            while (Lst && Lst->get_type()=="Nissan"){
                cout<<"Type:"<<Lst->get_type()<<"\nCountry:"<<Lst->get_country()<<"\nYear:"<<Lst->get_year()<<endl;
                Lst = Lst->get_next();
            }
            */
            system("pause");
            break;
        }
        case 4:{
            //вставка элемента
//            List.pushEl();
            system("pause");
            break;
        }
        case 5:{

//            Spisk.createNewList();
            system("pause");
            break;
        }
        case 6:{
//            Spisk.outNewList();
            system("pause");
            break;
        }
        case 7:{
            //удаление элементов
//            Spisk.deleteModel("BMW");
            system("pause");
            break;
        }
        case 0:{
            exit(0);
            system("pause");
            break;
        }
        default:
            cout<<"Выберите число от 0 до 7\n";
            system("pause");
            break;
    }
}

    return 0;
}
