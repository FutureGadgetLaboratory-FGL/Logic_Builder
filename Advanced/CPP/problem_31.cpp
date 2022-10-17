/*Check for Balanced Brackets in an expression using Stack*/
//Solved by Aryan Gupta

#include<bits/stdc++.h> 
using namespace std; 
  
bool balancedBrackets(string s) 
{ 
    stack<char> st; 
    char x; 
  
    for (int i=0; i<s.length(); i++){ 
        if (s[i]=='(' || s[i]=='[' || s[i]=='{'){ 
            st.push(s[i]); 
            continue; 
        } 
  
        if (st.empty()) 
           return false; 
  
        switch (s[i]) { 
            case ')': 
                x = st.top(); 
                st.pop(); 
                if (x=='{' || x=='[') 
                    return false; 
                break; 
  
            case '}': 
                x = st.top(); 
                st.pop(); 
                if (x=='(' || x=='[') 
                    return false; 
                break; 
      
            case ']': 
                x = st.top(); 
                st.pop(); 
                if (x =='(' || x == '{') 
                    return false; 
                break; 
        } 
    } 
  
    return (st.empty()); 
} 
  
int main() 
{ 
    string s = "{()}[]"; 
    
    if (balancedBrackets(s)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
} 
