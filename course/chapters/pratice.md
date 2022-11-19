# intro to the theory of computation

## homework 1

1.  create a NFA that accepts binary strings that start with two 0s

2.  convert the NFA that accepts binary strings that start with two 0s to a DFA

3.  create an NFA that accepts binary strings which start and end with the same symbol.

4.  convert the NFA that accepts binary strings which start and end with the same symbol to a DFA


## homework 2

1.  give a regular expression for the binary string that do not contain 11 as a substring.

2.  give a regular expression for the binary strings whose number of 0s is divisible by five.

3.  give an english language description of the regular expression 

$$ (((0^{*})(1^{*}))^{*})000((0 + 1)^{*}) $$

## homework 3

Prove that one of the following languages is not regular:

1.  $\{{(0^{n})(10^{n}) \mid n \geq 1\}}$

2.  $\{{(0^{n})(1^{m}) \mid n \leq m\}}$

3.  $\{{(0^{n})(1^{2n}) \mid n \geq 1\}}$

## homework 4

Give a context-free grammar for each of the following languages:

1.  $\{0^{n}1^{n} \mid n \in \mathbb{N}\}$

2.  the language of a balanced parentheses which contain the strings 

$\epsilon$ , $()$ , $(())$, $()()$, $\dots$

3.  $\{0^{m}1^{n} \mid m \leq n \}$

4.  the language of lists of x's which contain the strings

$[]$, $[x]$, $[x, x]$, $\dots$

## homework 5

Design PDAs to accept the following languages by either final state or by empty stack, whichever is most convenient for the particular language.

1.  $\{0^{n}1^{n} \mid n \geq 1\}$

2.  the language of balanced parentheses 

3.  the language over $\{i, e\}$, where all prefixes for every string conatin at least as many <code style="color:red"> i </code>s than <code style="color:red"> e </code>s.  Think of an <code style="color:red"> i </code> as representing an <code style="color:red"> if </code> block and an <code style="color:red"> e </code> as representing an <code style="color:red"> else </code> 
