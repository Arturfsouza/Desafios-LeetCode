#include <iostream>
#include <string>

class Solution{
    public:
        std::string ProcessString(std::string s){
            std::string resultado;
            for (char c :s){
                if(std::isalnum(c)){
                    resultado+=std::tolower(c);
                }
            }
            return resultado;
        }

        bool isPalindrome(std::string s){
            std::string auxiliar = ProcessString(s);
            std::string inverso;
            for(auto it = auxiliar.rbegin(); it<auxiliar.rend();it++){
                inverso += *it;
            }
            if(inverso == auxiliar){
                return 1;
            }
            else{
                return 0;
            }
        }
};


int main(){
    std::string teste =  "A man, a plan, a canal: Panama";
    std::string teste2 = "race a car";
    std::string teste3 = " ";
    Solution solucao;
    std::cout<<solucao.isPalindrome(teste)<<std::endl;
    std::cout<<solucao.isPalindrome(teste2)<<std::endl;
    std::cout<<solucao.isPalindrome(teste3)<<std::endl;
    return 0;
}