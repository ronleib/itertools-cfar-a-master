#pragma once

namespace itertools {
    class compress {
        int start;
        int end;

    public:
        template<class T, typename Function>
        compress(T, Function) {
        }
    }
}