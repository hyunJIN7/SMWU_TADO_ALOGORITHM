#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return (a+b < b+a) ? true : false; //오름차순 정렬
    
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> str_numbers;
    for(auto e:numbers){
        str_numbers.push_back(to_string(e));
    }
    sort(str_numbers.begin(),str_numbers.end() , compare);
    for(auto e : str_numbers) answer =e+answer;
    if(answer[0]=='0') return "0"; // input [0,0,0,0] 인 경우 -> "0" 출력해야함
    return answer;
}
