#include <vector>
#include <iostream>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        for (int i=0; i<nums.size();i++){
            if (nums[i] == val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        int k = nums.size();
        return k;
    }
};

int main(){
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution solucao;
    std::cout<<solucao.removeElement(nums,val)<<std::endl;
    for (int i = 0; i<nums.size(); i++){
        std::cout<<nums[i]<<" ";
    }
    std::cout<<std::endl;
}