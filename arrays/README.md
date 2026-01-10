# Arrays

This folder covers core array patterns with clean C++ implementations + notes.

---

## Core Concepts (Theory)

### 1) Traversal
- Loop through all elements once.
- Time: **O(n)**, Space: **O(1)**

### 2) In-place vs Extra Space
- In-place: modify same array (better space)
- Extra space: create new array (sometimes easier)

### 3) Common Patterns
#### Pattern A: Two Pointers
Used when:
- array is sorted, or we control both ends
Examples:
- reverse array, remove duplicates (sorted), container with most water

#### Pattern B: Prefix Sum
Used when:
- many range sum queries (L..R)
Idea:
- build `pref[i] = sum of first i elements`
Query:
- `sum(L..R) = pref[R+1] - pref[L]`

#### Pattern C: Difference Array (Range Updates)
Used when:
- many operations “add v to all elements in [L..R]”
Idea:
- do updates on `diff[]` and build final via prefix sum

#### Pattern D: Kadane’s Algorithm
Used when:
- maximum subarray sum in O(n)
Tracks:
- best ending here
- global best

#### Pattern E: Hashing
Used when:
- you need fast lookup / frequency
Examples:
- Two Sum (unsorted), remove duplicates (unsorted)

---

## Problems

1. Print array
2. Reverse array
3. Maximum element
4. Count odd/even
5. Check sorted
6. Rotate left by 1
7. Rotate right by K
8. Frequency 0–9
9. Linear search
10. Second largest distinct
11. Remove duplicates (unsorted, keep order)
12. Move zeros to end
13. Two Sum (hash)
14. Two Sum (sorted two pointers)
15. Prefix sum build + range query
16. Difference array range updates
17. Kadane (max subarray sum)
18. Kadane with indices
19. Best time to buy/sell stock (1 transaction)
20. Container with most water
21. Check palindrome array

---

## Notes / Mistakes to Avoid

- Off-by-one errors (especially in prefix sums)
- Overflow: use `long long` for sums
- “Two pointers” generally needs sorted array (except special problems like container)
- Distinct second largest: handle duplicates carefully
