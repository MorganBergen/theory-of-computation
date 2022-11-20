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

**$\star$ kleene star**

The _closure_ or _star_ or _kleene closure_ or a language $L$ is denoted as $(L^{*})$ and is the set of all strings that can be formed by concatenating zero or more strings from $L$.  

For example, 

`if` $L = \{001, 10, 111\}$

`then` $(L^{*}) = \{\epsilon, 001, 10, 111, 001001, 10001, 111001, 001001001, \\ 10001001, 111001001, 001001001001, 10001001001, 111001001001, 001001001001001, \\ 10001001001001, 111001001001001, 001001001001001001, 10001001001001001, \dots\}$

$L$* represents the set of those strings can be 
