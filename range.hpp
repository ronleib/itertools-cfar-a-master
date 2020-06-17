#pragma once

namespace itertools{
    class range{
    private:
        int start;
        int last;

    public:
            range(int a, int b): start(a),last(b){}
        int* begin(){
            return nullptr;
        }
        int* end(){
            return nullptr;
        }
    };
}
