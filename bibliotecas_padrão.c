#include <stdio.h>

/*Define algumas estruturas e variáveis globais essenciais para o funcionamento do código.*/

return -1;//EOF - Significa End Of File. É um número (geralmente -1) retornado pelas funções para avisar que o arquivo acabou ou ocorreu um erro de leitura.
NULL//O ponteiro nulo. Indica que um ponteiro não está apontando para lugar nenhum (ex: quando um arquivo não é encontrado).

FILE//Um tipo de estrutura (struct) que guarda as informações de um arquivo aberto (posição atual, erros, etc.).

size_t//Um tipo de número inteiro sem sinal usado para representar o tamanho de objetos na memória (muito usado com vetores[] e malloc()).

'stdin, stdout 'e' stderr'//São ponteiros automáticos para o teclado (entrada), a tela (saída) e a tela de erros, respectivamente.

/*São as funções que usam as máscaras como %d, %f, %s para formatar textos e variáveis.*/

printf();//Imprime dados formatados na tela do terminal.
scanf();//Lê dados formatados digitados pelo usuário no teclado.
fprintf();//Funciona como o printf, mas escreve os dados dentro de um arquivo de texto em vez da tela.
fscanf();//Funciona como o scanf, mas lê os dados de dentro de um arquivo de texto.
sprintf();//Em vez de imprimir na tela, ele "imprime" o texto formatado dentro de uma variável (um vetor de char / string).
sscanf();//Lê e extrai dados formatados de dentro de uma string (texto já armazenado na memória), em vez do teclado.

/*Quando você quer apenas mover textos sem formatação.*/

getchar();//Lê uma única letra do teclado.
putchar();//Imprime uma única letra na tela.
fgetc();//Lê uma única letra de um arquivo
fputc();//Escreve uma única letra em um arquivo.
ungetc();//Pega uma letra que acabou de ser lida e a "devolve" para a fila de leitura (útil na construção de interpretadores).

/*Funções para abrir, fechar e manipular os arquivos no SSD/HD.*/

fopen();//Abre um arquivo (retorna o ponteiro FILE*). Permite escolher o modo: leitura (r), escrita (w), ou adição (a).
fclose();//Fecha o arquivo e libera a memória que o Sistema Operacional estava usando para mantê-lo aberto.
fflush();//Força a gravação imediata de qualquer dado que esteja "preso" no buffer da memória temporária para o destino final (como o arquivo ou a tela).
remove();//Deleta um arquivo fisicamente do seu disco rígido.
rename();//Renomeia um arquivo.
tmpfile();//Cria um arquivo temporário que o Sistema Operacional apaga automaticamente quando o programa fecha.

/*Usado quando você não quer ler textos, mas sim salvar vetores inteiros ou structs (como salvar um jogo) gravando os bytes crus direto no disco.*/

fread();//Lê um bloco maciço de bytes de um arquivo binário e joga direto para um vetor ou struct na memória.
fwrite();//Pega um bloco de bytes da memória (um vetor ou struct) e grava de uma só vez no arquivo binário.

/*Quando um arquivo está aberto, existe um "cursor" invisível que indica onde a próxima leitura ou escrita vai acontecer. Essas funções movem esse cursor.*/

ftell();//Retorna a posição (o número do byte exato) onde o cursor do arquivo está agora.
fseek();//Move o cursor para uma posição específica (ex: "pule para o byte 500 do arquivo").
rewind();//Volta o cursor instantaneamente para o byte 0 (o início absoluto do arquivo).
fgetpos(); / fsetpos();//Ferramentas alternativas e mais complexas para salvar e restaurar a posição do cursor em arquivos extremamente grandes.

/*Funções para descobrir o que deu errado durante uma leitura ou gravação.*/

feof();//Retorna verdadeiro (1) se a leitura bateu no final absoluto do arquivo (EOF).
ferror();//Retorna verdadeiro (1) se o Sistema Operacional bloqueou a leitura/escrita (ex: tentar gravar em um pen drive que foi removido).
perror();//Imprime na tela do usuário a mensagem de erro padrão que o Sistema Operacional gerou para a última falha ocorrida.
clearerr();//Limpa os alertas de erro e de "fim de arquivo" daquele (FILE), permitindo que o programa tente continuar trabalhando nele.
