#include <string.h>

namespace CS2312 {
    template<typename T>
    class less{
        public:
        bool operator()(T a, T b){
            return a < b;
        }
    };
    
    template<>
    class less<const char *>{
        public:
        bool operator()(const char* a, const char* b){
            return strcmp(a, b) < 0;
        }
    };
    
    template<>
    class less<std::string>{
        public:
        bool operator()(std::string a, std::string b){
            return a < b;
        }
    };
    
}