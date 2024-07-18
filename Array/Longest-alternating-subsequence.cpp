/*
You are given an array arr. Your task is to find the longest length of a good sequence.
 A good sequence {x1, x2, .. xn} is an alternating sequence if its elements satisfy one of the following relations :

1.  x1 < x2 > x3 < x4 > x5. . . . . and so on
2.  x1 >x2 < x3 > x4 < x5. . . . . and so on


Input: arr= [1, 17, 5, 10, 13, 15, 10, 5, 16, 8]
Output: 7
*/

/*

int alternatingMaxLength(vector<int>& arr) {

        int n = arr.size();

        int maxlen = 0;

        int len1 = 1, len2 = 1;


        // small se chalu
        int ele = arr[0];
        bool big = true;
        for(int i=1;i<n;i++){
            if(big){
              if(arr[i] > ele){
                  len1++;
                  ele = arr[i];
                  big = false;
              }else{
                ele = min(ele,arr[i]);
              }
            }else{
              if(arr[i] < ele){
                  len1++;
                  ele = arr[i];
                  big = true;
              }else{
                  ele = max(ele,arr[i]);
              }
            }
        }

        // big se chalu
        ele = arr[0];
        bool small = true;
        for(int i=1;i<n;i++){
            if(small){
              if(arr[i] < ele){
                  len2++;
                  ele = arr[i];
                  small = false;
              }else{
                ele = max(ele,arr[i]);
              }
            }else{
              if(arr[i] > ele){
                  len2++;
                  ele = arr[i];
                  small = true;
              }else{
                  ele = min(ele,arr[i]);
              }
            }
        }

        return max(len1,len2);


    }

*/