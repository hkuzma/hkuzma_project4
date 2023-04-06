#ifndef SORTING_HEAPSORT_H
#define SORTING_HEAPSORT_H

#include "printVec.h"
#include <vector>
using std::vector;

// Helper function for heapSort
inline int leftChild(int i) {
    return 2 * i + 1;
}

// Helper function for heapSort
// i is the index of the value being percolated down
// n is the number of items in the heap
template <typename Comparable>
void percolateDown(vector<Comparable> &items, int& i, unsigned long& n, int& child, Comparable& tmp, int& reads,int& writes) {
    //1 read; 1 write
    for(tmp = items[i]; leftChild(i) < n; i = child) {
        reads+=1;
        writes+=1;
        child = leftChild(i);

        // choose the child with the larger value
        //2 reads
        if (child != n - 1 && items[child] < items[child + 1]) {
            ++child;
        }
        reads+=2;

        // if the parent is less than the child, swap them
        //1 read
        if (tmp < items[child]) {

            //1 read; 1 write
            items[i] = items[child];
            reads+=1;
            writes+=1;
        } else {
            // parent is >= both children. nothing more to do.
            break;
        }
        reads+=1;
    }
    items[i] = tmp;
}

template <typename Comparable>
vector<Comparable> heapSort(vector<Comparable> items, int& reads, int& writes) {
    int i, child;
    Comparable temp, tmp;
    unsigned long j, n;
    // build the heap (with max value at root)
    for (i = items.size() / 2 - 1; i >= 0; --i) {
        n = items.size();
        percolateDown(items, i, n, child, tmp, reads, writes);
    }
    //printVec(items);
    // keep deleting the max
    for (j = items.size() - 1; j > 0; --j) {

        // swap the maximum out
        //1 read; 1 write
        temp = items[0];
        reads+=1;
        writes+=1;

        // 1 read; 1 write
        items[0] = items[j];
        reads+=1;
        writes+=1;

        items[j] = temp;

        // make it into a heap again
        i = 0;
        percolateDown(items, i, j, child, tmp, reads, writes);

        //printVec(items);

    }
    //printVec(items);
    return items;

}

#endif
