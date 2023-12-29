# a s triangle
Algorithm: Calculate and print the perimeter and area of a triangle
- Start
- Declare four float variables: a, b, c, and d
- Read a, b, and c from the user input (the lengths of the sides of the triangle)
- If the sum of any two sides is not greater than the third side, then
  - print "cannot create triangle"
  - Exit the program
- print "mohit=" followed by the value of (a+b+c) (the perimeter of the triangle)
- Set d to (a+b+c)/2 (the semi-perimeter of the triangle)
- print "area=" followed by the value of $$\sqrt{d(d-a)(d-b)(d-c)}$$ (the area of the triangle using Heron's formula)
- End

-----------------

# binary search in fun
Algorithm: Search for a value x in a sorted array a of 10 numbers using binary search (recursive version)
- Start
- Define a constant named n with the value 10
- Declare three integer variables: a[n], x, and result
- Read 10 numbers from the user input and store them in the array a
- print "enter x:"
- Read x from the user input
- Call the function bsearch with the parameters 0, n-1, and x, and store the return value in result
- If result is equal to 1, then
  - print "found"
- Else
  - print "not found"
- End

Function: bsearch (takes three integer parameters: low, high, and x)
- Declare one integer variable: mid
- Set mid to (low+high)/2 (the middle index of the search range)
- If low is greater than high, then
  - Return 0 (x is not found in the array)
- Else if x is equal to a[mid], then
  - Return 1 (x is found in the array)
- Else if x is less than a[mid], then
  - Return the value of bsearch with the parameters low, mid-1, and x (recursively search in the left half of the array)
- Else
  - Return the value of bsearch with the parameters mid+1, high, and x (recursively search in the right half of the array)
- End function

--------------------

# digit counter
Algorithm: Count the number of digits in a  integer
- Start
- Declare two integer variables: n and a
- Read n from the user input
- Set a to 0 (a variable to store the count of digits)
- Repeat the following steps until n is equal to 0
  - Increase a by 1
  - Set n to n divided by 10 (remove the last digit of n)
- Return the value of a
- print "the count is: " followed by the value of count(n) (the number of digits in n)
- End

----------------------

# power
Algorithm: Calculate and print the power of a number
- Start
- Declare four integer variables: x, y, i, and j
- Read x and y from the user input (x is the base and y is the exponent)
- Set j to 1 (j is the variable to store the result)
- Set i to 1
- Repeat the following steps until i is greater than y
  - Set j to j times x (multiply j by x y times)
  - Increase i by 1
- print the value of j (the power of x raised to y)
- End
