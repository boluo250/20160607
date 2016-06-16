 ///
 /// @file    const.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-07 10:26:52
 ///
 
#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	const int *b = &a;
	a = 4;
	cout << "a=" << a << endl;
	cout << "*b=" << *b << endl;
	return 0;
}
