// 럭비 클럽
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;

	string name, result, type[2] = {"Junior", "Senior"};
	int age, weight;

	while (true)
	{
		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0)
			break ;
		result += name;
		result += ' ';
		if (age > 17 || weight >= 80)
			result +=  type[1];
		else
			result += type[0];
		result += '\n';
	}
	cout << result;
	return (0);
}