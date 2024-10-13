the `%` values in printf are conversion specifications that tell the printer how to convert binary expression data into a string
c compilers arent required to check the number of specifications and expressions in printf nor that the data types match, be careful

general form of conversion specification:
`%m.pX` or `%-m.pX`
- where `m` and `p` are integers and `X` is a letter
- if `p` is omitted, the period is also omitted
- `m` is the minimum field width, if output too short, it is right-justified with whitespace to meet the minimum
- `-` causes left-justification
- `X` is the conversion specifier, common numeric specifiers are:
  - d for integer in base 10
  - e for floating-point number in exponential/scientific notation
  - f displays floating-point number in fixed decimal format without exponent
  - g displays a floating-point number either in exponential or fixed decimal format depending on number's size
- `p` is precision and depends on `X
  - d has it determine the min number of digits to display (0s added to the beginning to fit this). if p omitted, it is assumed to be 1
  - e has it determine num digits to appear after decimal point (default 6). if p=0, no decimal point displayed
  - f uses it the same as e
  - g has it determine the number of significant digits to be displayed. doesnt show trailing zeros, if no digits after decimal, doesnt display decimal point

some escape sequences
- `\a` Alert (beep)
- `\b` Backspace
- `\n` New line
- `\t` Horizontal tab
- `\"` Double quote
- `\\` Backslash
- `%%` Percent sign

scanf typically only has conversion specifications. if there are multiple, inputs should be separated but technically dont always need to be (`1-20.3-4.0e3` with scanf `%d%d%f%f` parses `1`, `-20`, `0.3`, `-4.0e3`)
make sure to use & for variables in the scanf call so that it has access to a pointer to the variable rather than the value itself
if any item in scanf is not read successfully, it will return without parsing the rest of the string
the final newline character of scanf input is peaked at but not read, as to keep it as the first input character of the next scanf call

`%e`,`%f`,`%g` are interchangeable with scanf
whitespace in a format string matches any number of whitespace characters

`%i` is same as `%d` in printf, but in scanf it can be int in base 8,10,16
- normal int is base 10
- start with 0 (`056`) is base 8 (octal)
- start with 0x (`0x56`) is base 16 (hexadecimal)


