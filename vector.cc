 ///
 /// @file    vector.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-07 20:41:26
 ///
#pragma GCC diagnostic error "-std=c++11" 
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	auto a = 1.5;
	vector<unsigned> scores(11,0);
	unsigned grade;
	string s("some string");
	if(s.begin() != s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;
	for(auto c: s)
		cout << c << cout << " ";
	return 0;
}
