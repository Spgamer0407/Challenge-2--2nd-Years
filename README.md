
# SOSC Round 2 challenge — 2nd Years

# My Solution: Round 2 Challenge

Hi! This is my submission for the coding puzzle. I solved three mini-games to get three secret numbers, which I combined to unlock the final key.

Here is how I solved each one:

---

 Problem 1: The Rotating Grid
The Goal: Spin the rows of a letter grid and score the middle row.



My Logic:
1.  The Spin: I read the instructions to see which row to move. If a row needed to move "Right," I took the letters from the end and stuck them to the front.
2.  The Target: After spinning everything, I looked only at the **middle row**.
3.  The Score: Computers give every letter a hidden number (like A=65, B=66). I just added up all those numbers in the middle row to get Clue 1



 Problem 2: The Scrambled Message
The Goal: Transform a text string and count the vowels.

My Logic:
I acted like a decoder machine and followed 4 steps:
1.  Reverse: I flipped the whole string backward.
2.  Cut: I deleted every 3rd character.
3.  Shift: I bumped every letter forward by 2 spots in the alphabet (so 'A' became 'C').
4.  Count: Finally, I counted how many vowels (`a, e, i, o, u`) were left. This gave me Clue 2



 Problem 3: The Number Race
The Goal: See which numbers make it to the "DONE" finish line.



My Logic:
I treated the numbers like players in a board game with simple rules:
Prime Numbers (like 2, 7, 11): They are VIPs. They teleport straight to the finish line.
Even Numbers (like 4, 10): They walk slow, but they keep moving forward, so they eventually finish
* **The Others:** Odd numbers that aren't prime (like 9) get stuck at the start. 
I counted all the winners (Primes + Evens) to get Clue 3



 The Final Key
To finish, I mashed the clues together using the secret formula:

| Step | Clue Value | Action | Result |
