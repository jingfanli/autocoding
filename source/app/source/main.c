/*
 * Module:	Main function
 * Author:	Lvjianfeng
 * Date:	2011.8
 */


#include "drv.h"
#include "task.h"

/*
9.21 ���̵���Ѫ��������ʱ��ʱ��

10.12 ����e-7�������
*/



int main(void)
{
	
        Drv_Initialize();
	Task_Initialize();
	Task_Process();
	

	return 0;
}
