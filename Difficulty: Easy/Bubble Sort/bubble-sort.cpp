class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=n-1;i>=1;i--){
            int max_index=i;
            for(int j=i-1;j>=0;j--){
                if(arr[j]>arr[max_index]){
                    max_index=j;
                }
            }
            swap(arr[i],arr[max_index]);
        }
    }
};