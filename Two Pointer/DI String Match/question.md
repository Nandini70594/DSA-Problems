# DI String Match


## Problem


A permutation `perm` of `n + 1` integers containing all integers from `0` to `n` is represented by a string `s` of length `n`.


- `s[i] == 'I'` means `perm[i] < perm[i + 1]`
- `s[i] == 'D'` means `perm[i] > perm[i + 1]`


Given the string `s`, reconstruct and return any valid permutation.


### Example


**Input:**
```text
s = "IDID"

Output:

[0,4,1,3,2]

Because:

0 < 4 > 1 < 3 > 2