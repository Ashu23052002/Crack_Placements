#include <bits/stdc++.h>
using namespace std;

bool doesAliceWin(string s) {
        
           int v=0;
           for(auto it:s){
                if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u')v++;
           }
           if(v==0)return false;
           return true;
    }