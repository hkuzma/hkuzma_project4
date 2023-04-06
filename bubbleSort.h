#ifndef SORTING_BUBBLESORT_H
#define SORTING_BUBBLESORT_H

#include "printVec.h"

template<typename Comparable>
void bubbleSort(vector<Comparable> vec, int& reads, int& writes) {
    int numPasses = 0, i;
    Comparable temp;
    bool haveSwapped = true;
    while (haveSwapped) {
        haveSwapped = false;
        for (i = 0; i+1 < vec.size()-numPasses; ++i) {
            // Compare items at indices i and i+1 and swap if necessary
            // 2 reads
            if (vec[i] > vec[i+1]) {

                //1 read; 1 write
                temp = vec[i];
                reads +=1;
                writes+=1;

                //1 read; 1 write
                vec[i] = vec[i+1];
                reads+=1;
                writes+=1;


                vec[i+1] = temp;


                // Update haveSwapped
                haveSwapped = true;
            }
            reads +=2;
        }
        // Update numPasses
        ++numPasses;
        //printVec(vec);

    }
}

#endif
