#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int tc=1; tc<=t; tc++) {
        int s, d, k;
        cin >> s >> d >> k;

        int total_buns = 2*s + 2*d;
        int total_patties = s + 2*d;
        int total_cheese = total_patties;

        (total_buns >= k+1 and total_cheese >= k and total_patties >= k) ? cout << "Case #" <<tc<<": YES\n": cout << "Case #" <<tc<<": NO\n";
    }
}
