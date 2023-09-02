#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
int LongSubstringWOrepeat(char *s){
    int n=strlen(s);
    int r=0,l=0;
    unordered_map<char,int>seen;
    int ans=0;
    if(n==0){
        return 0;
    }
    while(true){
        bool f1=false,f2=false;
        //acquire
        char ch=s[r];
        while(r<n)
        {
            f1=true;
            r++;
            seen[ch]++;
            if(seen[ch]>=2){
                break;
            }
            else{
                int length=r-l;
                ans=max(ans,length);
            }

        }
        while(l<r){
            f2=true;
            l++;
            char ch=s[l];
            seen[ch]--;
            if(seen[ch]==1){
                break;
            }
        }
        if(f1==false && f2==false){
            break;
        }
        
    }
    return ans;
}

int LongestSubstring(char s[]) {
    int n = strlen(s);
    int current_len = 1;// length of current substring with unique characters 
    int max_len = 1;// max length of substring with unique characters
    int visited[256];

    for (int i = 0; i < 256; i++) {
        visited[i] = -1;
    }

    visited[s[0]] = 0;

    for (int i = 1; i < n; i++) {
        int last_occ = visited[s[i]];

        if (last_occ == -1 || i - current_len > last_occ) {
            current_len += 1;
            max_len = max(current_len, max_len);
        } else {
            if (current_len > max_len) {
                max_len = current_len;
            }
            current_len = i - last_occ;
        }
        visited[s[i]] = i;
    }

    // if (current_len > max_len) {
    //     max_len = current_len;
    // }

    return max_len;
}

int main() {
    char s[] = "abcabcbb";
    cout << LongSubstringWOrepeat(s) << endl;  // Output: 3

    char s2[] = "pwwkew";
    cout << LongestSubstring(s2) << endl;  // Output: 3

    return 0;
}