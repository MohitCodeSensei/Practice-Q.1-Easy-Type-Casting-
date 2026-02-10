// Question 1: The Precision Trap (Level: Easy)
// Predict the output of the following code without running it. Explain why the result of result1 and result2 are different.

// C++
int a = 7, b = 2;
float result1 = a / b;
float result2 = (float)a / b;

cout << "Result 1: " << result1 << endl;
cout << "Result 2: " << result2 << endl;
// Focus: Understanding Integer Division vs. Type Casting.

//Answer:
// Result 1 (3): int / int throws away the decimal.

// Result 2 (3.5): float / int keeps the decimal.
