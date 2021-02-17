Power 2.0
---------

ATTENTION:
----------

Big values in the variable

  p
  
may cause the processor of your system to heat up and get damaged.

USE OF THIS PROGRAM AT OWN RISK!!


This program is not intended to control electrical power inside the circuits of the computer as it could be considered by the name.

Instead it calculates arbitrary powers to a given number.


1  double i,p,r;int main(){r=i;while(p>1){r=r*i;
2  --p;}
3  }

The "int" in the code above was necessary to get it compiled on Windows systems.

The result has to be examined with a debugger.

First set a breakpoint at the line 1.

Set another breakpoint at line 3 to prevent the program from simply terminating and letting you examine the variable r with the result of the calculation.

Run the program.

When the program stops, set the variable

  i to the number that has to be powered 
	
  p to the power that has to be used.
  
  
For example setting i to 3 and p to 4, the calculation will be

  3 * 3 * 3 * 3
  
with the result of 81.

Continue the program.

Then examine the result in variable r.

Continue the program to let it terminate.




Version history:
----------------

Version 2.0

Added the possibility to calculate arbitrary powers to numbers;
Not only sqare- powers.


Version 1.0

Initial version.