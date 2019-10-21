#include <iostream>
#include "Car.h"
#include <windows.h>
#include "Models.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    Car List;
    Node node;
    Element elem;
    Models Spisk;
    int var;
while(var){
    system("cls");
    cout<<"����:\n"<<"1.�������� ���������� ������ �����.\n2.����� ���������� ������ �����.\n3.����� �������� � ��������� ������\n4.������� ���������� � ����� ������.\n5.�������� ������ �������� �����\n6.����� ������ �����\n7.�������� ���������� � ������� ����������� ������\n0.�����\n";

    cout<<"�������� ��������:";
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
            //����� ������ �����
            List.outList();
            system("pause");
            break;
        }

        case 3:{
            //����� ��������
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
            //������� ��������
            for(int i=0; i<2;i++){
            node.input(node);
            List.insertEl(node);
            }
            system("pause");
            break;
        }
        case 5:{
            //�������� ������ �������
            elem.input(elem);
            Node *p = List.findElement(elem.model);
            Spisk.pushBack(p, elem);
            system("pause");
            break;
        }
        case 6:{
            //����� ������ �������
            Spisk.outList();
            system("pause");
            break;
        }
        case 7:{
            //�������� ���������
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
            cout<<"�������� ����� �� 0 �� 7\n";
            system("pause");
            break;
    }
}

    return 0;
}
