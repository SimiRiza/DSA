/*
Problem 1: Contains Duplicate
Initial Solution

- Given an integer array, check if any value appears at least twice.
- This is the initial solution using unordered_set: find() + insert() method
- Approach:
    1. Create an unordered_set to store elements.
    2. For each element in the array:
        - Check if it already exists in the set using find().
        - If it exists ? duplicate found ? return true.
        - Otherwise ? insert it into the set.
    3. If loop completes without returning, return false (no duplicates).
- Time Complexity: O(n) average, O(n^2) worst (rare, due to collisions)
- Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;  // create an unordered_set to store unique elements

        for (int n : nums) {
            // Check if element is already in the set
            if (us.find(n) != us.end()) {
                // Element already exists ? duplicate found
                return true;
            }
            // Insert the element into the set
            us.insert(n);
        }

        // No duplicates found after checking all elements
        return false;
    }
};

// Example usage 
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << (sol.containsDuplicate(nums) ? "true" : "false") << endl;
    return 0;
}
