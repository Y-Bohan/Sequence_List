#ifndef LIST_H
#define LIST_H

#include "iostream"
using namespace std;
class List
{
public:
	List(int cap);    //构造函数，容量初始化
	~List();      //析构函数，对内存释放
	void clean();   //清空队列
	bool empty();   //判空
	bool full();    //判满
	int length();   //获取队列元素长度
	bool insert_i_element(int i, int ele);   //在下标i处插入元素
	bool delete_i_element(int i,int &ele);   //删除下标i处元素
	bool get_i_element(int i,int &ele);      //获取下标i处的元素
	int locat_element(int ele);    //获取元素所在的下标
	bool get_pre_element(int& pre_ele,int ele);     //获取元素的前一个元素
	bool get_next_element(int& next_ele,int ele);   //获取元素的后一个元素
	bool traverse();      //遍历
private:
	int *p;      //队列指针
	int i_len;   //长度
	int i_cap;   //容量
};

#endif