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

![Graph-BigO-bounding](Images/Graph-BigO-bounding.JPG)

Because 8 is a constant, it has no effect on the asymptotic growth of 8n^2. The 8 is not causing the change in slope to accelerate as n increases, the n^2 is. Therefore, the asymptotic rate of growth for 8n^2 is just n^2and because f(n) is contained by 8n^2, it too has asymptotic rate of growth of n^2. In terms of Big O, it can be said that f(n) is in Big O of g(n). The Big O notation for f(n) would therefore be O(n^2).
With a rudimentary understanding of asymptotic growth at hand, a formal mathematical definition for Big O notation becomes more tangible to understand:

>Let T(n) and f(n) be two positive functions. We write T(n) ∊ O(f(n)) and say that T(n) has order of f(n), if there are positive constants M and n₀ such that T(n) ≤ M·f(n) for >all n ≥ n₀. Where T(n) ∊ O(f(n)) means that T(n) doesn`t grow faster than f(n). The graph below shows that all the conditions in the definition are met (“Big O notation: definition and examples” ). 



## Types of Time Complexity

## Analyzing Algorithms to Determine Big O

## Why Bother with Big O

## Sources
Nickels, Megan, et al. “Computer Programming: Algorithm for Mathematics Exploration!” Elementary STEM Journal, vol. 23, no. 2, Dec. 2018, pp. 14–17. EBSCOhost, search-ebscohost-com.ezproxy.hacc.edu/login.aspx?direct=true&db=f5h&AN=143868392&site=ehost-live&scope=site.

GRANT, ANDREW. “Computer Algorithm Masters Poker.” Science News, vol. 187, no. 3, Feb. 2015, p. 14. EBSCOhost, doi:10.1002/scin.2015.187003016.

Sumser, Audrey. “Collaboration in Computer Science: Working Together/Using Pseudocode: Instructions in Plain English/Algorithms: The Building Blocks of Computer Programming….” School Library Journal, Oct. 2018, pp. 34–35. EBSCOhost, search-ebscohost-com.ezproxy.hacc.edu/login.aspx?direct=true&db=f5h&AN=132770052&site=ehost-live&scope=site.

“Big O Notation” Wikipedia, Wikimedia Foundation, 8 November, 2021, https://en.wikipedia.org/wiki/Big_O_notation 

Dedov, Florian. The Bible of Algorithms and Data Structures: A Complex Subject Simply Explained (Runtime Complexity, Big O Notation, Programming). NeuralNine, 2020

Graham, Ronald, et al. Concrete Mathematics: A Foundation for Computer Science. Addison-Wesley, 1998

Briggs, William, et al. Single Variable Calculus. Pearson Education, Inc., 2015.

Blitzer, Robert. Precalculus. Pearson Education, Inc., 2014.

“Big O notation: definition and examples.” yourbasic.org, https://yourbasic.org/algorithms/big-o-notation-explained/

