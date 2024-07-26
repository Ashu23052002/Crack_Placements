/*

 int evaluatePostfix(string S)
    {
        // Your code here
        int n = S.size();
        stack<int>s;
        
        for(int i=0; i<n; i++){
           if(S[i] >= '0' && S[i] <= '9'){
               s.push(S[i] - '0');
           }
           
          else if(S[i] == '+' || S[i] == '-' || S[i] == '*' || S[i] == '/'){
             
               int top1 = s.top();
               s.pop();
               int top2 = s.top();
               s.pop();
               
               int result;
               
               if(S[i] == '+')
                result = top2+top1;
             else if(S[i] == '-')
                result = top2-top1;
               else if(S[i] == '*')
                result = top2*top1;
               else if(S[i] == '/')
                result = top2/top1;
                
            s.push(result);
           }
        }
        return s.top();
    }

*/