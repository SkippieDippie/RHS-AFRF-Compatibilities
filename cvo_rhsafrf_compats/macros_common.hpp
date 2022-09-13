#define QUOTE(var) #var

#define DOUBLES(var1,var2) var1##var2

#define TRIPLES(var1,var2,var3) var1##var2##var3

#define MULTIPLY(var1,var2) __EVAL(var1 * var2)
