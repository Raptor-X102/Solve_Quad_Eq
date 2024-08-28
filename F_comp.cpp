#include "F_comp.h"
/// @brief �������, ����������� �������� �������� ���� ���������� ���� float.
///
/// @param[in] x ��������, ������� ������������ � y.
/// @param [in] y ��������, � ������� ���������� �������� x.
///
/// @return �������� ���� bool. True � ������, ���� ������� �������� x � y �� ����������� �� ������ delta, false - � ��������� ������.
bool F_close_comp(double x, double y){

    return (fabs(x-y) < delta) ? true: false;

}
