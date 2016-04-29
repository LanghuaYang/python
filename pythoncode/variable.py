Python 3.5.1 (v3.5.1:37a07cee5969, Dec  6 2015, 01:54:25) [MSC v.1900 64 bit (AMD64)] on win32
Type "copyright", "credits" or "license()" for more information.
>>> print('hello')
hello
>>> i = 8
>>> j = i
>>> print(j)
8
>>> k
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    k
NameError: name 'k' is not defined
>>> k = 'hello'
>>> k = 12345678
>>> print(k)
12345678
>>> l = 2.454646457
>>> l = 52.3E-4
>>> print(l)
0.00523
>>> k = 2.3 + 4j
>>> print(k)
(2.3+4j)
>>> g = 2.3-4.6j
>>> print(g)
(2.3-4.6j)
>>> print()j
SyntaxError: invalid syntax
>>> print(j)
8
>>> k = 2.3+4*j
>>> print(k)
34.3
>>> m = 'nnnnnnn\'
SyntaxError: EOL while scanning string literal
>>> 
=== RESTART: C:/Users/Acer/AppData/Local/Programs/Python/Python35/test.py ===
shifwgweghjdhqetgerhrhrfgnhfgngmgh
>>> i = 2.3 + 4j
>>> i.real
2.3
>>> i.imag
4.0
>>> i.conjugate
<built-in method conjugate of complex object at 0x0000023D0C1CA0B0>
>>> import math
>>> i.conjugate
<built-in method conjugate of complex object at 0x0000023D0C1CA0B0>
>>> abs(i)
4.6141087980237305
>>> s = r'test\tetst\test/stehhserhrh'
>>> s
'test\\tetst\\test/stehhserhrh'
>>> 'what\'s''your name'
"what'syour name"
>>> '\\l'
'\\l'
>>> r'\1'
'\\1'
>>> 123a = 1
SyntaxError: invalid syntax
>>> _aint = 2
>>> test-case = 3
SyntaxError: can't assign to operator
>>> 
