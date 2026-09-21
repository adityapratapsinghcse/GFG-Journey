class Solution {
    void TOH(int n , int source , int dest , int helper , int &count){
        
        if(n == 1){
            count++;
            return;
        }
        
        TOH(n-1,source,helper,dest,count);
        count++;
        TOH(n-1,helper,dest,source,count);
    }
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        
        int count = 0;
        
        TOH(n,from,to,aux,count);
        return count;
    }
};