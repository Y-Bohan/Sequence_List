#ifndef LIST_H
#define LIST_H

#include "iostream"
using namespace std;
class List
{
public:
	List(int cap);    //���캯����������ʼ��
	~List();      //�������������ڴ��ͷ�
	void clean();   //��ն���
	bool empty();   //�п�
	bool full();    //����
	int length();   //��ȡ����Ԫ�س���
	bool insert_i_element(int i, int ele);   //���±�i������Ԫ��
	bool delete_i_element(int i,int &ele);   //ɾ���±�i��Ԫ��
	bool get_i_element(int i,int &ele);      //��ȡ�±�i����Ԫ��
	int locat_element(int ele);    //��ȡԪ�����ڵ��±�
	bool get_pre_element(int& pre_ele,int ele);     //��ȡԪ�ص�ǰһ��Ԫ��
	bool get_next_element(int& next_ele,int ele);   //��ȡԪ�صĺ�һ��Ԫ��
	bool traverse();      //����
private:
	int *p;      //����ָ��
	int i_len;   //����
	int i_cap;   //����
};

#endif