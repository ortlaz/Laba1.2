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
    cout<<"����:\n"<<"1.�������� ���������� ������ �����.\n2.����� ���������� ������ �����.\n3.����� �������� � ��������� ������\n4.������� ���������� � ����� ������.\n5.�������� ������ �������� �����\n6.����� ������ �����\n7.�������� ���������� � ������� ����������� ������\n0.�����\n";

    cout<<"�������� ��������:";
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
            //����� ������ �����
            List.outList();
            system("pause");
            break;
        }

        case 3:{
            //����� ��������
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
            //������� ��������
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
            //�������� ���������
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
            cout<<"�������� ����� �� 0 �� 7\n";
            system("pause");
            break;
    }
}

    return 0;
}
