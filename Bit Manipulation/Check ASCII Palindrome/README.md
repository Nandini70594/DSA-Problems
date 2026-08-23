# Approach

The solution has two main steps:

1. Convert every character into its **8-bit ASCII binary representation**.
2. Check whether the resulting binary string is a palindrome.

## Step 1: Convert each character to ASCII

In C++, a character can be converted to its ASCII value:

```cpp
int asciiVal = (int)c;
```

For example:

`f → 102`

## Step 2: Convert the ASCII value into exactly 8 bits

The bit positions are:

`7 6 5 4 3 2 1 0`

We check them from `7` down to `0`:

```cpp
for(int i = 7; i >= 0; i--)
```

To check whether a particular bit is `1`:

```cpp
(asciiVal >> i) & 1
```

If it is `1`, append `'1'`; otherwise append `'0'`.

```cpp
if((asciiVal >> i) & 1) {
    binStr += '1';
}
else {
    binStr += '0';
}
```

This ensures that leading zeros are also included.

For example:

`f = 102 = 01100110`

## Step 3: Check for palindrome

After constructing the complete binary string, use two pointers:

```cpp
int left = 0;
int right = binStr.length() - 1;
```

Compare the characters at both ends.

If they differ:

```cpp
return false;
```

Otherwise:

```cpp
left++;
right--;
```

Continue until `left >= right`.

If no mismatch occurs, return `true`.


---

# Complexity Analysis

Let `n` be the length of the input string.

Each character produces exactly 8 bits, so the binary string has length `8n`.

### Time Complexity

Converting the characters takes `O(8n)`.

Palindrome checking takes `O(8n)`.

Since `8` is constant:

**Time Complexity: `O(n)`**

### Space Complexity

The binary string contains `8n` characters:

**Space Complexity: `O(n)`**