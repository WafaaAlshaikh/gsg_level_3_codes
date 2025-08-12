# Activity Schedules Assignment

## Problem Statement
Given n days (1 ≤ n ≤ 10), print all sequences of daily activities using:  
{"Swimming", "Running", "Football"}  
such that no two consecutive days have the same activity. Each schedule should be printed on its own line, with activities separated by a single space.  
Finally, print:  
COUNT: X

where X is the total number of schedules.

---

## Example Run (n = 2)

Football Running
Football Swimming
Running Football
Running Swimming
Swimming Football
Swimming Running
COUNT: 6

---

## Expected COUNT Formula

\[
COUNT(n) = 3 \times 2^{n-1}
\]

Examples:  
- n = 1 → COUNT = 3 × 2⁰ = 3  
- n = 2 → COUNT = 3 × 2¹ = 6  
- n = 5 → COUNT = 3 × 2⁴ = 48  
- n = 10 → COUNT = 3 × 2⁹ = 1536

---

## Author

Name: Wafaa Alshaikh  
ID: wafaj2017@gmail.com
