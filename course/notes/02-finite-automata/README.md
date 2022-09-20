# Automata - the methods and the madness
Intro to automata theory, languages, and computation

![00-assignment-0](https://user-images.githubusercontent.com/65584733/189735141-8bd7d418-f775-4eae-b076-655a918970db.jpg)
![00-assignment-1](https://user-images.githubusercontent.com/65584733/189735148-aadc4731-a3a3-448b-a44a-dfadf6d818af.jpg)
![00-assignment-2](https://user-images.githubusercontent.com/65584733/189735152-52fdaa91-d7bf-4945-a884-27648831f64e.jpg)
![00-assignment-3](https://user-images.githubusercontent.com/65584733/189735155-c0af1f66-fed1-47f1-9a55-4080c0964688.jpg)
![00-assignment-4](https://user-images.githubusercontent.com/65584733/189735158-65e5871b-0f79-41ed-a500-7b6466aafac5.jpg)
![00-assignment-5](https://user-images.githubusercontent.com/65584733/189735164-2564caff-602d-4d20-8661-1f64a43d19ed.jpg)
![00-assignment-6](https://user-images.githubusercontent.com/65584733/189735172-1c6fadee-0fec-462d-a748-78acbff98f13.jpg)
![00-assignment-7](https://user-images.githubusercontent.com/65584733/189735175-c5ce4f70-098e-4a34-b0bf-df5598babcf5.jpg)

## Preliminary math review

### 1. Alphabet $\Sigma$

An alphabet is a finite set of symbols.

- $\Sigma = \{0, 1\}$ _binary alphabet_
- [UTF-8 characters](https://en.wikipedia.org/wiki/List_of_Unicode_characters)


###  2. String 

A string is a finite-length sequence of symbols.  Also known as a word is a finite sequence of symbols chosen from an alphabet $\Sigma$.  

### $\epsilon$ _empty string_ 

The empty string contains zero symbols, however it's length is 1.

- $\epsilon = \{\emptyset\}$ 

- $ | S |$ _length of string / cardinality_
- $ s_{1} \cdot s_{2} $ _concatenation of strings_
- $\epsilon \hspace{3px} s = s \hspace{3px} \epsilon = s$ for all strings $s$

The empty string is the string over all alphabets, and is the identity for concatenation.

Example:  

From the binary alphabet, $\Sigma = \{0, 1\}$, we have the following strings 01011 which has length 5, ε which has length 0, and 1111 which has length 4.

### 3. _Recursive definition of the Alphabet_ $\Sigma$

If $\Sigma$ is in an aphabet, then we recursively define... 

$\Sigma^n = $ 

$\Sigma^0 \coloneqq \{ \epsilon  = \{ \emptyset \} \} $

$\Sigma^{n+1} \coloneqq \Sigma^{n} \cdot \Sigma = \{ s \cdot c \hspace{3px} | \hspace{3px} s \hspace{3px} \epsilon  \hspace{3px} \Sigma^n, c\hspace{3px} \epsilon \hspace{3px} \Sigma \hspace{3px} \} $ 


The alphabet of n plus one is defined as the alphabet of all strings concatenated with the binary alphabet.

$\Sigma^n \cdot \Sigma = \hspace{3px}$ is equal to the concatenation of the two strings $s$ & $c$ such that $s$ is a subset of the binary alphabet and the subset of the alphabet.  

### 4. _Binary Alphabet_ $\Sigma = \{0, 1\}$

For example for the binary alpabet $\Sigma = \{0, 1\}$, we have the following:

$\Sigma^0 = \{\epsilon\}$

$\Sigma^1 = \{ 0, 1 \}$

$\Sigma^2 = \{00, 01, 10, 11\}$

$\Sigma^3 = \{000, 001, 010, 011, 100, 101, 110, 111\} $

$\Sigma^n = \{ $  the strings of length $n$ over the binary alphabet $\}$

### 5. _Kleene closure of_  $\Sigma$

set of _all strings_ over the alphabet $\Sigma$ is denoted as $\Sigma^*$

$$
\Sigma^* \coloneqq \bigcup\limits_{n=1}^{\infty} \Sigma^{n} 

= \Sigma^0 \cup \Sigma^1 \cup \Sigma^2 \cup \cdot \cdot \cdot

$$

The set of all non-empty strings over an alphabet $\Sigma$ is denoted as $\Sigma^+$

$$

\Sigma^+ \coloneqq \bigcup \limits_{n=1}^{\infty} \Sigma^n =

\Sigma^1 \cup \Sigma^2 \cup \cdot \cdot \cdot

$$

### 5. Language $A \subset \Sigma^*$

The subset of $\Sigma^*$ is called a _language_

Examples of Languages:

- $\Sigma^*, \emptyset, \{\epsilon \}$ are all three distinct languages for any alphabet $\Sigma$

- The language of all strings consisting of any number of zeros followed by a one, 

$$

\{ 0^n 1^n \hspace{3px} | \hspace{3px} n ≥ 0 \} = 

\{1, 01, 001, 0001, ... \}

$$

- The language of all strings consisting of $n$ zeros followed by $n$ ones, 

$$

\{ 0^n1^n \hspace{3px} | n ≥ 0\} = \{ \epsilon, 01, 0011, \dots \}

$$


- The language of legal C programs is a language over $UTF-8$

## Definitions

### 1.  Finite automata

Finite automata involve states and transitions among states in response to inputs.  They are useful for builing several different kinds of software, including the lexical analysis component of a compiler and systems for verifying the correctness of circuits or protocols, for example.

### 2.  Regular Expressions

These are a structural notation for describing the same patterns that can be represented by finite automata.  They are used in many common types of software, including tools to search for patterns in text or in file names, for instance.  

### 3.  Context-Free Grammars

These are an important notation for describing the structure of programming languages and related sets of strings; they are used to build the parser component of a compiler.

### 4.  Turing Machines

These are automata that model the power of real computers.  They allow us to study decidability, the question of what can or cannot be done by a computer.  They also let us distinguish tractable problems - those that can be solved in polynomial time - from the intractable problems - those that cannot.

### 5.  Deductive Proofs

This basic method of proof proceeds by listing statements that are either given to be true, or that follow logically from some of the previous statements.  

### 6.  Proving If-Then Statements

The statement or statements following the `if` are the hypothesis, and what follows `then` is the conclusion.Deductive proofs of `if-then` statements begin with the hypothesis and continue with statements that follow logically from the hypothesis and previous statements, until the conclusion is proven as one of the statements.

```
// if then statements

if (something) { hypothesis }
then (something_else) { conclusion }

||

(something) => (something_else)

```
### 7.  Proving If-And-Only-If Statements 

They are proved by showing `if-then` statements in both directions.  A similar kind of theorem claims the equality of the sets described in two different ways; these are proved by showing that each of the two sets is contained in the other.

```
// if and only if statement

(something) if and only if (something_else)

|| 

(something) <=> (something_else)
```
### 8.  Proving the Contrapositive

Somethimes it is easier to prove a statement of the form `if H then C` by proving the equivalent statement:  `if not C then not H`.  The latter is called the contrapositive of the former.

```
// contrapositive statment

if (H and not C) then (something known to be false)
therefore if H then C

if (H && !C) then (something known to be false)
therefore (H => C)
```

### 9.  Counterexamples

Sometimes we are asked to show that a certain statement is not true.  If the statement has one or more parameters, then we can show it is false as a generality by providing just one counterexample, that is, one assignment of values to the parameters that makes the statement false.

```
// counterexamples

if (param[] >= 1) then (param[0] != true)
therefore (param[*] == false)
```

### 10.  Inductive Proofs

A statement that has an integer parameter n can often be proved by induction on _n_.  We prove the statement is true  for the basis, a finite number of cases for particular values of _n_, and then prove the inductive step:  that if the statement is true for values up to _n_, then it is true for _n + 1_.

```
if (n == True) then (n + 1 == True)
```
### 11.  Structural Inductions

In some situations the theorem to be proved inductively is about some recursively defined construct, such as trees.  We may prove a theorem about the constructed objects by induction on the number of steps used in its construction.  This type of induction is referred to as structural.
### 14.  Languages and Problems

A language is (possibly infinite) set of strings, all of which choose their symbols from some one alphabet.  When the string of a language are to interpreted in some way, the question of whether a string is in the language is sometimes called a problem.

### 15. Problem
 
Is the string apart of a language or not?

