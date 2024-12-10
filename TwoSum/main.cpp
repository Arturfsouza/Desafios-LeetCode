#include <iostream>
#include <vector>

class Solution{
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target){
            int soma = 0;
            std::vector<int> resultado;
            for(int i = 0; i<nums.size();i++){
                soma = target - nums[i];
                for (int j=0; j<nums.size();j++){
                    if(nums[j] == soma && i!=j){
                        resultado.push_back(i);
                        resultado.push_back(j);
                        return resultado;
                    }
                }
            }
            return resultado;
        }
};

int main(){
    Solution solucao;
    std::vector<int> nums1 = {2,7,11,15};
    std::vector<int> nums2 = {3,2,4};
    std::vector<int> nums3 = {3,3};
    int target1 = 9;
    int target2 = 6;
    int target3 = 6;
    std::vector<int> resultado1 = solucao.twoSum(nums1,target1);
    std::vector<int> resultado2 = solucao.twoSum(nums2,target2);
    std::vector<int> resultado3 = solucao.twoSum(nums3,target3);
    for(int i=0; i<resultado1.size();i++){
        std::cout<<resultado1[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i=0; i<resultado2.size();i++){
        std::cout<<resultado2[i]<<" ";
    }
    std::cout<<std::endl;
    for(int i=0; i<resultado3.size();i++){
        std::cout<<resultado3[i]<<" ";
    }
    std::cout<<std::endl;
}