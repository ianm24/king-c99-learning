Arithmetic Operators
- unary
    - `+` unary plus
    - `-` unary minus
- binary
    - additive
        - `+` addition
        - `-` subtraction
    - multiplicative
        - `*` multiplication
        - `/` division
        - `%` remainder

unary operator used to emphasize a numeric constant's positivity or negativity


binary arithmetic operators are left associative. unary arithmetic operators are right associative.

in C, = (assignment) is an operator
it is also the first operator we see that does more than compute a value (it sets the left operand equal to the computation of the right operand
the left operand must also be an "L-value" which as far as we know, is just variables

4 of the compound assignment operators are `+=`, `-=`, `*=`, and `%=`

increment and decrement operators can be prefix or postfix
- prefix yeilds i +/- 1 then sets i equal to it
- postfix yeilds i then increments i

operator precedence:
- Highest:  `++` `--` (postfix) (left associative)
-           `++` `--` (prefix) `+` `-` (unary) (right associative)
-           `*` `/` `%` (left associative)
-           `+` `-` (binary) (left associative)
- Lowest:   `=` `*=` `/=` `%=` `+=` `-=` (right associative) 

