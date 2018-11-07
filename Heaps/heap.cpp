// Implementation of Heap datastructure in STL.

/**
 * Heap can be squashed to give a vector representation.
 * 
 * make_heap()
 * Arranges values for fast retrieval.
 * Make sure that largest number is always popped out first with pop_heap()
 * Time complexity: 3N
 * 
 * push_heap()
 * adds value in corresponding position.
 * Time complexity: logN
 * 
 * pop_heap()
 * removes max element from heap.
 * Time complexity: 2logN
 * 
 * sort_heap()
 * sorts the heap
 * Time complexity: NlogN
 */


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printHeap(vector<int> h);

int main(int argc, char const *argv[])
{
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};

    make_heap(v.begin(), v.end());
    printHeap(v);


    cout << "Max element: " << v.front() << endl;
    pop_heap(v.begin(), v.end());
    v.pop_back();
    printHeap(v);

    v.push_back(9);
    push_heap(v.begin(), v.end());
    printHeap(v);

    sort_heap(v.begin(), v.end());
    printHeap(v);

    return 0;
}

void printHeap(vector<int> h) {
    for (int i : h) {
        cout << i << " ";
    }
    cout << "\n";

}