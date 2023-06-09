#ifndef SORTING_INSERTIONSORT_H
#define SORTING_INSERTIONSORT_H

#include "printVec.h"

template<typename Comparable>
void insertionSort(vector<Comparable> vec, int& reads, int& writes) {
    int unsortedStartIndex, insertIndex;
    Comparable toBeInserted;
    for (unsortedStartIndex = 1; unsortedStartIndex < vec.size(); ++unsortedStartIndex) {

        //1 read; 1 write
        toBeInserted = vec[unsortedStartIndex];
        reads +=1;
        writes +=1;
        // Loop to shift over the larger elements
        insertIndex = unsortedStartIndex - 1;

        //1 read
        while (insertIndex >= 0 && vec[insertIndex] > toBeInserted) {
            reads+=1;

            //1 read; 1 write
            vec[insertIndex + 1] = vec[insertIndex];
            --insertIndex;
            reads +=1;
            writes +=1;
        }
        // Put toBeInserted back into vec
        vec[insertIndex + 1] = toBeInserted;
        //printVec(vec);
    }
}

#endif
