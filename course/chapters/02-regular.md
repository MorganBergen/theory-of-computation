# regular expressions and languages

Regular expressions are a powerful tool for matching patterns in text.  Regular expression can be thought of as a "programming language", in which we expression some important applications, such as text-search applications or compiler components.  Regular expressions are closely related to nondeterministic finite automata and can be thought of as a "user-friendly" alternative to the NFA notation for describing software components.

**summary of this section**
- define regaular expressions
- show how regular expressions are capable of defining all and only the regular languages
- how regular expressions are used in several software systems
- resemblance to the algebraic laws of arithmetic

## regular expressions

<p style="color:red">machine-like descriptions of languages<p>

- **DFA** deterministic finite automata

- **NFA** nondeterministic finite automata 

<p style="color:rgb(237,106,170)">algebraic descriptions of languages<p>

- **regExp** regular expressions

regular expressions declarative way to express the strings we want to accept, therefore regular expressions serve as the input language for many systems that process strings.  Such as search commands such as the `UNIX grep` or equivalent commands for finding strings that one sees in Web browsers or text-formatting systems.  Different search systems convert the regExp into either a DFA or an NFA and simulate that automaton on the file being searched.  As well as lexical-analyzer generators, such as Lex or Flex.  Lexical analyzers are components of compilers that breaks the source program into logical units (called _tokens_) of one or more characters that have a shared significance.  Examples of tokens include keywords (e.g. `while`) and identifiers (e.g. `+`, or `<=` that has any letter followed by zero or more letters or digits).  A lexical-analyzer generator accepts descriptions of the forms of tokens, which are essentially regular expressions, and produces a DFA that recognizes which token appears next on the input.

### operators

Regular expressions denote languages, and languages are sets of strings.  For example the regular expression $01^{*} + 10^{*}$ 


<p style="color:rgb(50, 150, 200)">The regular expressions operators are:<p>

- **$\cup$**	union

- **$\cdot$**	concatenation

- **$\star$**	kleene star

**union $\cup$**

The union of two languages $L$ and $M$, denoted as $L \cup M$, is the set of strings that are in either $L$ or $M$, or both.  For example, if $L = \{001, 10, 111\}$ and $M = \{\epsilon, 001\}$, then $L \cup M = \{\epsilon, 10, 001, 111\}$

**$\cdot$ concatenation**

The concatenation of languages $L$ and $M$ is the set of strings that can be formed by taking any string in $L$ and concatenating it with any string in $M$.  The concatenation of a pair of strings is just one string followed by another to form the result.  The concatenation of languages is either with a dot or nothing at all.  For example, if

`if` $L = \{001, 10, 111\}$ `&&` $M = \{\epsilon, 001\}$

`then` $L \cdot M = \{001, 10, 111, 001001, 10001, 111001\}$

The first three strings in $LM$ are the strings in $L$ concatenated with the empty string $\epsilon$.  The last three strings are the strings in $L$ concatenated with the strings in $M$.  The last three strings are formed by taking each string in $L$ and concatenating it with the second string in $M$, which is $001$.  For instance, $10$ from $L$ concatenated with $001$ from $M$ gives us $10001$ for $LM$.  

**$\ast$ kleene star**

The _closure_ or _star_ or _kleene closure_ or a language $L$ is denoted as $(L^{\ast})$ and is the set of all strings that can be formed by concatenating zero or more strings from $L$.  

For example, 

`if` $L = \{001, 10, 111\}$

`then` $(L^{\ast}) = \{\epsilon, 001, 10, 111, 001001, 10001, 111001, 001001001$
$10001001, 111001001, 001001001001, 10001001001, 111001001001, 001001001001001$ 
$10001001001001, 111001001001001, 001001001001001001, 10001001001001001, \dots\}$

$L^{\ast}$ represents the set of those strings that can be formed by taking any number of strings from $L$, possibly with repetitions (i.e. the same string may be selected more than once) and concatenating all of them.

### example

Since the idea of the closure of a language is somewhat tricky, let us study a few examples.  First, let $L = \{{0, 11\}}$.  $L^{0} = \{{\epsilon\}}$, independent of what language $L$ is; the 0th power represents the selection of zero strings from $L$.  $L^{1} = L$, which represents the choice of one string from $L$.  Thus, the first two terms in the expansion of $L^{\ast}$ gives us $\{{\epsilon, 0, 11\}}$.  

$L^{0} = \{\epsilon\}$

$L^{1} = L = \{\epsilon, 0, 11\}$

$L^{2} = L \cdot L = \{00, 011, 110, 1111\}$.

$L^{3} = L \cdot L \cdot L = \{000, 0011, 0110, 01111, 1100, 1111, 11100, 111111\}$

$L^{\ast} = \{\epsilon, 0, 11, 00, 011, 110, 1111, 000, 0011, 0110, 01111, 1100, 1111, 11100, 111111, \dots\}$

