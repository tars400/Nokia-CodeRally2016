#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

bool checkdigit(char c)
{
	return ('0' <= c && c <= '9') ? true : false;
}

bool checknumber(string s)
{
	if (s.length() == 0) {
		return false;
	} 
	return (s.length() <= 2 && checkdigit(s[0]) ) ? true : false;
}

int main()
{
	int n, q;
	int res = 0;  
	map <string, bool> boolmap;

	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		boolmap[s] = 1;
	}
	for (int i = 0; i < q; i++) {
		string s;
		cin >> s;

		if (checknumber(s)) {
			
			int number;
			if (s.length() == 2) number = 10*(s[0]-'0') + (s[1]-'0');
			else number = (s[0] - '0');
			if (number <= 20) {
				res++;
			}
		}
		else if (!boolmap[s]) {
			res++;
		}

	}
	printf("%d\n", res);
	return 0;
}
