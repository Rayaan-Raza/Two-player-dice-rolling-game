A two-player dice rolling game using a C++ program. The program will
start and ask for the Complete Names and Roll Numbers of the two players playing the game. The
game has the following rules.
The players roll two 6-sided dice each and get points depending on what they roll. There are 5 rounds
in a game. In each round, each player rolled the dice twice.
1. The points rolled on each player’s dice are added to their score.
2. If the sum of the roll matches with the sum of last 2 digit of a player then the player gets
additional npoints where n is the last digit of the Roll Number.
3. If the sum of the roll matches with m where m is index of the last alphabet of the name of
the player then player gets additional 5 points. (Index of A is 1, B is 2, C is 3 and so on. Index is
not casesensitive)
4. If a player rolls a double and the sum of the roll is used as “a” in the followingequation and the
equation gets a single solution, then the player gets an extra roll.
x^2-ax+a=0

6. The person with the highestscore at the end of the 5 rounds wins.
7. 
8. If both players have the same score at the end of the 5 rounds, they each roll 1 die and
whoever getsthe highestscore wins (this repeats until someone wins).
