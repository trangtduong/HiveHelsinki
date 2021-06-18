make re
make clean
echo $(./eval_expr "1 + 2 * 3 / 2 - 10") -6
echo $(./eval_expr "1") 1 
echo $(./eval_expr "1 + (10 % 2)") 1 
echo $(./eval_expr "5 - 1 + (1 * 8 / 2)") 8 
echo $(./eval_expr "10 / 3 + 5") 8 
echo $(./eval_expr "(1 + 2 * ((3*6)))") 37 
echo $(./eval_expr "((1))") 1
echo $(./eval_expr "1 + (2)") 3 
echo $(./eval_expr "-1 + 2") 1 
echo $(./eval_expr "-1 + (-2)") -3
echo $(./eval_expr "-1 + 2 *(-3) - 6 + (- 7)") -20
