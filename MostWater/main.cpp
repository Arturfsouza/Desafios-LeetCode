#include <iostream>
#include <vector>
#include <algorithm>

class Solution{
    public:
        int maxArea(std::vector<int>& height){
            int left = 0;
            int right = height.size() -1;
            int max = 0;
            int areaAtual = 0;
            while(right != left){
                areaAtual = std::min(height[right],height[left])*(right-left);
                if(areaAtual>max){
                    max = areaAtual;
                }
                if (height[right]>=height[left]){
                    left++;
                }
                else{
                    right--;
                }
            }
            return max;
        }
};

int main(){
    Solution solucao;
    std::vector<int> ex1 = {1,8,6,2,5,4,8,3,7};
    std::vector<int> ex2 = {1,1};
    std::cout<<solucao.maxArea(ex1)<<std::endl;
    std::cout<<solucao.maxArea(ex2)<<std::endl;
    return 0;
}