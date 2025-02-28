// Good times
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string time_format(int hour, int minute)
{
	string time, tmp;

	if (hour != 0) time = to_string(hour);
	tmp = to_string(minute);
	if (!time.empty() && tmp.size() == 1) tmp = "0" + tmp;
	time += tmp;
	return time;
}

void conv_victoria(int hour, int minute)
{
	hour -= 3;
	if (hour < 0) hour += 24;

	cout << time_format(hour, minute) << " in Victoria\n";
}

void conv_edmonton(int hour, int minute)
{
	hour -= 2;
	if (hour < 0) hour += 24;

	cout << time_format(hour, minute) << " in Edmonton\n";
}

void conv_winnipeg(int hour, int minute)
{
	hour -= 1;
	if (hour < 0) hour += 24;

	cout << time_format(hour, minute) << " in Winnipeg\n";
}

void conv_toronto(int hour, int minute)
{
	cout << time_format(hour, minute) << " in Toronto\n";
}

void conv_halifax(int hour, int minute)
{
	hour += 1;
	if (hour == 24) hour = 0;

	cout << time_format(hour, minute) << " in Halifax\n";
}

void conv_st_johns(int hour, int minute)
{
	minute += 30;
	if (minute >= 60) {
		minute -= 60;
		hour++;
	}
	hour += 1;
	if (hour >= 24) hour -= 24;

	cout << time_format(hour, minute) << " in St. John's\n";
}

int main()
{
	fast;
	string time; cin >> time;

	int size = (int)time.size();
	int hour, minute;
	if (size <= 2) {
		hour = 0;
		minute = stoi(time);
	}
	else {
		minute = stoi(time.substr(size - 2));
		hour = stoi(time.substr(0, size == 3 ? 1 : 2));
	}

	cout << time << " in Ottawa\n";
	conv_victoria(hour, minute);
	conv_edmonton(hour, minute);
	conv_winnipeg(hour, minute);
	conv_toronto(hour, minute);
	conv_halifax(hour, minute);
	conv_st_johns(hour, minute);
	return (0);
}