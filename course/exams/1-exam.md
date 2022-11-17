# exam 1

morgan bergen

introduction to the theory of computation

sept 19 2022

## sections

introduction to automata theory, languages, and computation 3rd edition


chapter 2 automata
chapter 3 regular expressions and languages


## concepts

finite automata
- deterministic finite automata
- non-deterministic finite automata

regular expressions and languages
- regular expressions
- finite automata and regular expressions
    - from dfa to regular expression
    - converting dfas to regular expressions by eliminating states
    - converting regular expressions to autoata
- algebraic laws for regular expressions


## practice questions

```diff
+ 1.  create an NFA that accepts binary strings that start with two '0's
```
```diff
+ 2.  convert the NFA from question #1 into a DFA
```

```diff
- 3.  create an NFA that accepts binary strings which start and end with the same symbol
```
```diff
- 4.  convert the NFA form question #3 into a DFA
```

```diff
- 5.  Give a regular expression for the binary strings that do not contain 11 as a substring.
```

```diff
- 6.  Give a regular expression for the binary strings whose number of 0s is divisible by five.
```

```diff
- 7.  Give an English language description of the regular expression 
```
$$(0*1*)*000(0+1)*$$


# Questiosn on Exam
```diff

1.  Create a DFA that recognizes a language that contains strings whose second to last character is a 0.
2.  Convert that DFA into an NFA
3.  Write a regular expression that accepts binary strings that start and end with the same character
4.  Write out an english translation for the language that accepts strings whose regular expression is as follows

(G*A*T*C*)*(T+A+T+C)*(G+A+C+T)* 


```





















