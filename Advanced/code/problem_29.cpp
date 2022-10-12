/*Integer to English Words*/
//Solved by aryangupta02092002

#include <iostream>
using namespace std;
string ans = "";
    
string caviats(int num){
    string returnString;
    switch(num){
        case 0: returnString = ""; break;
        case 1: returnString = "One"; break;
        case 2: returnString = "Two"; break;
        case 3: returnString = "Three"; break;
        case 4: returnString = "Four"; break;
        case 5: returnString = "Five"; break;
        case 6: returnString = "Six"; break;
        case 7: returnString = "Seven"; break;
        case 8: returnString = "Eight";break;
        case 9: returnString = "Nine";break;
        case 10: returnString = "Ten"; break;
        case 11: returnString = "Eleven"; break;
        case 12: returnString = "Twelve"; break;
        case 13: returnString = "Thirteen"; break;
        case 14: returnString = "Fourteen"; break;
        case 15: returnString = "Fifteen"; break;
        case 16: returnString = "Sixteen"; break;
        case 17: returnString = "Seventeen"; break;
        case 18: returnString = "Eighteen"; break;
        case 19: returnString = "Nineteen"; break;
        case 20: returnString = "Twenty"; break;
        case 30: returnString = "Thirty"; break;
        case 40: returnString = "Forty"; break;
        case 50: returnString = "Fifty"; break;
        case 60: returnString = "Sixty"; break;
        case 70: returnString = "Seventy"; break;
        case 80: returnString = "Eighty"; break;
        case 90: returnString = "Ninety"; break;
    }
    return returnString;
}
    
void solve(int num){
    if(num <= 20){
        ans = ans + caviats(num);
        return;
    }
    else if(num > 20 && num < 100){
        ans = ans + caviats(num - num % 10);
        if(num % 10 != 0){
            ans = ans + " " + caviats(num % 10);    
        }
    }
    else if(num >= 100 && num <= 999){
        ans = ans + caviats(num/100) + " Hundred";
        if(num % 100 != 0){
            ans = ans + " ";
            solve(num % 100);   
        }            
    }
    else if(num >= 1000 && num <= 999999){
        solve(num / 1000);
        ans = ans + " Thousand";
        if(num % 1000 != 0){
            ans = ans + " ";
            solve(num % 1000);
        }            
    }
    if(num >= 1000000 && num <= 999999999){
        solve(num / 1000000);
        ans = ans + " Million";
        if(num % 1000000 != 0){
            ans = ans + " ";
            solve(num % 1000000);
        }            
    }
    if(num >= 1000000000 && num <= 9999999999){
        solve(num / 1000000000);
        ans = ans + " Billion";
        if(num % 1000000000 != 0){
            ans = ans + " ";
            solve(num % 1000000000);
        }            
    }
}
    
string numberToWords(int num) {
    if(num == 0){
        return "Zero";
    }
    solve(num);
    return ans;
}
int main()
{
    int num;
    cin>>num;

    string res = numberToWords(num);
    cout<<res;
    return 0;
}
