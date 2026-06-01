
int usuarios;
float tempo;
char alfabeto[26];
const a;

//classe de armazenamento:
auto tempo;
static int usuarios;
extern float tempo;
register char alfabeto[26];

//Especificadores ou modificadores de tipo:
short int; //para números inteiros menores
unsigned int carregamento;//guarda apenas valores positivos
long int sessoes; //aumenta a capacidade de armazenamento

+ - * / //operadores aritméticos
&& || ! //operadores lógicos
== != > < >= <= //operadores de comparação

//ordem de precedência dos operadores:
1. ()
2. * / 
3. + -
4. < > <= >=
5. == !=
6. &&
7. ||

//Expressões:

1. 5 + 3 * 2 //resultado: 11
2. (5 + 3) * 2 //resultado: 16
3. 10 > 5 && 3 < 4 //resultado: true (1)
4. 10 == 10 || 5 > 3 //resultado: true (1)
5. !(5 > 3) //resultado: false (0)

//operadores de atribuição:
= += -= *= /= %=