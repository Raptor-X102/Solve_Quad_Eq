#include "Clear_buf.h"
/// @brief �������, ��������� ������ �� ������� ������������ ������� ����� ������ ('\n') ��� ����� ����� (EOF).
void Clear_buf(void){

    for(int ch = 0; (ch = getchar()) !='\n' and ch != EOF;){

        continue;
    }
}
