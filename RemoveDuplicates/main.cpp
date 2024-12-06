#include <iostream>
#include <vector>

class Solution{
    public:
        int removeDuplicates(std::vector<int>& nums){
            for (auto it = nums.begin(); it!=nums.end();it++){
                int cont = 0;
                for(auto it2 = nums.begin(); it2!=nums.end();it2++){
                    if(*it == *it2){
                        cont++; 
                        if(cont>1){ // tem que ser maior que um porque o primeiro caso que achar ele vai comparar com ele mesmo
                            nums.erase(it2);
                            it2--;   // para nao ter problemas com iterador pulando a verificacao de um numero depois de apaga-lo
                        }
                    }
                }
            }
            int k = nums.size();
            return k;
        }
};

int main(){
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    Solution solucao;
    std::cout<<solucao.removeDuplicates(nums)<<std::endl;
    for(auto it = nums.begin(); it!= nums.end(); it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}