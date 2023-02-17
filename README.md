# Find first and last position of element in sortedarray

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.



Your submission must include the following:

## (7 points) Provide a screenshot of your solution getting accepted on Leetcode . 

![Problem Set](/successSolution.png)

### Additionally also provide us with your source code.

### Source Code [solution](/homework.c).

How would you now extend this implementation to find the sum of elements as mentioned in Problem 1 from Assignment 1.

- As we know the sequence of integers to search, I will only need to find each element with a binary search approach, therefore my time complexity will be O(log n) instead of the n that I suggested on that day. 
- If I found the position at which each integer will start then I can multiply the integer but the number of spaces it takes in the array. Thus, there is a guarantee that if we found the first element of the next element j, then we know j - 1 must be i; Then, i1, i2, i3 ..... i(j-1);



### (3 points) Explain the various ways you tried to solve this problem, telling us what worked and what did not work. Describe what insights you had as you eventually found a correct solution. Reflect on what you learned from struggling on this problem, and describe how the struggle itself was valuable for you. Additionally, reflect on any further ideas for improving your solution.


1) When I saw log n, I knew I need to use binary search to find the element, I created this using C, and probably there is more code than needed, but still it was pretty straigh forward, the only problem I had was deciding if I should just loop backwards and forward to find the range.  
2) There is not guarantee that binary search will provide the initial or the last element in the sequence. Therefore, I need to implement an extra step to return the first element in the sequence looping backwards. 
2) I tried to find the second element as well using binary search. But then I just realized it was only needed to find it once, and then loop backwards or forward to find the range. 
3) Not sure what else I can do to incremente the performanc of this algorithm. 

![Problem Set](/problem.png)


