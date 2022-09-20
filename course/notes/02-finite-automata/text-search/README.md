

# How does a search engine work?
> An explaination of inverted-index techniques

The abstract study of Non-Deterministic Finite Automata where...

$N = (Q_n, w \in \Sigma := \{ 0, 1 \}, \delta_n, q_0, F_n)$

$L(N) = L(D) $       where $L \subseteq \Sigma^* $

... is an execellent model for the extraction of information from text.  

In autoata theory, a _problem_ is a question of decidibility, whether a given string is a member of some particular language.  It turns out, that anything more colloquially call a "problem" can be expressed as membership in a language.  More precisely, if $\Sigma$ is an alphabet, and $L$ is a language over $\Sigma$, then the problem $L$ is:

> Given a string $w \in \Sigma^*$, decide whether or not $w \in L$

A process that is most commonly applied in search engines is the process whereby given a set of words, find all documents thatr contain one of those words.  

A search engine uses a particular technology called _inverted indexes_, where for each word appearing on the Web (there are 100,000,000 different words), a list of all the places where that word occurs is stored.  Machines with very large amounts of main memory keep the most common of these lists readily available, allowing many people to earch for documents at once.  

Inverted-index techniques do not make use of finite automata, but they also take very large amounts of time for crawlers to copy the web and set up the indexes.  There are a number of related applications that are unsuited for inverted indexes, but are good applications for automaton-based techniques.  The characteristics that make an application suitable for searches that use automata theory are:

The repository on which the search is conducted is rapidly changing, ex:

A shopping robot wants to search for the current prices charged for items that its clients request.  The robot will retrieve 