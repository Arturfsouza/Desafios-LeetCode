#include <iostream>
#include <vector>

class Solution{
    public:
        void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n){
            int j = 0;
            for(int i = m; i<m+n;i++){ //loop para adicionar todos os valores no nums1
                nums1[i] = nums2[j];
                j++;
            }

            for(int i =1; i<m+n;i++){
                int key=nums1[i];
                int j = i-1;
                while(j>=0 && nums1[j]>key){
                    nums1[j+1] = nums1[j];
                    j--;
                }
                nums1[j+1] = key;
            }
        }
};



int main(){
    std::vector<int> nums1;
    std::vector<int> nums2;
    std::cout<<"Digite os numeros do primeiro vetor, (999 para parar): "<<std::endl;
    int i =0;
    int m=0;
    while (true){
        std::cin>> i;
        if (i==999){
            break;
        }
        nums1.push_back(i);
        m++;
    }
    std::cout<<"Digite os valores do segundo vetor, (999 para parar): "<<std::endl;
    int j = 0;
    int n=0;
    while(true){
        std::cin>> j;
        if(j==999){
            break;
        }
        nums2.push_back(j);
        n++;
    }
    nums1.resize(nums1.size()+n);
    Solution solucao;
    solucao.merge(nums1,m,nums2,n);
    std::cout<<"A juncao ordenada dos dois vetores eh: ";
    for(int i = 0; i <(m+n);i++){
        std::cout<<nums1[i]<<" ";
    }
    std::cout<<std::endl;
}