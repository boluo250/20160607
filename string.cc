 ///
 /// @file    string.cc
 /// @author  boluo(169180920@qq.com)
 /// @date    2016-06-07 16:25:27
 ///
 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	int *p;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	string s1 = "hello";
	string s2 = ",world";
	string s3 = s1 + s2;
	cout << "sizeof(s3)=" << sizeof(s3) << endl;
	cout << "strlen = " << s3.size() << endl;
	string s;
//	while(getline(cin,s))
//		cout << s << endl;
//	if(!s3.empty())
//		cout << s3[0]<< endl;
//	for(int index = 0;index != s3.size() && !isspace(s3[index]);++index)
//		s3[index] = toupper(s3[index]);
//	cout << s3 << endl;
	const string hexdigits = "0123456789ABCDEF";
	string result;
	string::size_type n;
/*	while(cin >> n)
		if(n < hexdigits.size())
			result += hexdigits[n];
	cout <<"your hex number is: " << result << endl;
*/
	string s4 = "hello,world";
	string s5 = s4.substr(0,5);
	cout << "s5 = " << s5 << endl;

	string s6 = s4.substr(s4.find("world"),5);
	cout << "s6 = " << s6 << endl;
	for(string::iterator it = s4.begin(); it != s4.end(); ++it)
		cout << *it << endl;
	return 0;

}
