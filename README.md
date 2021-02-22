# CS372HW3
About C++11 Lambda Function

In C++11, Lambda expressions provide a feature similar to anonymous functions. \n
Anonymous functions are basically used when we need a function but don't want to name it.\n
// []: Does not capture any external variables \n
// [=]: Captures all external variables by values \n
// [&]: Captures all external variables by reference \n
// [x, &y]: x is captured by value, y is captured by reference \n
//[=, &z]: z is captured by reference, and other variables are captured by value \n
//[&, x]: x is captured by value, and the remaining variables are captured by reference \n
