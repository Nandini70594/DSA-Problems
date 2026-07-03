````md id="8r4x1v"
# Longest Palindromic Substring

## Approach

Use the **Expand Around Center** technique.

A palindrome mirrors around its center.

For every index:
- Check odd length palindrome using:
  ```cpp
  expand(i, i)
````

* Check even length palindrome using:

  ```cpp
  expand(i, i + 1)
  ```

Expand outward while:

```cpp
s[left] == s[right]
```

Update the longest palindrome whenever a larger one is found.

Finally return:

```cpp
s.substr(start, maxLen)
```

---

## Complexity Analysis

### Time Complexity

```text id="r6dugq"
O(n²)
```

### Space Complexity

```text id="lww4ao"
O(1)
```

---

## Topics

* Strings
* Two Pointers
* Expand Around Center

```
```
