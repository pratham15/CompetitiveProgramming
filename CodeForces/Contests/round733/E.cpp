#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T; string s;
    cin >> T;
    while(T--) {
        cin >> s;
        int N = s.size();
        vector<int> freq(26, 0);
        for(auto x : s) freq[x - 'a']++;
        bool workDone = false, one = false, smol = false;
        int oneIndex = -1, totalChars = 0, smolIndex = -1;
        for(int i = 0; i < 26; ++i){ 
            if(freq[i] == s.size()){ cout << s << '\n'; workDone = true; break; } 
            if(freq[i] == 1) { oneIndex = i; one = true; break;}
            if(freq[i] > 0) totalChars++;
            if(freq[i] > 0 && smol == false) {smolIndex = i; smol = true;}
        }
        // All chars are same "aaaaaa"
        if(workDone) continue;

        // there is a unique char with freq of 1 aaabbaaaac -> caaaaaabb
        if(one) {
            cout << char(oneIndex + 'a');
            freq[oneIndex] = 0;
            for(int i = 0; i < 26; ++i) 
                for(int j = 0; j < freq[i]; ++j) cout << char(i + 'a');
            cout << '\n';
            continue;
        }
        // If we reach here we can conclude two things 
        // 1. All chars have freq >= 2
        // 2. Variety of chars >= 2
        
        // In order to maintain a lexicographically smallest string we need to consider the smallest character.
        // Two things could happen when we repeat smallest char twice
        //  1. aababababacacacadddddeeee
        //  2. aababababaa 
        // We conclude the 'a' cannot be in the string more than s.size() / 2 + 1 times
        // in case 'a' freq is more than the limit two cases occur 
        // 1. There are only 2 chars abbbbaaaaaaaa
        // 2. More than two chars abaaaaaaaaacbbbbbbccccccc
        // Let's code
        if(freq[smolIndex] <= (N/2 + 1)) {
            int re = 2;
            while(re--) cout << char(smolIndex + 'a');
            int smolFreq = freq[smolIndex] - 2;
            freq[smolIndex] = 0;
            while(smolFreq) {
                for(int i = 0; i < 26; ++i) {
                    if(freq[i] > 0) {
                        cout << char(i + 'a');
                        freq[i]--;
                        break;
                    }
                }
                cout << char(smolIndex + 'a');
                smolFreq--;
            }
            for(int i = 0; i < 26; ++i) 
                while(freq[i]--) cout << char(i + 'a');
        }
        else {
            if(totalChars > 2) {
                int smolFreq = freq[smolIndex] - 1;
                cout << char(smolIndex + 'a');
                freq[smolIndex] = 0;
                int l = -1;
                for(int i = 0;i  < 26; ++i) {
                    if(freq[i] > 0) {
                        freq[i]--;
                        l = i;
                        cout << char( i + 'a');
                        break;
                    }
                }
                while(smolFreq--) cout << char(smolIndex + 'a');
                for(int i = l+1; i < 26; ++i) {
                    if(freq[i] > 0){
                        freq[i]--;
                        cout << char(i+'a');
                        break;
                    }
                }
                for(int i = 0; i < 26; ++i) 
                    while(freq[i]--) cout << char(i + 'a');
            }
            else {
                int smolFreq = freq[smolIndex] - 1;
                cout << char(smolIndex + 'a');
                for(int i = smolIndex + 1; i < 26; ++i) 
                    while(freq[i]--) cout << char(i + 'a');
                while(smolFreq--) cout << char(smolIndex + 'a');
            }
        }
        cout << "\n";
    }
}

