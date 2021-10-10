### Given a fence with n posts and k colors, find out the number of ways of painting the fence such that at most 2 adjacent posts have the same color. Since answer can be large return it modulo 10^9 + 7.

```
Input : n = 2 k = 4
Output : 16
We have 4 colors and 2 posts.
Ways when both posts have same color : 4 
Ways when both posts have diff color :
4*(choices for 1st post) * 3(choices for 
2nd post) = 12

Input : n = 3 k = 2
Output : 6
```

```
diff = no of ways when color of last
        two posts is different
 same = no of ways when color of last 
        two posts is same
 total ways = diff + sum

for n = 1
    diff = k, same = 0
    total = k

for n = 2
    diff = k * (k-1) //k choices for
           first post, k-1 for next
    same = k //k choices for common 
           color of two posts
    total = k +  k * (k-1)

for n = 3
    diff = [k +  k * (k-1)] * (k-1) 
           (k-1) choices for 3rd post 
           to not have color of 2nd 
           post.
    same = k * (k-1) 
           c'' != c, (k-1) choices for it

Hence we deduce that,
total[i] = same[i] + diff[i]
same[i]  = diff[i-1]
diff[i]  = (diff[i-1] + diff[i-2]) * (k-1)
         = total[i-1] * (k-1)
```
