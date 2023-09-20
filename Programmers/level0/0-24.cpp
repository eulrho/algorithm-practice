// 배열 조각하기
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    int q_size = query.size();
    int a_size;
    for (int i = 0; i < q_size; i++)
    {
        if (i % 2 == 0)
        {
            while (query[i] + 1 != arr.size())
                arr.pop_back();
        }
        else
        {
            a_size = arr.size();
            while (a_size - query[i] != arr.size())
                arr.erase(arr.begin());
        }
    }
    answer = arr;
    return answer;
}

int main() {
    vector<int> arr = {4, 4, 4, 4, 4};
    vector<int> query = {4, 4};
    vector<int> result = solution(arr, query);

    for (auto r : result)
        cout << r;
    return (0);
}