<!--
 
 ##     ##   #####    #######  
 ##     ##  ##   ##  ##     ## 
 ##     ## ##     ##        ## 
 ######### ##     ##  #######  
 ##     ## ##     ## ##        
 ##     ##  ##   ##  ##        
 ##     ##   #####   ######### 
 
-->
<!--
 
  #######     ##   ##         #######  
 ##     ##  ####   ##    ##  ##     ## 
        ##    ##   ##    ##         ## 
  #######     ##   ##    ##   #######  
 ##           ##   #########        ## 
 ##           ##         ##  ##     ## 
 #########  ######       ##   #######  
 
-->
<!--
 
 ########   #######  ########  ######## ######## ########  
 ##     ## ##     ## ##     ##    ##    ##       ##     ## 
 ##     ## ##     ## ##     ##    ##    ##       ##     ## 
 ########  ##     ## ########     ##    ######   ########  
 ##        ##     ## ##   ##      ##    ##       ##   ##   
 ##        ##     ## ##    ##     ##    ##       ##    ##  
 ##         #######  ##     ##    ##    ######## ##     ## 
 
-->



# Homework 02 - Class Design
## Class 1 - Card
####   - A card knows its value
####   - A card should know suit and rank (for poker)
####   - A card should know how to print itself
####   - A card should know how to be compared to other cards (<, >, ==, !=)
## Class 2 - Deck
####   - A deck is composed of 1-N cards
####   - A deck can shuffle cards
####   - A deck can deal cards
####   - A deck can get a card back and return it to the deck
####   - A deck can run out of cards
## Class 3 - Hand
####   - A hand can hold cards
####   - A hand can sort cards
####   - A hand can return and receive cards from the deck
## Class 4 - Player
####   - A player can hold a hand
####   - A player can draw from the deck
####   - A player can perform actions (bet, call, check, fold, raise)
## Class 5 - Game
####   - A game knows what card game to play
####   - A game keeps an order of players (and if a player is "out")
####   - A game can start and end
## Class 6 - Poker
####   - Poker has a certain number of players
####   - Poker keeps track of which player's turn it is
####   - Poker keeps track of what round of play it is
####   - Poker has a deck of cards