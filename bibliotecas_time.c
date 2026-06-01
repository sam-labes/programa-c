#include <time.h>

time_t a;
struct b;

time ();// obtém o tempo atual do sistema.
difftime();//calcula a diferença em segundos entre dois tempos (time_t).

localtime();//convertem time_t para struct tm em UTC ou horário local.
gmtime();//convertem time_t para struct tm em UTC ou horário local.
mktime();//converte struct tm de volta para time_t.

strftime();//formata data e hora em struct tm para uma string.
asctime();// convertem tempo para uma string legível.
ctime();// convertem tempo para uma string legível.
