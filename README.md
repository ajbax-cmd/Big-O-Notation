# Big-O-Notation

![Meme-BigOspeak](Images/Meme-BigOspeak.jpg)

## Table of contents
* [What is Big O Notation](#What-is-Big-O-Notation )
* [Asymptotic Growth and the Formal Mathematical Definition of Big O](#Asymptotic-Growth-and-the-Formal-Mathematical-Definition-of-Big-O)
* [Types of Time Complexity](#Types-of-Time-Complexity)
* [Analyzing Algorithms to Determine Big O](#Analyzing-Algorithms-to-Determine-Big-O)
* [Why Bother with Big O](#Why-Bother-with-Big-O)
* [Sources](#Sources)

## What is Big O Notation
Big O notation is used in Computer Science to describe the performance of an algorithm, usually for the worst-case scenario. More specifically, Big O notation evaluates the efficiency of an algorithm as the number of input items, usually represented by the variable n, approaches infinity. Big O was first introduced by Paul Bachmann in 1894 and later popularized by Edmund Landau and others (Graham, et al., 443). It gets its name from the literal "Big O" in front of the estimated asymptotic rate of growth. Big O notation doesn't tell the speed of the algorithm in seconds as there are too many factors that influence the time an algorithm takes to run on any given hardware, but it does indicate how fast an algorithm’s runtime grows as input size grows and will allow for comparisons to be made with other algorithms regarding efficiency. Asymptotic analysis provides the means to assess the performance of an algorithm as input values grow and make these comparisons.

## Asymptotic Growth and the Formal Mathematical Definition of Big O
Asymptotic growth refers to the growth rate of a function as the independent variable approaches a limit that it will never reach. If f(n)  is a function representing the number of operations an algorithm must perform for n  number of inputs, then how fast the slope of f(n)  increases as n approaches infinity is what is examined to determine asymptotic growth. This is what Big O notation is concerned with, the parts of the function that affect the growth rate as n approaches infinity. This allows for the elimination of constants and variables with smaller exponents, which is why big O notation doesn’t use constants and normally consists of a single variable.

To illustrate this more mathematically, consider two functions:

![equation1](Images/equation1.JPG)

Clearly, f(n) will always have a larger output than g(n) when n is positive, however, it is possible to multiply g(n) by some constant so that after a certain point, it is always greater than f(n). Since f(n) has a constant, it will always be greater than g(n) when n is 0 therefore the domain should be restricted to 1 or greater.

![equation2](Images/equation2.JPG)

Solving for c  gives us:

![equation3](Images/equation3.JPG)

Since the variables are all in the denominator, the highest possible value on the right side of the inequality occurs when n is 1 and decreases as n increases (larger denominator means a smaller fraction). Solving the inequality when n=1 gives us:

![equation4](Images/equation4.JPG)

Thus, when c is greater than 7, the inequality n^2+3n+3 <n^2* c    (n≥1) is true. Figure 1 below displays the graph of n^2+3n+3 (blue) and 8n^2 (red). As the graph shows, f(n) is bounded above by g(n)*8 for n≥1. What this means is that once n≥1, f(n) will never be greater than g(n)*8 which implies that its rate of growth will never exceed g(n)*8. 



## Types of Time Complexity

## Analyzing Algorithms to Determine Big O

## Why Bother with Big O

## Sources