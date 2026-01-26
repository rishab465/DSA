class Solution {
public:
    int countElements(vector<int>& arr) {
        // sort(nums.begin() , nums.end());

        int n = arr.size();
        
        int count = 0;
        for(int i=0;i<n;i++){
            bool inc = false;
            bool dec = false;
            for(int j=0;j<n;j++){
                if(arr[i] > arr[j]){
                    dec = true;
                }
                if(arr[i] < arr[j]){
                    inc = true;
                }
                
            }
            if(inc == true && dec == true){
                count += 1;
            }
            
        }
        return count;
    }
};