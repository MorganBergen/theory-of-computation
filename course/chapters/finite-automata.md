# finite automata

A finite automata has a set of states and its "control" moves from state to state in response to external "inputs".  One of the crucial distinctions among classes of finite automata is whether that control is "deterministic", meaning that the automaton cannot be in more than one state at one time, or "nondeterministic", meaning that it may be in several states simultaneously.

Adding nondeterminism does not let us define any language that cannot be defined by a deterministic finite automaton, but there can be a substantial efficiency in describing an application using a nondeterministic automaton.  Nondeterminism allows us to "program" solutions to problems using a higher-level language.  The nondeterministic finite automaton is then "compiled", by an algorithm we shall learn soon, into a deterministic automaton that can be "executed" on a conventional computer.

Extended nondeterministic automaton have the the additional choice of making a transition from one state to another spontaneously, i.e., on the empty string as "input".  These automata also accept nothing but the regular languages.  Regular languages are important to something called regular expression and are important in determining the equivalence to other automata.

The study of the regular languages will contain the algebraic notation known as regular expressions.  After discussing regular expressions, and showing their equivalence to finite automata, we will use both automata and regular expressions as tools to show certain properties of the regular languages.  These properties are the "closure" properties, which allow us to claim that one language is regular becasue one or other languages are known to be regular, and "decision" properties.  The latter are algorithms to answer questions about automata or regular expressions, e.g. whether two automata or expressions represent the same language.

## Deterministic Finite Automata

Let us present a formal notion of a deterministic finite automata.  The term deterministic refers to the fact that on each input there is one and only one state to which the automataton can transition from its current state.  In constrast, "nondeterministic" finite automata, can be in several states simultaneously.  The term "finite automataon" will refer to the deterministic variety, although we shall use "deterministic" or the abbreviation DFA normally, to remind the reader of which kind of automaton we are talking about.

A deterministic finite automaton is a quintuple $M = (Q, \Sigma, \delta, q_{0}, F)$ where

1.  A finite set of _states_ is denoted as $Q$.
2.  A finite set of _input symbols_ is denoted as $\Sigma$.
3.  A _transition function_ is denoted as $\delta$.
4.  A _start state_, denoted as $q_{0}$ is one of the states in $Q$.
5.  A set of _final_ or _accepting_ states $F$.  $$F \subseteq Q$$

$\delta$ takes arguments a state of an input symbol and returns a state.  $\delta(q, a)$ is the state that $M$ moves to when it is in state $q$ and reads input symbol $a$.  The transition function is defined for all pairs $(q, a)$ where $q \in Q$ and $a \in \Sigma$.

A deterministic finite automaton will often be referred to as a DFA.  The most succinct representation of a DFA is a listing of the five components above.  Known as having a five tuple notation:

$$M = (Q, \Sigma, \delta, q_{0}, F)$$

where $M$ is the name of the automaton, $Q$ is the set of states, $\Sigma$ is the set of input symbols, $\delta$ is the transition function, $q_{0}$ is the start state, and $F$ is the set of final states.

### how a DFA processes strings

The first thing we need to understand about a DFA is how the DFA decides whether or not to "accept" a sequence of input symbols.  The "language" of the DFA is the set of all strings that the DFA accepts.  Suppose $a_{1}, a_{2}, \dots , a_{n}$ is a sequence of input symbols.  We start out with teh DFA in its start state, $q_{0}$.  We consult the transition function $\delta$, say $\delta(q_{0}, a_{1}) = q_{1}$ to find the state that the DFA _$A$_ enters after processing the first input symbol $a_{1}$.  We process the next input symbol, $a_{2}$ by evaulating $\delta(q_{1}, a_{2})$; let us suppose this state is $q_{2}$.  We continue in this manner, finding states $q_{3}, q_{4}, \dots , q_{n}$ such that $\delta(q_{i-1}, a_{i}) = q_{i}$ for each $i$.  

**If** $q_{n} \in F$, 

**then** the input $a_{1}a_{2} \dots a_{n}$ is accepted

**else** the input $a_{1}a_{2} \dots a_{n}$ is rejected

### example

Let us formally specify a DFA that accepts all and only the strings of 0's and 1's that have the sequence 01 somewhere in the string.  We can write this language $L$ as:

$$L ::= \{{w | \text{w is of the form x01y for some strings x and y consisting of 0's and 1's}}\}$$

Another equivalent description of $L$ is, using parameters $x$ and $y$ to the left of the vertical bar, is:

$$L ::= {x01y | x \text{ and } y \text{ are strings of 0's and 1's}}$$

We can now specify the DFA $M$ that accepts $L$:

$$M = (Q, \Sigma, \delta, q_{0}, F)$$

where $Q = \{q_{0}, q_{1}, q_{2}, q_{3}\}$, $\Sigma = \{0, 1\}$, $q_{0}$ is the start state, and $F = \{q_{3}\}$.  The transition function is defined as follows:

$$\delta(q_{0}, 0) = q_{0}$$
$$\delta(q_{0}, 1) = q_{1}$$
$$\delta(q_{1}, 0) = q_{2}$$
$$\delta(q_{1}, 1) = q_{1}$$
$$\delta(q_{2}, 0) = q_{2}$$
$$\delta(q_{2}, 1) = q_{2}$$
$$\delta(q_{3}, 0) = q_{3}$$
$$\delta(q_{3}, 1) = q_{3}$$

Therefore the complete specification of the automataon $M$ is:

$$M = (\{q_{0}, q_{1}, q_{2}, q_{3}\}, \{0, 1\}, \delta, q_{0}, \{q_{3}\})$$

where $\delta$ is defined as above.

### simpler notations for DFAs

Specifying a DFA as a five-tuple with a detailed description of the transition function is not very convenient.  We can use a more compact notation.  The transition function $\delta$ can be represented as a table.  The rows of the table are the states of the automaton, and the columns are the input symbols.  The entry in the row for state $q$ and the column for input symbol $a$ is the state $\delta(q, a)$.

1.  A _transition diagram_ is a graphical representation of a DFA.  The states are represented as circles, and the input symbols are represented as arrows.  The transition diagram for the DFA $M$ is shown below.  

2.  A _transition table_ is a tabular listing of the $\delta$ function.  Which by implication tells us the set of states and the input alphabet.

**Transition diagram for DFA $M$**

A transition diagram for the DFA $M$ is shown below.  The states are represented as circles, and the input symbols are represented as arrows.  The transition diagram for the DFA $M$ is shown below.

a)  For each state in $Q$ there is a node

b)  For each state $q$ in $Q$ and each input symbol 
