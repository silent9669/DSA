#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int, string> map;

    map[12836] = "XiaoHa";
    map[15937] = "XiaoLuo";
    map[16750] = "XiaoSuan";
    map[13276] = "XiaoFa";
    map[10583] = "XiaoYa";
    
    string name = map[15937];

    cout << name << endl;

    map.erase(16750);

    for(auto kv : map){
        cout << kv.first << "->" << kv.second << endl;
    }

    for (auto iter = map.begin(); iter != map.end(); iter++) {
         cout << iter->first << "->" << iter->second << endl;
    }
}
