**Theme:** Maths.

Let us take care of edge cases first:
+ $d=1$: $n$ is the required answer
+ $n>k$: In this case the researchers are overwhelmed by their colleagues and have no time to meet their friends, so the infection is contained within them, ie, $n$ is again the required answer.

So, we move forward with the assumption that $n\leq k$ and $d\geq2$. Let us denote new infections on the $i^{th}$ day by $x_i$.

A researcher meets $n-1(<k)$ colleagues in a day, and so, can meet $k-(n-1)$ friends. So, the total number of infections caused by the researchers directly is given by $x_2=n*(k-n+1)$. Thereafter, the a recursive relation can easily be realized, $x_{i+1}=x_i\cdot (k-1) \forall i\geq2$, as each non-researcher meets (k-1) other people than his/ her infectant. It is easy to see that this sequence forms an [A.P.](https://en.wikipedia.org/wiki/Arithmetic_progression) for $k=2$ and a [G.P.](https://en.wikipedia.org/wiki/Geometric_progression) for $k>2$.

Formulae for summing the terms is already available and can be used to obtain the answer.
An iterative solution (which iterates for the number of days) can be used but will lead to T.L.E. because of the constraints, hence, using a formula is better.
<br>
<br>
The answer for $k=2$ can be calculated in constant time, but for $k>2$, to prevent overflow, a custom function which uses binary exponentiation will prove to be useful.

**Time complexity:** $O(\log d)$ for each test case, which is fast enough.