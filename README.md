# CS 124 Project 4

For this project, you will sort the 1000 objects from your data set. You will modify each sorting algorithm to collect data. You will analyze the results from the different sorting algorithms.

## Implement
You should have your 1000+ objects stored in a vector, initially unsorted.
Use these five sorting algorithms:
1. Bubble Sort
2. Choose either Selection Sort or Insertion Sort
3. Choose either Merge Sort or Quick Sort
4. Heap Sort
5. Two-sort: sort by any algorithm (except Bubble Sort), then sort on a different field using a stable sorting algorithm (again, except Bubble Sort).
   * Hint for implementing two-sort: for the second stable algorithm, make a copy of the stable sorting function and take out the template part. That way you will be able to call a getter on your custom-type objects to compare a second field of your class.

Modify each sorting algorithm to record the number of reads. This is the number of times you use a Comparable object. This could be using it to store somewhere else, using it to compare to another object, etc. Temporary Comparable objects count towards the reads. 
* Example code:
  ```cpp
  if (vec[i] > vec[i+1]) // This counts as two reads, which should
      // be counted whether the if statements evaluates to true or false.
  Comparable temp = vec[i]; // This is one read.
  smaller.push_back(vec[i]); // This is one read.
  ```






Modify each sorting algorithm to record the number of writes. This is the number of times you assign into a Comparable object. This could be to store a temporary Comparable, to overwrite an item in a Comparable vector, to push_back onto a Comparable vector, etc.
* Example code:
  ```cpp
  Comparable temp = vec[i]; // This is one write (and one read).
  smaller.push_back(vec[i]); // This is one write (and one read).
  vec[i] = vec[i+1]; // This is one write (and one read).
  ```
Use a loop to record the number of reads and writes needed to sort a vector of size 100, 200, 300, 400, 500, 600, 700, 800, 900, and 1000.
* Hint: start with 1000 and then use the resize method to make it smaller. 

Each of the five sorting algorithms should be given identical unsorted vectors to begin with. 
* If your data is naturally sorted by the attribute you use to overload your operators, change how you overload your operators.

## Extra Credit
To earn up to 10 extra credit points (at the grader’s discretion), you can get more thorough results. This can include, but is not limited to:
* Setting timers to record how long it takes you to sort the objects with each algorithm.
* Performing the same experiment, except double the size of the data set each time (instead of having it grow linearly).
* Using more sorting algorithms.

Note that if you add this logic to your code but do not analyze it in your report, it will not count towards extra credit. If you complete extra credit, analyze it in this section of your README.md file.

## Report
Include the following in this section of your README.md file:
* Information about your data set (you will be assigned a different grader for this project).
* Analyze the data. Graph the number of reads and writes for each sorting algorithm and look at how the number of reads and writes grows when the size of the data set grows. Compare and contrast the different sorting algorithms and draw conclusions about which sorting algorithms are more efficient. Discuss complexities and their effects.
* Answers to the following questions: 
  * If you need to sort a contacts list on a mobile app, which sorting algorithm(s) would you use and why? 
  * What about if you need to sort a database of 20 million client files that are stored in a datacenter in the cloud?

**Note: Any code that was not authored by yourself or the instructor must be cited in your report. This includes the use of concepts not taught in lecture.**

## Henry Kuzma Report
*My Data Set is all the nominations from every oscar ceremony since they began using datatypes row (string), year_release (int) Ceremony (int), Category (string), *name (string), film(string), and winner (string (either TRUE or FALSE))

![example graph](plots/Bubble%20Sort_%20Reads%20and%20Writes%20(1).png)
![example graph](plots/Heap%20Sort_%20Reads%20and%20Writes.png)
![example graph](plots/Merge%20Sort_%20Reads%20and%20Writes.png)
![example graph](plots/Selection%20Sort_%20Reads%20and%20Writes.png)
![example graph](plots/Two%20Sort_%20Reads%20and%20Writes.png)

*The bubble sort algorithm appeared to have an exponential growth in both reads and writes which fits its worst case complexity O(n^2). It had far more reads and *writes than any other algorithm, which suggests that it is the least efficient algorithm by a good amount.

*The selection sort algorithm had an exponential growth in reads, however a much smaller and more linear growth in writes. The reads fit the algorithm's O(n^2) *complexity however the writes do not. this is likely due to there being several reads, but no writes within a nested loop in the algorithm. Selection sort had the *second most reads which makes it potentially one of the less efficient algorithms.

*Heap sort appeared to have a nonlinear growth in both reads and writes, however the curve was less sharp than bubble or selection sort and there were far less reads *than either bubble or selection sort suggesting that it *is more efficient. this matches its O(nlogn) complexity which is a little more efficient than O(n^2).

*two sort (merge and insertion sort) also appeared to have an exponential growth with reads and writes which makes sense given that it uses two search methods. it 
*also has a much larger amount of reads and writes than merge sort (its initial sorting method). this is likely due to the inherent fact of using an second algorithm in addition to merge sort.
*given the combination of both an O(nlogn) algorithm - merge sort, as well as an O(n) algorithm -insertion sort; it would be expected that this algorithm would be 
*less efficient than heap sort which has an O(nlogn) complexity. however, insertion sort uses a binary field for sorting making it a very good case scenario for the *algorithm as there are many duplicates.

*Merge sort's graph appears linear, however, looking at the values on each axis, we can see that the number of reads and writes increase a good deal faster than the *number of elements fitting its O(nlogn) complexity. It has less reads and writes than two sort which makes sense given that two sort performs a merge sort, and then *continues to perform a selection sort. it was the most efficient of the bunch with significantly less reads and writes than the others.

* If you needed to sort a contacts list on a mobile app, it would be best to use a stable sorting algorithm like insertion, merge, or bubble sort since duplicate names are common. of these, bubble *is not reccomended due to poor efficency. since I did not handle insertion sort on its own, its hard to say whether it or merge sort are better for a smaller data *type so either would suffice for this purpose. 

*for a database of 20 million client files, a stable algorithm is also necessary since names often are duplicated. going further I would use insertion sort since it *has the most efficient complexity O(n).




## Submit
You must include your source (all .cpp and .h) files, your data (.csv) file(s), CMakeLists.txt, and your updated README.md file that contains your report to your repository. Submit to Gradescope using the GitHub repository link, double-check that all the correct files are there, and wait for the autograder to provide feedback.

## Grading
The project is out of 90 points.

| Points Possible | Description of requirement |
|------------------- | ----------------------------- |
| 5 pts | Program compiles and runs. |
| 5 pts | Code style. Readable, naming style is consistent, comments where appropriate. |
| 5 pts | Use five sorting algorithms according to the directions above. |
| 15 pts | Sort the 100, 200, … 1000 objects according to the directions above. |
| 40 pts | Record the correct number of reads and writes for each sort. |
| 20 pts | Report: content, formatting, professional, grammatically correct, cites sources. |
