// Problem: Richest Customer Wealth
// LeetCode: https://leetcode.com/problems/richest-customer-wealth/

public class MaximumWealth {

    /**
     * Returns the maximum wealth among customers.
     * @param accounts 2D array where each row represents a customer and columns are their wealth in each account
     * @return maximum wealth
     */
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for (int[] row : accounts) {
            int sum = 0;
            for (int e : row) {
                sum += e;
            }
            if (sum > max) max = sum;
        }
        return max;
    }
}

