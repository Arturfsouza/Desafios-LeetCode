#include <vector>
#include <iostream>

class Solution{
    public:
        int removeDuplicates(std::vector<int>& nums){
            int cont = 0;
            for(auto i = nums.begin();i<nums.end();i++){
                cont = 0;
                for(auto j = nums.begin(); j<nums.end();j++){
                    if(*i==*j){
                        cont++;
                        if(cont>=3){
                            nums.erase(j);
                            j--;
                        }
                    }
                }
            }
            int k = nums.size();
            return k;
        }
};


int main(){
    Solution solucao;
    std::vector<int> nums = {1,1,1,2,2,3};
    std::cout<<solucao.removeDuplicates(nums)<<std::endl;
    for(int i = 0; i<nums.size();i++){
        std::cout<<nums[i]<<" ";
    }
    std::cout<<std::endl;


    std::vector<int> nums2 = {0,0,1,1,1,1,2,3,3};
    std::cout<<solucao.removeDuplicates(nums2)<<std::endl;
    for(int i =0; i<nums2.size();i++){
        std::cout<<nums2[i]<<" ";
    }
    std::cout<<std::endl;
}