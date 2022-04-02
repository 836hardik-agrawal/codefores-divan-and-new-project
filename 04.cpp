#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define  iseven %2==0
void solve(){

ll t;
cin>>t;
while(t--){
ll n,timetaken=0;
cin>>n;
vector<ll>vec1(n),vec2(n);
ll b[n];
for(ll i=0;i<n;i++){
    cin>>vec1[i];
}
vec2=vec1;

map<ll,ll>mp;
for(ll i=0;i<n;i++){
    mp[vec1[i]]=i;
}

sort(vec1.begin(),vec1.end());
ll k=0,l=0;
for(ll i=0;i<n;i+=2){
    k++;
    b[mp[vec1[i]]]=k;
}
for(ll i=1;i<n;i+=2){
 l--;
 b[mp[vec1[i]]]=l;
}
for(ll i=0;i<n;i++){
    timetaken+=abs(2*b[i]*vec2[i]);
}
cout<<timetaken<<endl;
cout<<"0"<<" ";
for(ll i=0;i<n;i++){
    cout<<b[i]<<" ";
}
cout<<endl;


}






}



 int  main(){

solve();



}