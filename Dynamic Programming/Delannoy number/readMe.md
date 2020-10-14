### In mathematics, a Delannoy number D describes the number of paths from the southwest corner (0, 0) of a rectangular grid to the northeast corner (m, n), using only single steps north, northeast, or east.

```
D(M,N) = 1                                                    if M = 0 || N = 0
D(M,N) = D(M-1 , N) + D( M , N -1 ) + D( M - 1 , N - 1 )      otherwise
```
