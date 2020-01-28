#include "list.h"
List::List(int cap)
{
	i_cap = cap;
	i_len = 0;
	p = new int[i_cap];
}

List::~List()
{
	delete[] p;
	p = NULL;
	cout << "*******~List()"<<endl;
}

void List::clean()
{
	i_len = 0;
	cout << "*******clean()"<<endl;
}

bool List::empty()
{
	return i_len == 0 ? true : false;
}

bool List::full()
{
	return i_len == i_cap ? true : false;
}

int List::length()
{
	return i_len;
}

bool List::insert_i_element(int i,int ele)
{
	if (full()||i>i_len||i<0)   //顺序链表不能跳着插值，只能在已有元素或者已有元素前后插值，所以此处为i>i_len而不是i>i_cap
	{
		cout << "can't insert the element" << endl;
		return false;
	}
	cout << "insert element "<< endl;
	if (empty()||i==i_len)
	{
		p[i] = ele;
		i_len++;
		return true;
	}
	for (int j = i_len; j > i; j--)
		p[j] = p[j - 1];
	p[i] = ele;
	i_len++;
	return true;
}

bool List::delete_i_element(int i,int &ele)
{
	if (empty()||i>=i_len||i<0)
	{
		cout << "can't delete" << endl;
		return false;
	}
	cout << "delete element "<< endl;
	ele = p[i];
	if (i == i_len - 1)
	{
		i_len--;
		return true;
	}
	for (int j = i; j < i_len-1; j++)
		p[j] = p[j +1];
	i_len--;
	return true;
}

bool List::get_i_element(int i,int &ele)
{
	if (i<0||i>=i_len)
	{
		cout << "error,can't get the element" << endl;
		return false;
	}
	ele = p[i];
	return true;
}

int List::locat_element(int ele)
{
	for (int i = 0; i < i_len; i++)
		if (ele == p[i])
			return i;
	cout << "the list does not have this element" << endl;
	return -1;
}

bool List::get_pre_element(int& pre_ele,int ele) 
{
	for (int i = 1; i < i_len; i++)
		if (ele == p[i])
		{
			pre_ele = p[i - 1];
			return true;
		}
	cout << "pre_element is error" << endl;
	return false;
}

bool List::get_next_element(int& next_ele, int ele)
{
	for (int i = 0; i < i_len-1; i++)
		if (ele == p[i])
		{
			next_ele = p[i + 1];
			return true;
		}
	cout << "next_element is error" << endl;
	return false;
}

bool List::traverse()
{
	if (empty())
	{
		cout << "list is empty, can't be traversed" << endl;
		return false;
	}
	cout << "traverse the list" << endl;
	for (int i = 0; i < i_len; i++)
		cout << p[i] << " ";
	cout << endl;
	return true;
}