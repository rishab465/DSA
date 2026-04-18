class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        
        int five = 0;
        int ten = 0;
        int twenty = 0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }else if(bills[i]==10){
                ten++;
                if(five>0){
                    five--;
                }else{
                    return false;
                }
            }else {
                if(five>0 && ten>0 ){
                    five-=1;
                    ten-=1;
                }else if( five>2 ){
                    

                    five-=3;
                }else{
                    return false;
                }
            }
        }
        return true;

    }
};