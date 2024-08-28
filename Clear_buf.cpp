#include "Clear_buf.h"
/// @brief функция, очищающая буффер до первого встреченного символа новой строки ('\n') или конца файла (EOF).
void Clear_buf(void){

    for(int ch = 0; (ch = getchar()) !='\n' and ch != EOF;){

        continue;
    }
}
