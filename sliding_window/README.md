# Sliding Window

Used for subarray/substrings with contiguous constraints.

## Window types
- Fixed-size window
- Variable-size window (expand/shrink)

## Problems (suggested)
01. Max Sum Subarray of size K  
02. Min Size Subarray Sum (>= S)  
03. Longest Substring Without Repeating  
04. Longest Subarray with At Most K Distinct  
05. Count Subarrays with Sum K (prefix+hash, not pure window)  
06. Longest Subarray with Sum K (non-negative case with window)  
07. Longest Ones after K flips  
08. Smallest window containing pattern (advanced)

## Notes
- Variable sliding window works best with non-negative arrays.
- For negatives, use prefix sum + hashmap.
