## **Contagion**
A new virus CaRS 91-C is spreading throughout the city of Radiator Springs. Every person in the city has $k$ **fixed** friends. 

There are only $n$ researchers in the city hospital. On the first day, all of them get infected by the virus. The researchers being busy, consider all their colleagues, friends too. If they have less than $k$ colleagues, they meet their old friends everyday. In the process, these friends get infected the next day. When these friends meet their remaining friends, they get infected the following day too, and so on.

The government wants to know how many people will be infected on the $d^{th}$ day. Can you help them?
Assume that the friend groups of non-researchers are disjoint.

### **Input**
The first line contains a single integer $t$ $(1\leq t\leq 10^5)-$ the number of testcases.

Each testcase has three integers $n, k, d$ $(1\leq n, k\leq2\cdot10^5, 1\leq d\leq10^7)$, the number of researches infected, the number of friends everyone has, and the day of interest to government, respectively.


### **Output**
For each test case, print a single integer in a separate line — the number of infected people upto and including $d^{th}$ day.

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
Let us denote the number of people infected upto and including the $d^{th}$ day by $n_d$.

For sample input 1, $n_1=1$. On the second day, since he has no colleagues, he meets $k=4$ old friends and they get infected, so that $n_2=1+4=5$. On the third day, the researcher meets the same friends again, but these friends further meet $3$ people more, so, $n_3=5+4\cdot3=17$.

For sample input 2, each researcher has $2$ colleagues, and further meets $3$ older friends $\Rightarrow n_2=12$. The friends each meet $4$ other people, so $n_3=48$.