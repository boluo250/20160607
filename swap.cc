 ///
 /// @file    swap.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-07 11:40:21
 ///
 
#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 4, b = 5;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap(a,b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
