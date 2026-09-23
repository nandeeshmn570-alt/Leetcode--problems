class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>res;
        
        //first window
        for(int i=0;i<k;i++){
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
         res.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++){
           
            
            
            while(dq.size()>0 && dq.front()<=i-k){   //remove element not the part of window
                dq.pop_front();
            }
            
            while(dq.size()>0 && nums[dq.back()]<=nums[i]){ //remove the smaller values
                dq.pop_back();
            }
            dq.push_back(i);
             res.push_back(nums[dq.front()]);
        }
        //res.push_back(nums[dq.front()]);
        return res;
    }
};