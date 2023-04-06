#ifndef SORTING_SELECTIONSORT_H
#define SORTING_SELECTIONSORT_H

#include "printVec.h"

template<typename Comparable>
void selectionSort(vector<Comparable> vec, int& reads, int& writes) {
    int swapIndex, i, minIndex;
    Comparable temp;
    for (swapIndex = 0; swapIndex < vec.size()-1; ++swapIndex) {
        // Loop through vector starting at swapIndex and keep track of min
        minIndex = swapIndex;
        for (i = swapIndex+1; i < vec.size(); ++i) {
            //2 reads
            if (vec[i] < vec[minIndex]) {
                // We have a new minimum
                minIndex = i;
            }
            reads+=2;
        }
        // Swap min value into swapIndex spot in vector
        //1 read, 1 write
        temp = vec[swapIndex];
        reads+=1;
        writes+=1;

        //1 read; 1 write
        vec[swapIndex] = vec[minIndex];
        reads+=1;
        writes+=1;

        vec[minIndex] = temp;
        //printVec(vec);

    }
}

#endif
