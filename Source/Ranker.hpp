//
//  Ranker.hpp
//  FFTExample
//
//  Created by Garrett Gu on 11/25/23.
//

#ifndef Ranker_hpp
#define Ranker_hpp

#include <stdio.h>
#include <queue>

template<typename T, int W>
class Ranker {
    T fifo[W];
    int startIdx = 0;

public:
    void observe(T v) {
        fifo[startIdx] = v;
        startIdx++;
        if(startIdx == W)
            startIdx = 0;
    }
    
    // 0.99 = 99th percentile
    T percentile(double p) {
        T sort[W];
        for(int i = 0; i < W; i++) {
            sort[i] = fifo[(startIdx + i) % W];
        }
        
        std::sort(sort, sort + W);
        
        return sort[(int)(p * W)];
    }
};

#endif /* Ranker_hpp */
