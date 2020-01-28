#include"list.h"
#include "iostream"
using namespace std;
const int N = 6;
int main()
{
	List my_lis(N);
	my_lis.insert_i_element(0,4);     //下标i处插入元素测试
	my_lis.insert_i_element(1, 5);
	my_lis.insert_i_element(1, 6);
	my_lis.insert_i_element(3, 7);
	my_lis.insert_i_element(2, 8);
	my_lis.insert_i_element(0, 9);
	my_lis.insert_i_element(6, 10);    //容量已满，无法继续插入元素
	my_lis.traverse();    //遍历测试,正确序列应是9 4 6 8 5 7
	int temp;
	my_lis.get_i_element(3,temp);   //获取i下标的元素测试
	cout << temp << endl;
	cout<<my_lis.locat_element(5)<<endl;    //获取元素5所在的下标测试
	my_lis.get_pre_element(temp, 5);        //获取元素5的前一个元素测试
	cout << temp << endl;
	my_lis.get_next_element(temp, 5);       //获取元素5的后一个元素测试
	cout << temp << endl;
	my_lis.delete_i_element(5,temp);        //删除i下标元素
	my_lis.delete_i_element(2, temp);
	cout << my_lis.length() << endl;      //元素长度测试
	my_lis.clean();      //清除测试
	my_lis.traverse();    //遍历测试
	return 0;
}