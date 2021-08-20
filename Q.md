## **Contagion**
A new virus CaRS 91-C is spreading throughout the city of Radiator Springs. Every person in the city has _k_ **fixed** friends. 

There are only _n_ researchers in the city hospital. On the first day, all of them get infected by the virus. The researchers being busy, consider all their colleagues, friends too. If they have less than _k_ colleagues, they meet their same old friends everyday. In the process, these friends get infected the next day. When these friends meet their remaining friends, they get infected the following day too, and so on.

The government wants to know how many people will be infected on the _d<sup>th</sup>_ day. Can you help them?
Assume that the friend groups of non-researchers are disjoint.

### **Input**
The first line contains a single integer _t_ _(1 &le; t &le; 10^5)_ — the number of testcases.

Each testcase has three integers _n, k, d_ _(1 &le; n, k &le; 2&sdot;10^5, 1 &le; d &le; 10<sup>7</sup>)_, the number of researches infected, the number of friends everyone has, and the day of interest to government, respectively.


### **Output**
For each test case, print a single integer in a separate line — the number of infected people upto and including _d<sup>th</sup>_ day.

### **Example**

| Input |
---
```
2
1 4 3
3 5 3
```
| Output |
---
```
17
48
```


### **Explanation**
Let us denote the number of people infected upto and including the _d<sup>th</sup>_ day by _n<sub>d</sub>_.

For sample input 1, _n<sub>1</sub>=1_. On the second day, since he has no colleagues, he meets _k=4_ old friends and they get infected, so that _n<sub>2</sub>=1+4=5_. On the third day, the researcher meets the same friends again, but these friends further meet _3_ people more, so, _n<sub>3</sub>=5+4*3=17_.

For sample input 2, each researcher has _2_ colleagues, and further meets _3_ older friends _&rArr; n_2=12_. The friends each meet _4_ other people, so _n<sub>3</sub>=48_.