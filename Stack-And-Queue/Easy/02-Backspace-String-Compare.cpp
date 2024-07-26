/*

bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                if(!st.empty()){

                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string s1;
        while(!st.empty()){
            s1.push_back(st.top());
            st.pop();
        }

        for(int i=0;i<t.size();i++){
            if(t[i]=='#'){
                if(!st.empty()){

                    st.pop();
                }
            }
            else{
                st.push(t[i]);
            }
        }
        string s2;
        while(!st.empty()){
            s2.push_back(st.top());
            st.pop();
        }

        if(s1==s2)return true;

        return false;

    }

    ==========================================================================


    bool backspaceCompare(string s, string t) {
        int m = s.length();
        int n = t.length();
        
        int i = m-1, j = n-1;
        int skip_s = 0;
        int skip_t = 0;
        
        while(i >= 0 || j >= 0) {
            
            while(i >= 0) {
                if(s[i] == '#') {
                    skip_s++;
                    i--;
                } else if(skip_s > 0) {
                    skip_s--;
                    i--;
                } else {
                    break;
                }
            }
            
            while(j >= 0) {
                if(t[j] == '#') {
                    skip_t++;
                    j--;
                } else if(skip_t > 0) {
                    skip_t--;
                    j--;
                } else {
                    break;
                }
            }
            
            char first  = i < 0 ? '$' : s[i];
            char second = j < 0 ? '$' : t[j];
            
            if(first != second)
                return false;
            
            i--;
            j--;
        }
        
        return true;
        
    }


*/