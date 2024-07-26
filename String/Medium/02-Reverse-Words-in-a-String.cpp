/*

string reverseWords(string s) {

        int n = s.size();
        stack<string> st;
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch==' ')
                continue;

            string word = "";
            while (i < n && s[i]!=' ') {
                word += s[i];
                i++;
            }
            st.push(word);
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top()+' ';
            st.pop();
        }
        ans.pop_back();

        return ans;
    }

    ===================================================================

    string reverseWords(string s) {

        int n = s.size();
        string ans = "";
        
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch==' ')
                continue;

            string word = "";
            while (i < n && s[i]!=' ') {
                word += s[i];
                i++;
            }
            ans = word+' '+ans;

        }
       
        ans.pop_back();

        return ans;
    }

*/