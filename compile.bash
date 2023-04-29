echo "Compiling"
yacc -d parser.y
lex tokenizer.l
gcc lex.yy.c y.tab.c main.c ./util/token.c ./util/symbol.c ./util/AST.c ./util/map.c ./backend/backend.c ./backend/ir.c ./backend/irgen.c ./backend/built-in-functions.c ./vm/vm.c -o compiler -lm
if [ $# -eq 0 ]
  then
    echo "Compiled"
  else
    ./compiler $1
fi