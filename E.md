**Theme:** Maths.

Let us take care of edge cases first:
+ _d=1_: _n_ is the required answer
+ _n>k_: In this case the researchers are overwhelmed by their colleagues and have no time to meet their friends, so the infection is contained within them, ie, _n_ is again the required answer.

So, we move forward with the assumption that _n &le; k_ and _d &ge; 2_. Let us denote new infections on the _i<sup>th</sup>_ day by _x<sub>i</sub>_.

A researcher meets _n-1(<k)_ colleagues in a day, and so, can meet _k-(n-1)_ friends. So, the total number of infections caused by the researchers directly is given by _x<sub>2</sub>=n*(k-n+1)_. Thereafter, a recursive relation can easily be realized, _x<sub>i+1</sub>=x<sub>i</sub>*(k-1) &forall; i &ge; 2_, as each non-researcher meets _(k-1)_ people other than his/ her infectant. It is easy to see that this sequence forms an [A.P.](https://en.wikipedia.org/wiki/Arithmetic_progression) for _k=2_ and a [G.P.](https://en.wikipedia.org/wiki/Geometric_progression) for _k>2_.

Formulae for summing the terms is already available and can be used to obtain the answer.
An iterative solution (which iterates for the number of days) can be used but will lead to T.L.E. because of the constraints, hence, using a formula is better.
<br>
<br>
The answer for _k=2_ can be calculated in constant time, but for _k>2_, to prevent overflow, a custom function which uses binary exponentiation will prove to be useful.

**Time complexity:** _O(log d)_ for each test case, which is fast enough.