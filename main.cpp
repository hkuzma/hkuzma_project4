#include "bubbleSort.h"
#include "heapSort.h"
#include "Oscar.h"
#include "selectionSort.h"
#include "mergeSort.h"
#include "insertionSort.h"
#include "TwoSort.h"
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;
using std::vector;


int main() {

    //initialize reads/writes
    int reads = 0;
    int writes = 0;

    //initialize temporary vector of oscars
    vector<Oscar> hold;

    //enter all 10,000 oscars into temporary vector
    getDataFromFile("../oscar_data.csv", hold);

    //initialize vector of oscars to hold 1000 oscars
    vector<Oscar> oscars;

    //add 1000 oscars
    for(int i = 0; i < 1000; i++){
        oscars.push_back(hold[i]);
    }
    //BUBBLE SORT: 1000
    //sort oscars and print reads and writes
    bubbleSort(oscars, reads, writes);
    cout <<"Bubble reads (1000 items): "<< reads << "\nBubble writes(1000 items): " << writes;

    //HEAP SORT: 1000
    //reset reads and writes before sorting with next method
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (1000 items): "<< reads << "\nHeap writes (1000 items): " << writes;

    //SELECTION SORT: 1000
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(1000 items): " << reads <<"\nSelection writes(1000 items): " <<writes;

    //MERGE SORT: 1000
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(1000 items): " << reads <<"\nMerge writes(1000 items): " <<writes;

    //TWO SORT: 1000
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(1000 items): " << reads <<"\nTwo Sort writes(1000 items): " <<writes;


    //900 ITEMS
    //resize oscars to 900 elements
    oscars.resize(900);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (900 items): "<< reads << "\nBubble writes(900 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (900 items): "<< reads << "\nHeap writes (900 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(900 items): " << reads <<"\nSelection writes(900 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(900 items): " << reads <<"\nMerge writes(900 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(900 items): " << reads <<"\nTwo Sort writes(900 items): " <<writes;

    //800 ITEMS
    oscars.resize(800);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (800 items): "<< reads << "\nBubble writes(800 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (800 items): "<< reads << "\nHeap writes (800 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(800 items): " << reads <<"\nSelection writes(800 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(800 items): " << reads <<"\nMerge writes(800 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(800 items): " << reads <<"\nTwo Sort writes(800 items): " <<writes;

    //700 ITEMS
    oscars.resize(700);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (700 items): "<< reads << "\nBubble writes(700 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (700 items): "<< reads << "\nHeap writes (700 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(700 items): " << reads <<"\nSelection writes(700 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(700 items): " << reads <<"\nMerge writes(700 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(700 items): " << reads <<"\nTwo Sort writes(700 items): " <<writes;

    //600 ITEMS
    oscars.resize(600);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (600 items): "<< reads << "\nBubble writes(600 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (600 items): "<< reads << "\nHeap writes (600 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(600 items): " << reads <<"\nSelection writes(600 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(600 items): " << reads <<"\nMerge writes(600 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(600 items): " << reads <<"\nTwo Sort writes(600 items): " <<writes;

    //500 ITEMS
    oscars.resize(500);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (500 items): "<< reads << "\nBubble writes(500 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (500 items): "<< reads << "\nHeap writes (500 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(500 items): " << reads <<"\nSelection writes(500 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(500 items): " << reads <<"\nMerge writes(500 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(500 items): " << reads <<"\nTwo Sort writes(500 items): " <<writes;

    //400 ITEMS
    oscars.resize(400);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (400 items): "<< reads << "\nBubble writes(400 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (400 items): "<< reads << "\nHeap writes (400 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(400 items): " << reads <<"\nSelection writes(400 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(400 items): " << reads <<"\nMerge writes(400 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(400 items): " << reads <<"\nTwo Sort writes(400 items): " <<writes;

    //300 ITEMS
    oscars.resize(300);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (300 items): "<< reads << "\nBubble writes(300 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (300 items): "<< reads << "\nHeap writes (300 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(300 items): " << reads <<"\nSelection writes(300 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(300 items): " << reads <<"\nMerge writes(300 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(300 items): " << reads <<"\nTwo Sort writes(300 items): " <<writes;

    //200 ITEMS
    oscars.resize(200);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (200 items): "<< reads << "\nBubble writes(200 items): " << writes;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (200 items): "<< reads << "\nHeap writes (200 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(200 items): " << reads <<"\nSelection writes(200 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(200 items): " << reads <<"\nMerge writes(200 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(200 items): " << reads <<"\nTwo Sort writes(200 items): " <<writes;

    //100 ITEMS
    oscars.resize(100);
    //BUBBLE SORT
    reads = 0;
    writes = 0;
    bubbleSort(oscars, reads, writes);
    cout <<"\n\nBubble reads (100 items): "<< reads << "\nBubble writes(100 items): " << writes ;
    //HEAP
    reads = 0;
    writes = 0;
    heapSort(oscars, reads, writes);
    cout << "\n\nHeap reads (100 items): "<< reads << "\nHeap writes (100 items): " << writes;
    //SELECTION SORT
    reads = 0;
    writes = 0;
    selectionSort(oscars, reads, writes);
    cout << "\n\nSelection reads(100 items): " << reads <<"\nSelection writes(100 items): " <<writes;
    //MERGE SORT
    reads = 0;
    writes = 0;
    mergeSort(oscars, reads, writes);
    cout << "\n\nMerge reads(100 items): " << reads <<"\nMerge writes(100 items): " <<writes;
    //TWO SORT
    reads = 0;
    writes = 0;
    twoSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(100 items): " << reads <<"\nTwo Sort writes(100 items): " <<writes;
    reads = 0;
    writes = 0;
    insertionSort(oscars, reads, writes);
    cout << "\n\nTwo Sort reads(100 items): " << reads <<"\nTwo Sort writes(100 items): " <<writes;

    return 0;

}
