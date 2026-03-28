#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter a word or a string."<<endl;
    getline(cin,s);
    // Reverse
    string rev = s;
    reverse(rev.begin(), rev.end());
    // Vowel counter
    int vowels = 0;
    for (char c:s){
        c = tolower(c);
        if (c == 'a' || c=='e'|| c=='i'|| c=='o' || c=='u')
            vowels ++;
    }
    cout<<"Vowels: "<<vowels<<endl;
    
    if(s == rev){
        cout<<rev<<endl;
        cout<<"The string is Palindrome."<<endl;
    }
    else
    {
        cout<<"The string is not Palindrome.";
    };
    
    return 0;
}