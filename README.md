# N-Queen-Problem
The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens
attack each other. For example, to solve the eight queens puzzle (when N=8), the problem is to place
the eight chess queens on an 8×8 chessboard so that no two queens threaten each other. Thus, a
solution requires that no two queens share the same row, column, or diagonal. To solve the problem,
keep a simple rule: last placed, first displaced. In other words, if you place successfully a queen on the
i
th column but cannot find solution for (i+1)th queen, then going backwards you will try to find other
admissible solution for the ith queen first. This is a Backtrack approach where you try to build a
solution one step at a time. If at some step it becomes clear that the current path that you are on cannot
lead to a solution, you go back to the previous step (backtrack) and choose a different path. Briefly,
once you exhaust all your options at a certain step you go back.

In this project, you have designed a suitable algorithm that solves the N-queen problem and shows all
possible placements of N queens. You have to use Backtracking algorithm in this regard. You should
not use Brute Force as using it will increase the runtime and complexity with the increasing value of
N.

Input:
Number of queens or the value of N.
Output:
All possible placements of the queens. You can show it using matrix.
