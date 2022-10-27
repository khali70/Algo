## Problem #1: Arithmetic

- Read 2 integers A, B and print based on following cases:
  - if both are odd print their product A\*B
  - if both are even print their division A/B (assume B != 0)
  - if the first is odd and the second is even then find their sum A+B
  - if the first is even and the second is odd then find their subtraction A-B
- Inputs ⇒ outputs
  - 5 7 => 35
  - 12 2 => 6
  - 5 6 => 11
  - 12 3 => 9

## Problem #2: Sort 3 numbers

- Given 3 integers, sort (order) them in ascending order and print them .
- Inputs ⇒ outputs
  - 1 2 3 ⇒ 1 2 3
  - 1 3 2 ⇒ 1 2 3
  - 2 1 3 ⇒ 1 2 3
  - 2 3 1 ⇒ 1 2 3
  - 3 1 2 ⇒ 1 2 3
  - 3 2 1 ⇒ 1 2 3
- Do you notice there are only 6 ways to permutate 3 numbers!

## Problem #3: Maximum but constrained

- Given 3 integers, you have to find the biggest one of them which is < 100.
  - Print -1 if no such number
- Inputs
  - 22 90 115 ⇒ 90
    - Here [20 90] are only < 100. Maximum (20, 90) = 90
  - 200 300 400 ⇒ -1
    - All of them are > 100, so no answer
  - 50 100 150 ⇒ 50
    - Only 50 is < 100.
  - 10 30 20 ⇒ 30
    - The 3 numbers < 100, so their max is 30

## Problem #4: Conditional Count

- Write a program that reads number X, then other 5 numbers. Print 2 values:
  - How many numbers <= X
  - How many numbers > X
  - Any relation between these 2 outputs?
- Inputs
  - 10 300 1 5 100 200
  - Output: 2 3
  - Explantation
  - 2 numbers (1, 5) are <= 10
  - 3 numbers (100, 200, 300) are > 10
