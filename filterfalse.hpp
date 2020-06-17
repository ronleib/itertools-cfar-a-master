#pragma once

namespace itertools{
    class filterfalse{
    private:
        int start;
        int last;

    public:
            template <typename T1, typename T2> filterfalse(T1,T2): start(0), last(0){}
        int* begin(){
            return nullptr;
        }
        int* end(){
            return nullptr;
        }
    };
}