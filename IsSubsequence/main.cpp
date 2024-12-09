#include <iostream>
#include <string>

class Solution{
    public:
        bool isSubsequence(std::string s, std::string t){
            int regulador = 0;  // ira regular o iterador na string s para que a ordem da substring na string original seja comparada tmb
            int comparador = 0;
            for(auto it = s.begin(); it<s.end();it++){
                for(auto it2 = t.begin() + regulador; it2<t.end();it2++){ //somando o regulador ira garantir que a iteracao ira terminar de onde foi achado a ultima letra na string principal
                    regulador++;
                    if(*it==*it2){
                        comparador++;
                        break;
                    }
                }
            }
            if (comparador == s.size()){
                return 1;
            }
            else{
                return 0;
            }
        }
};

int main(){
    std::string s = "abc";
    std::string t = "ahbgdc";
    Solution solucao;
    std::cout<<solucao.isSubsequence(s,t)<<std::endl;
}