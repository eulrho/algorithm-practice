// 공원 산책
#include <iostream>
#include <vector>

using namespace std;

int check_obstacle_n(vector<string> park, int h, int w, int decrease)
{
    int i;

    i = 0;
    if (h - decrease < 0)
        return (0);
    while (park[h - i][w] && i <= decrease)
    {
        if (park[h - i][w] == 'X')
            return (0);
        i++;
    }
    return (1);
}

int check_obstacle_s(vector<string> park, int h, int w, int h_max, int increase)
{
    int i;

    i = 0;
    if (h + increase >= h_max)
        return (0);
    while (park[h + i][w] && i <= increase)
    {
        if (park[h + i][w] == 'X')
            return (0);
        i++;
    }
    return (1);
}

int check_obstacle_w(vector<string> park, int h, int w, int decrease)
{
    int i;

    i = 0;
    if (w - decrease < 0)
        return (0);
    while (park[h][w - i] && i <= decrease)
    {
        if (park[h][w - i] == 'X')
            return (0);
        i++;
    }
    return (1);
}

int check_obstacle_e(vector<string> park, int h, int w, int w_max, int increase)
{
    int i;

    i = 0;
    if (w + increase >= w_max)
        return (0);
    while (park[h][w + i] && i <= increase)
    {
        if (park[h][w + i] == 'X')
            return (0);
        i++;
    }
    return (1);
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int w, h, w_max, h_max;

    w_max = park[0].size(), h_max = park.size();
    for (int i=0; i < h_max; i++)
    {
        for (int j=0; j < w_max; j++)
        {
            if (park[i][j] == 'S')
            {
                h = i;
                w = j;
            }
        }
    }
    for (int i=0; i<routes.size(); i++)
    {
        switch (routes[i][0]) {
            case 'E':
                if (check_obstacle_e(park, h, w, w_max, routes[i][2] - '0') == 1)
                    w += (routes[i][2] - '0');
                break ;
            case 'S':
                if (check_obstacle_s(park, h, w, h_max, routes[i][2] - '0') == 1)
                    h += (routes[i][2] - '0');
                break ;
            case 'W':
                if (check_obstacle_w(park, h, w, routes[i][2] - '0') == 1)
                    w -= (routes[i][2] - '0');
                break ;
            case 'N':
                if (check_obstacle_n(park, h, w, routes[i][2] - '0') == 1)
                    h -= (routes[i][2] - '0');
                break ;
        }
    }
    answer.push_back(h);
    answer.push_back(w);
    return answer;
}

int main() {
    vector<string> park = {"OSO","OOO","OXO","OOO"};
    vector<string> routes = {"E 2","S 3","W 1"};
    vector<int> result = solution(park, routes);

    for(auto r : result)
        cout << r;
    return (0);
}