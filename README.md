# HiveHelsinki

D00
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: KO

D01
ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK

D02
ex00: OK | ex01: OK | ex02: Does not compile (fixed)| ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: Does not compile (typo in function name, fixed)

D03
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK | ex09: Does not compile (typo in file name, fixed)

D04
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK | ex09: OK

D05
ex00: OK | ex01: OK | ex02: KO (fixed) | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: KO | ex08: OK | ex09: OK | ex10: OK | ex11: OK | ex12: OK | ex13: OK | ex14: OK | ex15: OK | ex16: OK | ex17: OK | ex18: KO | ex19: OK | ex20: OK | ex21: KO | ex22: OK | ex23: KO

D06
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK

D07
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: KO | ex07: Segmentation fault (fixed)

D08
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: Norme error | ex06: Norme error (fixed: put prototypes to header files)

D10
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: KO (should use Bubble sort, the question doesn't mention stable sort, but Moulinette want a stable sort (: )| ex09: KO (there is extra space when printing error message, not fix yet)

D11
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: KO (question as for Nth element, but actually want (N+1)th element (aka element at index N)| ex08: OK | ex09: OK | ex10: OK | ex11: OK | ex12: OK | ex13: OK | ex14: OK | ex15: Segmentation fault (this one is different from ex08 by a * in the prototype :). fixed) | ex16: OK | ex17: OK

D12
ex00: OK | ex01: OK | ex02: Nothing turned in | ex03: Nothing turned in | ex04: Nothing turned in

D13
ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: Nothing turned in | ex09: Nothing turned in

Match-N-match
ex00: OK | ex01: OK

Sastantua
ex00: OK

Rush00/Rush01/Rush02
OK

EvalExpr
Failed because of using forbidden function (fixed. I forgot to remove include <stdio.h> in main.c after debugging)

BSQ
Fixed. We failed because we put the temporary file inside srcs folder. When the program is copying to testing environment, there is no srcs folder, so the program failed to create the tmp file.
