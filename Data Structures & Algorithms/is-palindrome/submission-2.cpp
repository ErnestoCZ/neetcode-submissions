class Solution {
public:
    bool isPalindrome(string s) {
        
        string str1,str2;
        for(size_t index = 0; index < s.size(); index++){
            //std::cout << index << std::endl;
            if(std::isalpha(s[index])){
                if(std::isupper(s[index])){
                    str1.push_back(std::tolower(s[index]));
                }else{
                    str1.push_back(s[index]);
                }
            }else if(std::isdigit(s[index])){
                str1.push_back(s[index]);
            }
        }
        for(size_t index = s.length(); index > 0; --index){
            std::cout << index << std::endl;
            if(std::isalpha(s[index-1])){
                if(std::isupper(s[index-1])){
                    str2.push_back(std::tolower(s[index-1]));
                }else{
                    str2.push_back(s[index-1]);
                }
            }else if(std::isdigit(s[index-1])){
                str2.push_back(s[index-1]);
            }
        }
        
        //std::cout << str1 << " " << str2 << std::endl;
        return !str1.compare(str2);

    }
};
