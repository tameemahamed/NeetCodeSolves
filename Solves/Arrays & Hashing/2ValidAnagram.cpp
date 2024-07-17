#define pb push_back 
class Solution {
public:
    bool isAnagram(string s, string t) {
        vi a,b;
        for(int i=0;i<26;i++){
            a.pb(0);
            b.pb(0);
        }
        int i=0;
        while(s[i]!='\0'){
            char c=s[i];
            int x=c;
            x-=97;
            a[x]++;
            i++;
        }
        i=0;
        while(t[i]!='\0'){
            char c=t[i];
            int x=c;
            x-=97;
            b[x]++;
            i++;
        }
        for(i=0;i<26;i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;

    }
};
