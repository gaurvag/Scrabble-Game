
Scrabble-Game
  It takes input as bag of letters and finds word of maximum score(based on a formula) 
  from a dictionary of words which is broken into smaller dictionaries on basis of word's length.
  Words selected from dictionary can be created from letters in bag.

Sample-Inputs
  O* tbLush 
  Zy ms*e

Some Points
  Bag of letters can have alphabets(in upper or lower case) which may be separated by space(s) or stars(*).
  A star can match any vowel. 
  There are weights associated with each alphabet which will help in calculation of score for a word. 
  Weights for each alphabet, star and the formula for calculation of final score of a word can be seen in scrabble.c file.
