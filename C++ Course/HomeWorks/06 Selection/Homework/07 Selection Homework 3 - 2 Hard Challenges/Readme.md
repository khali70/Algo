## Problem #1: Intervals

![intervals](./Screenshot%202022-10-11%20020139.png)

- Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e)
  - These 6 numbers are for 3 interval
  - Each Interval is a range [start, end]
  - Number X in a range if start <= X <= end
  - E.g 7 in range [5, 12] but not in range [10, 20]
- Print how many intervals that
  X is part of
- Inputs
  - 7 1 10 5 6 4 40 ⇒ 2
    - Number 7 exists in 2 intervals [1, 10] and [4, 40]
  - 10 5 15 6 100 3 30 ⇒ 3
    - 10 exists in the 3 intervals [5 15], [6 100], [3 30]
  - 10 100 200 100 101 120 170 ⇒ 0 [doesn’t exist in any interval]

## Problem #2: Two Intervals Intersection

- Read 4 numbers representing 2 intervals and print their intersection interval. If
  they don’t intersect, print -1
- Inputs
  - 1 6 3 8 ⇒ 3 6
    - Interval [1 6] and [3 8] only intersects at [3, 6]
    - Why: interval [1, 6] has numbers: {1, 2, 3, 4, 5, 6}
    - And: interval [3, 8] has numbers: {3, 4, 5, 6, 7, 8}
    - So the intersection is {3, 4, 5, 6} = [3, 6]
  - 1 15 20 30 ⇒ -1
