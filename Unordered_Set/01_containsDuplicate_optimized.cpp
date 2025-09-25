/*
Optimized Solution for Contains Duplicate

- Instead of using find() + insert(), we use insert().second
  which returns a pair (iterator, bool) to check if insertion succeeded.
- Reserve memory upfront using us.reserve(nums.size()) to reduce rehashing.
- This makes the code cleaner and slightly faster in practice.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;  
        us.reserve(nums.size());  // pre-allocate space to reduce rehashing

        for (int n : nums) {
            // Optimization: use insert().second to check if element already exists
            if (!us.insert(n).second) { 
                return true;  // duplicate found
            }
        }

        return false; // no duplicates found
    }
};
