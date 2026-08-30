#include <cstring>
constexpr char LIMITER = '`';
class Solution {
public:

    string encode(vector<string>& strs) {
        string s;

        for(size_t element = 0; element < strs.size(); element++){
            string current_element = strs[element];
            s.append(current_element + LIMITER);
        }

        std::cout << s << std::endl;
        return s;
    }

    vector<string> decode(string s) {
        //std::cout << s << std::endl;

        vector<string> ans;
        string str;
        for(auto it = s.cbegin(), it_end = s.cend(); it!=it_end; it++){
            char current_char = static_cast<char>(*it);
            if(current_char != LIMITER){    
                str.push_back(current_char);
            }else if (current_char == LIMITER){
                ans.push_back(str);
                //std::cout << s << std::endl;
                str.clear();
            }
        }
        return ans;
    }
};
