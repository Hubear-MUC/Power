Power 3.0
---------

This program is not intended to control electrical power inside the circuits of the computer as it could be considered by the name.

In version 3.0 user interaction was implemented so no debugger has to be used anymore for just working with the program.

This was done with the previous mathematical programs, so it should also be done with this one.

Just invoke the program.

It will ask you for the number to power and the exponent to do so.

After the calculation the result is shown on the screen (terminal window) and the program terminates.

Caution: 
--------

With big numbers and exponents the data type double might get exceeded, in that case  "inf"  or something similar will be shown as result.
However this depends on the runtime of your system.

The system might be caused to hang with big numbers and/or big exponents or the loop for calculating the power can run for long time making the processor of your system work heavily, depending on the architecture of your system.

Also exponents with non- integer- numbers are not supported yet even the data type double is used for the exponent.

For example if

  2 ^ 8
  
is calculated, the result will be  256.

If however

  2 ^ 8.125
  
is given to the program, it will calculate  512  as result, wich is not correct.

So do not use numbers with components after the dot, because the results will not be correct.

There was not enough code space left to implenent this correctly yet.






Version history:
----------------

Version 3.0

Implementation of user interaction so no debugger is necessary anymore when just working with the program.


Version 2.1

Redesign of the code to make it (a lot) more readable and maintainable.


Version 2.0

Added the possibility to calculate arbitrary powers to numbers;
Not only sqare- powers.


Version 1.0

Initial version.