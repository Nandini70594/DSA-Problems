# Approach

The easiest approach is to use a hash map to store the frequency of every value in the tree.

We divide the problem into two main parts:

1. Traverse the entire tree and count the frequency of every value.
2. Find the maximum frequency and collect all values having that frequency.

## Step 1: Store Frequencies

Use an unordered_map:

    unordered_map<int, int> freq;

Here:

- Key = value of the tree node
- Value = number of times that value occurs

For example, if the tree contains:

    2, 1, 2, 3, 2

The map becomes:

    1 → 1
    2 → 3
    3 → 1

## Step 2: Traverse the Tree

Create a helper function to visit every node.

If the current node is NULL, stop:

    if(root == NULL) {
        return;
    }

Otherwise, get the node value and increase its frequency:

    int num = root->val;
    freq[num]++;

Then recursively visit the left and right subtrees:

    bfs(root->left);
    bfs(root->right);

Although the function is named bfs, this is actually a DFS traversal using recursion, because we completely explore one subtree before moving to the other.

## Step 3: Find the Maximum Frequency

After the complete tree has been traversed, the frequency map contains the frequency of every value.

Initialize:

    int maxFreq = 0;

Then traverse the map:

    for(auto x : freq) {
        maxFreq = max(maxFreq, x.second);
    }

Here:

    x.first  → element
    x.second → frequency


## Step 4: Find All Modes

Now traverse the frequency map again.

If an element's frequency is equal to maxFreq, add that element to the answer:


# Complexity Analysis

Let n be the number of nodes in the tree.

## Time Complexity

The tree is traversed once:

    O(n)

The frequency map is traversed twice.

In the worst case, there can be n unique values:

    O(n) + O(n) + O(n) = O(n)

Therefore:

Time Complexity: O(n)

## Space Complexity

The hash map can contain up to n unique values:

    O(n)

The recursive DFS also uses the call stack. In the worst case, if the tree is completely skewed, the recursion depth can be O(n).

Therefore:

Space Complexity: O(n)