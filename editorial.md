Alice will win only if the danger number $n$ is of the form $4k+1$, where $k$ is a non-negative integer. Bob will win every other time.

We will prove this by induction. For $n=1$, it is obvious that Alice will win. That is, if at any stage of the game, we reach a point where the difference between the current number that has just been spoken and the danger number is equal to $1$, then the person whose turn it is loses the game. So, the optimal strategy for the players should be to try to speak the number one less than the danger number.

For some other number of the form $4k+1$ ($k \ge 0$), suppose Bob says the number $a$ ($1 \le a \le 3$), then Alice could say the number $4-a$ to give Bob, making the difference between the danger number and the number just spoken be of the form $(4(k-1) + 1)$ ($k \ge 0$). So no matter which number Bob speaks, Alice can bring the difference to be of the form $4p+1$ ($0\le p \le k$). Eventually, the difference would become one, and Bob would lose the game.

Hence, we have shown that if at any stage of the game, the difference is of the form $4k+1$, the player who has the current turn loses the game. If suppose the danger number is not of the form $4k+1$, then it can be shown that Bob can speak a number such that the difference becomes of that form on Alice's turn, and hence Bob wins the game.
