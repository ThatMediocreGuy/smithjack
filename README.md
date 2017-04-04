# smithjack
Create a functioning, simplified Blackjack game in C without object-oriented code.

1. In Smithjack, the dealer has an infinite supply of card decks. After dealing a card from one deck, the dealer tosses it away and grabs a fresh deck.

2. THere are 52 cards in each deck . The kinds of cards are A, 2, 3, 4, 5, 6, 7, 8, 9, J, Q, & K. THere are 4 of each king of card. The cards have a value of 1 to 10 points. The Ace can be worth 1 or 11 points (more on this later). The 10, J, Q, & K are each worth 10 points. The rest are worth their face value.

3. The dealer deals 1 card to the player and 1 card to itself. The dealer then deals a second card to each. The player can see both of their own cards, but can only see the 2nd card of the dealer

4. If the dealer's total is 21 (Ace plus a ten-pointer) the hand is over and the program says "SmithJack!"

          a. If the player also has 21, then it's a "knock" (a tie) and no one scores any points.
   
          b.If the player has any other score, then the dealer wins, and the player loses one point.
          
5. Otherwise, if the player has a SmithJack they win 1.5 points.

6. If there is no immediate winner, then play proceeds. The player is given the opportunit to "stay" with the cards they have or ask for a "hit" of another card. This opportunity is repeated as many times as the player pleases unless the "bust" y exceeding a score of 21 points. If the player busts they lose 1 point and the hand is over.

7. Please assume that as long as a player's (or dealers) total is less than equal to 10, then dealt Aces
   
