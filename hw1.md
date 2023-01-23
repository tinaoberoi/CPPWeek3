## In slide 30, we mentioned that overloads of operator+= can be either class member functions or global functions. Which one do you think is better and why?

In this case of `operator +=` its better to use global functions because of the following two reasons:


- Left hand side is the one that does the operation, so `obj + j `will look for `+` overloading in obj whereas `2 + obj` it wont work. For these friend/global functions are heloful in overloading operators. 
Thus if we have member function then `obj += 2` will work, but `2 += obj` wont. Thus we should implemenet global function here using friend.

- I would not want to make changes in int `+=` function and better make changes to my obj operator ovrloading function.