In order to compute $L^{\ast}$ we must compute $L^{i}$ for each $i$, and take the union of all these languages.  $L^{i}$ has $2^{i}$ members.  Although each $L^{i}$ is finite, the union of the infinite number of terms $L^{i}$ is generally an infinite language, as it is in our example.

Let $L$ be in the set of all strings of 0s.  Note that $L$ is infinite, unlike our previous example, whcih is a finite language.  However, it is not hard to discover what $L^{\ast}$ is.  $L^{0} = \{\epsilon\}$, as always. $L^{1} = L$.  $L^{2}$ is the set of strings that can be formed by taking one string of 0s and concatening it with another string of 0s.  The result is still a string of 0s.  In fact, every string of 0s can be written as the concatenation of two strings of 0s.  Therefore $L^{2} = L$, likewise $L^{3} = L$ and so on... Therfore the infinite union $L^{\ast} = L^{0} \cup L^{1} \cup L^{2} \cup \cdots$ is $L$ in the particular case that the language $L$ is the set of all strings of 0s. 

Another example would be $\emptyset^{\ast} = \{{\epsilon\}}$  Note that $\emptyset^{i}$ for any $i \geq 1$, is empty since we can't select any strings from the empty set.  In fact, ,$\emptyset$ is one of the only two languages whose closure is _not_ infinite.

### building regular expressions

Algebras of all kinds start with some elementary expressions, usually constants and/or variables.  Algebras then allow us to construct more expressions by applying a certain set of operators to these elemntary expressions and to previously constructed expressions.  Usually, some method of grouping operators with their operands, such as parentheses,, is required as well.  For instance, the familiar arithemtic algebra starts with constants such as $\mathbb{Z}$ and $\mathbb{R}$, plus variables, and builds more complex expressions with arithemtic operators ushc as $+$ and $x$.

The algebra of regular expressions follows this pattern, using constants and variables that denote languages, and operators for the three operators - union, dot, and star.  We can describe the regular expressions recursively, as follows.

**base case** the basis consists of three parts

1.  The constants $\{\epsilon\}$ and $\emptyset$ are regular expressions, denoting the languages $\{\epsilon\}$ and $\emptyset$ respectively.  That is $L(\epsilon) = \{\epsilon\}$ and $L(\emptyset) = \emptyset$ 

2. If $a$ is any symbol, then **$a$** is a regular expressions 

3. A variable, usually capitalized and italic such as L, is a variable, representing any language.

**inductive step**  We can construct more complex regular expressions by applying the three operators to regular expressions.  For instance, if $R$ and $S$ are regular expressions, then $R \cup S$ is a regular expression, and $L(R \cup S) = L(R) \cup L(S)$.  Similarly, $R \cdot S$ is a regular expression, and $L(R \cdot S) = L(R) \cdot L(S)$.  Finally, $(R^{\ast})$ is a regular expression, and $L(R^{\ast}) = L(R)^{\ast}$.  Note that the parentheses are required in the last case, since the star operator has higher precedence than the dot operator.  The parentheses are not required in the first two cases, since the union and dot operators have the same precedence.

### example

Let us write a regular expression for the set of strings that consist of alternating 0s and 1s.

First let us develop a regular expression for the language consisting of the single string $01$.  We can then use the star operator to get an expression for all strings of the form $0101 \cdots 01$


-----------------

## regular languages

A regylar language is said to be a regular language if and only if some Finite State Machine (DFA or NFA) can recognize it.  In other words, a regular language is a language that can be recognized by a finite state machine.  The set of all regular languages is denoted by $L_{reg}$.

**non regular languages**

- which are not recognized by any FSM
- which require memory
- memory of DFA or NFA is very limited, it cannot store or count strings

**example**

- $L = \{a^{n}b^{n} | n \geq 0\}$ is not regular
	- $aaabbb$
	- $aaabbbabbb$

- $ababbababb$

These languages/strings require memory
**operations on regular languages**

union - $A \cup B = \{x | x \in A \lor x \in B\}$

concatenation - $A \cdot B = \{xy | x \in A \land y \in B\}$

star - $A^{\ast} = \{\epsilon\} \cup \{x_{1}x_{2} \cdots x_{n} | x_{i} \in A \land n \geq 0\}$

**example**

$A = \{pq, \rho\}$, $B = \{t, UV\}$

union - $A \cup B = \{pq, \rho, t, UV\}$

concatenation -  $A \circ B = {\{pqt, pqUV, {\rho}t, {\rho}UV\}}$

star - $A^{\ast} = \{\epsilon, pq, \rho, pqpq, pq\rho, \rho pq, \rho \rho, pqpqpq, pqpq\rho, pq\rho pq, pq\rho \rho, \rho pqpq, \rho pq\rho, \rho \rho pq, \rho \rho \rho, \cdots\}$

**theorem 1**  The class of regular languages is closed under UNION $\cup$

- The union of two regular languages is a regular language

**theorem 2**  The class of regular languages is closed under CONCATENATION $\circ$

- The concatenation of two regular languages is a regular language

![img](./figures/00-ex.png)
