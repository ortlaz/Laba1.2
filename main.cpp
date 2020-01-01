#include <iostream>
#include "Car.h"
#include <windows.h>
#include "Models.h"

using namespace std;

int main()
{
    SetConsoleCP(866);
	SetConsoleOutputCP(866);
    Car List;
    Node node;
    Element elem;
    Models Spisk;
    int var;
while(var){
    system("cls");
    cout<<"Меню:\n"<<"1.Создание модельного списка машин.\n2.Вывод модельного списка машин.\n3.Поиск элемента в модельном списке\n4.Вставка информации о новой машине.\n5.Создание списка моеделей машин\n6.Вывод списка машин\n7.Удаление информации о машинах определённой модели\n0.Выход\n";

    cout<<"Выберите действие:";
    cin>>var;

    switch(var){
        case 1:{
            for(int i=0; i<4;i++){
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
            Node* Lst = List.findElement("Nissan");
            while (Lst && Lst->type=="Nissan"){
                cout<<"Type:"<<Lst->type<<"\nCountry:"<<Lst->country<<"\nYear:"<<Lst->year<<endl;
                Lst = Lst->pNext;
            }
            system("pause");
            break;
        }
        case 4:{
            //вставка элемента
            node.input(node);
            List.insertEl(node);

            system("pause");
            break;
        }
        case 5:{
            //создание списка моделей
            for(int i=0; i<2;i++){
            elem.input(elem);
            Node *p = List.findElement(elem.model);
            Spisk.pushBack(p, elem);
            }
            system("pause");
            break;
        }
        case 6:{
            //вывод списка моделей
            Spisk.outList();
            system("pause");
            break;
        }
        case 7:{
            //удаление элементов
            List.delEl(node,"BMW",Spisk.findElement("BMW"));
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
