// 24
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string timeToString(int time)
{
	if (time < 10) return "0" + to_string(time);
	else return to_string(time);
}

string findEndTime(string start)
{
	int hour = stoi(start.substr(0, 2)) + 24;
	return to_string(hour) + start.substr(2);
}

string findTimeDiff(int *start, int *end)
{
	int hour=0, minute=0, second=0;
	string res;

	second = end[2] - start[2];
	if (second < 0) {
		second += 60;
		minute--;
	}
	minute += end[1] - start[1];
	if (minute < 0) {
		minute += 60;
		hour--;
	}
	hour += end[0] - start[0];
	if (hour >= 24) hour -= 24;

	return timeToString(hour) + ":" + timeToString(minute) + ":" + timeToString(second);
}

int main()
{
	fast;
	string current, start;
	cin >> current >> start;

	int start_time[3], current_time[3];
	for (int i=0; i<=6; i+=3) {
		start_time[i / 3] = stoi(start.substr(i,2));
		current_time[i / 3] = stoi(current.substr(i,2));
	}
	if (start_time[0] < current_time[0]) start_time[0] += 24;

	string end = findEndTime(start);
	int end_time[3];
	for (int i=0; i<=6; i+=3)
		end_time[i / 3] = stoi(end.substr(i,2));

	cout << findTimeDiff(current_time, end_time);
	return (0);
}
// 37:52:30