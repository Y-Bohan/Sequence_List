#include"list.h"
#include "iostream"
using namespace std;
const int N = 6;
int main()
{
	List my_lis(N);
	my_lis.insert_i_element(0,4);     //�±�i������Ԫ�ز���
	my_lis.insert_i_element(1, 5);
	my_lis.insert_i_element(1, 6);
	my_lis.insert_i_element(3, 7);
	my_lis.insert_i_element(2, 8);
	my_lis.insert_i_element(0, 9);
	my_lis.insert_i_element(6, 10);    //�����������޷���������Ԫ��
	my_lis.traverse();    //��������,��ȷ����Ӧ��9 4 6 8 5 7
	int temp;
	my_lis.get_i_element(3,temp);   //��ȡi�±��Ԫ�ز���
	cout << temp << endl;
	cout<<my_lis.locat_element(5)<<endl;    //��ȡԪ��5���ڵ��±����
	my_lis.get_pre_element(temp, 5);        //��ȡԪ��5��ǰһ��Ԫ�ز���
	cout << temp << endl;
	my_lis.get_next_element(temp, 5);       //��ȡԪ��5�ĺ�һ��Ԫ�ز���
	cout << temp << endl;
	my_lis.delete_i_element(5,temp);        //ɾ��i�±�Ԫ��
	my_lis.delete_i_element(2, temp);
	cout << my_lis.length() << endl;      //Ԫ�س��Ȳ���
	my_lis.clean();      //�������
	my_lis.traverse();    //��������
	return 0;
}