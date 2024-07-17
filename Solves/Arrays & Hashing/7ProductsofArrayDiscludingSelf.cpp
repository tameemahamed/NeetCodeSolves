typedef long long int ll;                
typedef long double ld;                  
typedef unsigned long long int ull;      
typedef vector<int> vi;                  
typedef set<int> si;                     
typedef set<ll> sl;                      
typedef vector<ll> vl;                   
typedef vector<ld> vld;                 
typedef vector<char> vc;                 
typedef vector<double> vd;               
double pi=3.1415926535;                  
typedef vector<pair<ll,ll>> vpl;         
typedef vector<pair<double,double>> vpd; 
#define pb push_back                     
#define all(x) x.begin(), x.end()        
#define eps 1e-12                        
#define mp make_pair                     


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        ll mul=1,cnt=0;
        for(ll i=0;i<nums.size();i++){
            if(nums[i]==0){
                cnt++;
                continue;
            }
            mul*=nums[i];
        }
        vi ans;
        for(ll i=0;i<nums.size();i++){
            if(cnt>1) ans.pb(0);
            else if(cnt>0&&nums[i]!=0) ans.pb(0);
            else if(nums[i]==0) ans.pb(mul);
            else ans.pb(mul/nums[i]);
        }
        return ans;
    }
};
