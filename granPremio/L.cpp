#include<vector> 
#include<bits/stdc++.h>
#include<unordered_set> 
#include<iostream> 
#define ll long long
using namespace std;
unordered_set<ll> facts(vector<ll>& lprime,ll n,ll MAXN){
    if(n == 1) return {}; 
    unordered_set<ll> facts; 
    while(n >= MAXN){
        for(int i = 2 ; i <= sqrt(n);i++){
            if(n % i == 0){
                facts.insert(i); 
                n = n/i; 
            }
        }
    } 
    while(n != lprime[n]){
        facts.insert(lprime[n]); 
        n = n/lprime[n]; 
    }
    facts.insert(n); 
    return facts; 
}
void sol(ll a, ll b){
    ll MAXN = 1e5; 
    vector<ll> lprime(MAXN);
    lprime[1] = 1;  
    //el mismo 
    for(int i= 2  ;i  < MAXN ;i++){
        lprime[i] = i; 
    }
    for(int i = 2 ; i*i < MAXN;i++){
        if(lprime[i] == i){
            for(int j = i*i ; j < MAXN ;j+=i){
                if(lprime[j]==j)
                    lprime[j] = i; 
            }
        }
    }
    //factorización 
   auto f1 = facts(lprime,a,MAXN);
    auto f2 = facts(lprime,b,MAXN); 
    for(int i : f2){
        f1.insert(i); 
    } 
    cout << f1.size() << endl; 
} 
int main(){
    int cases; 
    cin >> cases;
    for(int i =  0; i < cases ;i++){
        ll a; 
        ll b; 
        cin >> a >> b;
        sol(a,b);  
    }
    return 0; 
}