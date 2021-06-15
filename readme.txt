Power 2.1
---------

This program is not intended to control electrical power inside the circuits of the computer as it could be considered by the name.

Instead it calculates the powers to a given number.


1   double i,p,r;
2
3   main(){
4   r=i;
5   while(p>1)
6   {
7   r=r*i;
8   --p;
9   }
10  }


The result has to be examined with a debugger.

First set a breakpoint at the line 1.

Set another breakpoint at line 10 to prevent the program from simply terminating and letting you examine the variable r with the result of the calculation.

Run the program.

When the program stops, set the variable

  i to the number that has to be powered (Variable name "i" for "input")
	
  p to the power that has to be used.
  
  
For example setting i to 3 and p to 4, the calculation will be

  3 * 3 * 3 * 3
  
with the result of 81.

Continue the program.

Then examine the result in variable r.

Continue the program to let it terminate.

Attention: Big values for the variable

  p
  
will cause the while- loop in the program run a big amount of turns. This could heat up you processor and cause damages.




Version history:
----------------

Version 2.1

Redesign of the code to make it (a lot) more readable and maintainable.


Version 2.0

Added the possibility to calculate arbitrary powers to numbers;
Not only sqare- powers.


Version 1.0

Initial version.