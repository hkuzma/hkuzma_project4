//
// Created by henry on 4/5/2023.
//

#ifndef PROJECT4_TWOSORT_H
#define PROJECT4_TWOSORT_H
#include "Oscar.h"
#include "mergeSort.h"
#include "selectionSort.h"
void twoSort(vector<Oscar> vec, int& reads, int& writes){
    mergeSort(vec, reads, writes);
    int unsortedStartIndex, insertIndex;
    Oscar toBeInserted;
    for (unsortedStartIndex = 1; unsortedStartIndex < vec.size(); ++unsortedStartIndex) {
        //1 read
        toBeInserted = vec[unsortedStartIndex];
        reads +=1;
        writes +=1;
        // Loop to shift over the larger elements
        insertIndex = unsortedStartIndex - 1;
        //cout << "vec index:" << vec[insertIndex] << "\n";
        //cout << "to be inserted:" <<toBeInserted << "\n";
        //1 read
        while (insertIndex >= 0 && vec[insertIndex].getWinner() > toBeInserted.getWinner()) {
            //cout << "g";
            reads+=1;
            //1 read; 1 write
            vec[insertIndex + 1] = vec[insertIndex];
            reads +=1;
            writes +=1;
            --insertIndex;
        }
        // Put toBeInserted back into vec
        vec[insertIndex + 1] = toBeInserted;
        //printVec(vec);
    }

}

#endif //PROJECT4_TWOSORT_H
