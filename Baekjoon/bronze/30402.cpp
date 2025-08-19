// 감마선을 맞은 컴퓨터
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	char pixel;
	string result;
	for (int i=0; i<15; i++) {
		for (int j=0; j<15; j++) {
			cin >> pixel;
			if (pixel == 'w') result = "chunbae";
			else if (pixel == 'b') result = "nabi";
			else if (pixel == 'g') result = "yeongcheol";
		}
	}
	cout << result;
	return (0);
}