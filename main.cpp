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
    cout<<"����:\n"<<"1.�������� ���������� ������ �����.\n2.����� ���������� ������ �����.\n3.����� �������� � ��������� ������\n4.������� ���������� � ����� ������.\n5.�������� ������ �������� �����\n6.����� ������ �����\n7.�������� ���������� � ������� ����������� ������\n0.�����\n";

    cout<<"�������� ��������:";
    cin>>var;

    switch(var){
        case 1:{

            int n=4;
            //�������� ������ �����
            createList(List,n);
            system("pause");
            break;
        }
        case 2:{
            //����� ������ �����
            outList(List);
            system("pause");
            break;
        }

        case 3:{
            //����� ��������
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
            //������� ��������
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
            //�������� ���������
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
            cout<<"�������� ����� �� 0 �� 7\n";
            system("pause");
            break;
    }
}

    return 0;
}
