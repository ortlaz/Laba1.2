#include <iostream>

using namespace std;

int main()
{
     SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Car* List = NULL;
    Models* Spisk = NULL;
    int var;
while(var){
    system("cls");
    cout<<"Меню:\n"<<"1.Создание модельного списка машин.\n2.Вывод модельного списка машин.\n3.Поиск элемента в модельном списке\n4.Вставка информации о новой машине.\n5.Создание списка моеделей машин\n6.Вывод списка машин\n7.Удаление информации о машинах определённой модели\n0.Выход\n";

    cout<<"Выберите действие:";
    cin>>var;

    switch(var){
        case 1:{

            int n=4;
            //создание списка машин
            createList(List,n);
            system("pause");
            break;
        }
        case 2:{
            //вывод списка машин
            outList(List);
            system("pause");
            break;
        }

        case 3:{
            //поиск элемента
            cout<<"ELEMENT:\n";
            Car* Lst = findElement(List, "Nissan");
            while (Lst && Lst->type=="Nissan"){
                cout<<"Type:"<<Lst->type<<"\nCountry:"<<Lst->country<<"\nYear:"<<Lst->year<<endl;
                Lst = Lst->next;
            }
            system("pause");
            break;
        }
        case 4:{
            //вставка элемента
            pushEl(List);
            system("pause");
            break;
        }
        case 5:{
            int m=2;
            createNewList(Spisk,m, List);
            system("pause");
            break;
        }
        case 6:{
            outNewList(Spisk);
            system("pause");
            break;
        }
        case 7:{
            //удаление элементов
            deleteModel(Spisk,List, "BMW");
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
