#pragma once

namespace itertools {
    class compress {
    private:
        int start;
        int last;

    public:
        template<class T, typename Function>
        compress(T, Function) {
        }
        int* begin(){
            return nullptr;
        }
        int* end(){
            return nullptr;
        }
    };
}