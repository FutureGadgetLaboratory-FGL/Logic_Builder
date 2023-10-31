#include <bits/stdc++.h>
using namespace std;
 
const int no_of_chars = 256;
 
string findSubString(string str, string pat)
{
    int len1 = str.length();
    int len2 = pat.length();
 

    if (len1 < len2) {
        cout << "No such window exists";
        return "";
    }
 
    int hash_pat[no_of_chars] = { 0 };
    int hash_str[no_of_chars] = { 0 };
 

    for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;

    int count = 0;
    for (int j = 0; j < len1; j++) {
       

        hash_str[str[j]]++;

        if (hash_str[str[j]] <= hash_pat[str[j]])
            count++;
 

        if (count == len2) {
           

            while (hash_str[str[start]]
                       > hash_pat[str[start]]
                   || hash_pat[str[start]] == 0) {
 
                if (hash_str[str[start]]
                    > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }

            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }
 

    if (start_index == -1) {
        cout << "No such window exists";
        return "";
    }
 

    return str.substr(start_index, min_len);
}

int main()
{
    string str = "this is a test string";
    string pat = "tist";
 
    cout << "Smallest window is : \n"
         << findSubString(str, pat);
    return 0;
}
