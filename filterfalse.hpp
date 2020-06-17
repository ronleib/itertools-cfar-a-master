#pragma once

namespace itertools{
    class filterfalse{

        int start;
        int end;

    public:
            template <typename T1, typename T2> filterfalse(T1,T2): start(0), end(0){}
        int* begin(){
            return nullptr;
        }
        int* finish(){
            return nullptr;
        }
    };
}