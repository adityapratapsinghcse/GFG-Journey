class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int total = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            total+= arr[i];
        } 

        int left_sum = 0;
        int right_sum = 0;

        for(int i=0 ; i< n ; i++){
            right_sum = total - left_sum - arr[i];

            if(left_sum == right_sum){
                return i;
            }

            left_sum += arr[i];
        }
        return -1;
    }
};