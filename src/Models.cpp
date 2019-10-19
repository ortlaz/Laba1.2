#include "Models.h"

//�������� ������ ������� �����
void Models::createNewList(int m, string type){
    Models* ptr=new Models;
    Car* L = new Car;
        ptr->set_type(type);
        ptr->set_next(0);

        if(next==0){
            next=ptr;
        }
        else{
            ptr->set_next(next);
            next = ptr;
        }
        ptr->set_begining(L->findElement(ptr->get_type()));
}

//����� ������ ������� �����

void Models::outNewList(){
    Models* ptr = next;
    cout<<"Information about cars.\n";
    while (ptr){
        cout<<"Type:"<<ptr->get_type()<<endl;
        ptr = ptr->get_next();
    }
}
//�������� ���������
Car* Models::deleteModel( string value){
    Models* pointer= next;
    Car* temp;

    //����� ��������� �� ������ ��������� �������
    while(pointer){
        if(pointer->get_type()==value){
            break;
            }
        pointer=pointer->get_next();
    }

	//���� ������� �������, ������� ����� �������
	if (pointer && pointer->get_begining()){
		temp = pointer->get_begining();//��� ��������

		while (temp->get_type() == value && temp->get_next()) {
			//���� �����
			temp->set_country(temp->get_next()->get_country());
			temp->set_type(temp->get_next()->get_type());
			temp->set_year(temp->get_next()->get_year());
			temp->set_next(temp->get_next()->get_next());
		}

		//��������
		if (temp->get_next() == 0 || temp->get_next()->get_type() != value) {
			temp = temp->get_next();
			if (temp == temp->get_next()) {
				temp->set_next(temp->get_next());
				free(temp);
			}
		}
	}
    return temp->get_next();
}
