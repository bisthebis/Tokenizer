** Mathematical Grammar **

Symbol = [a-zA-Z+-/*=]+
Digit = [0-9]
Number = Digit+
UnaryOp = Symbol Expression
BinaryOp = Expression Symbol Expression
Expression = Number | Symbol | UnaryOp | BinaryOp

