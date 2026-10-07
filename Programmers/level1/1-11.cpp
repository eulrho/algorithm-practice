// 노란불 신호등
#include <string>
#include <vector>

using namespace std;

int simulation(vector<vector<int>>& signals) {
    int sig_cnt = (int)signals.size();
    int time = 2;
    int total[10] = {0};
    for (int i=0; i<sig_cnt; i++)
        total[i] = signals[i][0] + signals[i][1] + signals[i][2];
    while (1) {
        bool y_flag = true;
        bool e_flag = true;
        for (int i=0; i<sig_cnt; i++) {
            int tmp = time % total[i];
            if (!(tmp > signals[i][0] && tmp <= signals[i][0] + signals[i][1]))
                y_flag = false;
            if (tmp != 1) e_flag = false;
        }
        if (y_flag) return time;
        if (e_flag) return -1;
        time++;
    }
}

int solution(vector<vector<int>> signals) {
    int answer = simulation(signals);
    return answer;
}
