// Implementation of make_heap function template provided in STL.

/**
 * Arranges values for fast retrieval.
 * Make sure that largest number is always popped out first with pop_heap()
 * Time complexity: 3N
 */


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    
    make_heap(v.begin(), v.end());
    
    for (int i : v) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}