#include <bits/stdc++.h> //万能头文件, 刷题时可以用, 大型项目千万不能用
using namespace std;

int mostvalue(vector<int>& a) { //鏃堕棿澶嶆潅搴︿负O(n), 绌洪棿澶嶆潅搴︿负O(n)
    int n = a.size();
    vector<int> dp(n);
    dp[0] = a[0];
    for(int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + a[i], a[i]);
    }
    int index = max_element(dp.begin(), dp.end()) - dp.begin();
    return dp[index];
}

int mostvalue2(vector<int>& a) {  //鏃堕棿澶嶆潅搴︿负O(n), 绌洪棿澶嶆潅搴︿负O(1)
    int n = a.size();
    int dp = a[0];
    int res = INT_MIN;
    for(int i = 1; i < n; i++) {
        dp = max(dp + a[i], a[i]);  //浣跨敤婊氬姩鏁扮粍鎬濇兂鏉ヤ紭鍖栫┖闂�
        res = max(res, dp); //杩唬寮忔洿鏂版眰寰楁渶澶у��
    }
    return res;
}

int main() {
    int N;
    scanf("%d", &N);
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        scanf("%d", &a[i]);
    }
    //int res = mostvalue(a); //涓嶄紭鍖栫┖闂�
    int res = mostvalue2(a); //浼樺寲绌洪棿
    cout << res;
    
}



 
