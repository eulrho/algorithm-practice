// 신고 결과 받기
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int find_id_idx(vector<string> v, string id){
    for(int i=0; i<v.size(); i++){
        if (id==v[i]) return i;
    }
    return -1;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size());
    vector<vector<string>> report_result(id_list.size());
    string reporting_id, id;
    int idx;
    for(auto r : report){
        stringstream ss(r);
        ss >> reporting_id >> id;
        idx = find_id_idx(id_list, id);
        if(find_id_idx(report_result[idx], reporting_id)==-1)
            report_result[idx].push_back(reporting_id);
    }
    for(auto rr : report_result){
        if(rr.size()>=k) {
            for(auto r_id : rr) {
                answer[find_id_idx(id_list, r_id)]++;
            }
        }
    }
    return answer;
}

int main(){
    vector<string> id_list = {"con", "ryan"};
    vector<string> report = {"ryan con", "ryan con", "ryan con", "ryan con"};
    int k = 0;
    vector<int> result = solution(id_list, report, k);
    for(auto r:result) cout << r << " ";
    return 0;
}
