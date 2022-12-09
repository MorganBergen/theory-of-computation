# regular languages

**contents**

1.  [intro](#intro)


## intro

A regular language is a language that can be described by a regular expression and can be recognized by a finite state machine.  Regular expressions are a powerful tool for describing languages, but they are not the only way to describe languages.  For example, the language of all strings of 0s and 1s that contain an equal number of 0s and 1s can be described by the regular expression `0*1*`, but it can also be described by the following grammar:

    S -> 0S1 | 1S0 | 0 | 1

In order to first explore the properties of regular lanuages we must explore the ways in which one can prove that a certain language is not regular.  This theorem is called the pumping lemma.  

One important kind of fact about regular 

