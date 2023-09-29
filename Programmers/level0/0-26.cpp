// 최빈값 구하기
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer, max = 0, freq;
    map<int, int> array_map;
    bool sev = false;

    for (int i = 0; i < array.size(); i++)
    {
        if (array_map.find(array[i]) == array_map.end())
            array_map.insert(make_pair(array[i], 1));
        else
            array_map[array[i]]++;
    }
    for (auto m : array_map)
    {
        if (max < m.second)
        {
            max = m.second;
            freq = m.first;
            sev = false;
        }
        else if (max == m.second)
            sev = true;
    }
    if (sev == true)
        answer = -1;
    else
        answer = freq;
    return answer;
}

int main()
{
    vector<int> array = {1};
    int result = solution(array);

    cout << result;
    return (0);
}