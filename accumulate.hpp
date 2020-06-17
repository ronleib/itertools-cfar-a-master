#pragma once

namespace itertools{
    class accumulate{

        int start;
        int end;

    public:
        template <typename T> accumulate(T): start(0), end(0){}
        int* begin(){
            return nullptr;
        }
        int* finish(){
            return nullptr;
        }
    };
}