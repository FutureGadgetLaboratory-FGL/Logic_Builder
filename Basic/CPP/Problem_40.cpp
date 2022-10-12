#include<bits/stdc++.h>
using namespace std;

void generatePermuataions(string& s, int l, int h, set<string>& res){
  if(l == h){
      res.insert(s); 
      return; 
  }

  for(int i=l; i<=h; i++){
      swap(s[l], s[i]); 
      generatePermuataions(s, l+1, h, res); 
      swap(s[l], s[i]); 
}

vector<string>find_permutation(string s)
{
    // Code here there
    set<string> res; 
    vector<string> ans; 
    generatePermuataions(s, 0, s.size()-1, res); 

    for(string s : res){
        ans.push_back(s); 
    }

    return ans;

}

int main(){

  string s; 
  cin>>>s; 
  
  vector<string> ans = find_permutation(s); 
  
  for(string str : ans) cout << str << endl;
  
  return 0; 
}
