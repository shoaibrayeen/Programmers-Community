# Closest pair of number distance problem
In this problem among all the pair of numbers(or points) given we need to find the smallest distance.
# Solution
One of the way is brute force where we calculate distance between all points and return the minimum value,which isn't an efficient way.

Second way is divide and conquer whose steps are as follow:

1.Sort all points according to x coordinate.

2.Divide the arrays in two parts and find the minimum distance in both halves.

3.Store the minimum of the two minimum distances.

4.Collect all the points which lie at the distance less than the minimum distance in both halves and sort them according to their y coordinates.

5.Find the minimum distance and if the distance is less than the stored minimum value replace it.

6.Print the minimum distance.
