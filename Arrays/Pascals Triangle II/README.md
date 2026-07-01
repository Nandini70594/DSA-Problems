Pascal's Triangle II
Topic
Arrays
Math / Combinatorics
Approach
Instead of generating the entire Pascal Triangle, we directly compute the required row using the mathematical property of combinations.

Each element in Pascal’s Triangle represents a binomial coefficient:

[ ^nC_r = \frac{n!}{r!(n-r)!} ]

To efficiently calculate consecutive values, we use:

[ ^nC_r = ^nC_{r-1} \times \frac{n-r+1}{r} ]

This avoids repeated factorial calculations and allows us to generate the row in linear time.

Complexity Analysis
Time Complexity
O(n)
We compute each element exactly once.

Space Complexity
O(n)
We only store the required row.

Key Insight
This approach is optimal because:

No need to generate the full triangle
Uses mathematical properties directly
Requires only linear space
Faster and cleaner than DP construction
