/* Command to display current time on linux with milliseconds and nanoseconds */

 date +%3N:%N // this will print Hour:Minutes:Seconds:Milliseconds:Nanoseconds
 
 
 
 /* 
 Why inline function needs static storage class ?
 
 Function declared with static class will make it locally visible only i.e same source file only.
 Function declared with inline tells compiler to generate the code for the function's block right where the function is called.
 So static inline funciton is used to make it invisible , normally used for very small ,simple and frequently called helper function.
 
 */
 
   
