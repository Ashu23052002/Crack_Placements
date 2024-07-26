/*

class Solution {
public:
    void mergeSort(vector<int>&nums, int l, int mid, int h) {

        vector<int>temp;
        int i = l;
        int j = mid+1;

        while(i<=mid && j<=h){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }

        
        while(j<=h){
            temp.push_back(nums[j]);
            j++;
        }
        
        for(int k=l;k<=h;k++){
            nums[k]=temp[k-l];
        }

    }
    void merge(vector<int>&nums, int l, int h) {

        if(l>=h)return;

        int mid = (l+h)/2;
        merge(nums,l,mid);
        merge(nums,mid+1,h);
        mergeSort(nums,l,mid,h);
    }
    vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size();
        merge(nums,0,n-1);

        return nums;
    }
};

*/