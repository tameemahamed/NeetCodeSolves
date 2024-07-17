class Solution {
public:

    string encode(vector<string>& strs) {
        string e;
        for(auto s : strs){
            for(int i=0;i<s.size();i++)
                e.push_back(s[i]);
            e.push_back(127);
        }
        return e;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string ss;
        int i=0;
        while(s[i]!='\0'){
            if(s[i]==127){
                v.push_back(ss);
                ss.clear();
            }
            else{
                ss.push_back(s[i]);
            }
            i++;
        }
        return v;
    }
};
