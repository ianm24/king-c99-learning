basic programming stuff (functions, variables, constants, comments)
source to executable follows 3 steps
- Preprocessing
	- runs any directives (statements starting with `#`) that modify the source code.
- Compiling
	- creates object code
- Linking
	- links the necessary libraries and functions with the object code for it to be able to run.

with GCC for C99:
- `gcc -std=c99 -o output_exec_filename source.c`

general form of C program
```
*directives*

int main(void)
{
	*declarations*
	*statements*
}
```

main returning 0 is saying the program ended normally.
void used to say there are no input arguments

best to append `f` to the end of a number if setting a float variable to said number.
Otherwise it will be treated as a double

with printf, use `%d` for int, `%f` for float (by default shows 6 digits, otherwise use `%.pf` to show p digits
- `printf("val1: %d\n val2: %.2f\n", val1, val2);`

for numeric input, use scanf
- `scanf("%d", &i); // reads integer stores into i`
- `scanf("%f", &x); //reads a float value, stores into x`

macro definitions
- `#define CONSTANT_NAME {val}`
- if there are operators, the macro definition value should be enclosed in parentheses

keywords:
```
auto		enum		restrict*	unsigned
break		extern		return		void
case		float		short		volatile
char		for		signed		while
const		goto		sizeof		_Bool*
continue	if		static		_Complex*
default		inline*		struct		_Imaginary*
do		int		switch
double		long		typedef
else		register	union

* were added in C99
```

as long as tokens arent combined into other tokens and directives are each on their own line, you can put as much or as little whitespace between them, meaning making a long line into 2 shorter lines is trivial
Also cant split string literals into multiple lines

identifiers can be up to 63 characters long in C99

do remaining exercises and projects
