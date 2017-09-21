/*
 * Module:	Main function
 * Author:	Lvjianfeng
 * Date:	2011.8
 */


#include "drv.h"
#include "task.h"

/*
9.21 缩短滴入血样到倒计时的时间
*/



int main(void)
{
	
        Drv_Initialize();
	Task_Initialize();
	Task_Process();
	

	return 0;
}
