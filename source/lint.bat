@echo off
%1\splint.exe ^
-namechecks ^
-D__ICCSTM8__ ^
-DSTM8L15X_MDP ^
-DRAM_EXECUTION=1 ^
-DDEVOS_COOPPERATIVE=0 ^
-D__ramfunc= ^
-D__near= ^
-D__far= ^
-sysdirs stm8l\ ^
-I stm8l\ ^
-I stm8l\STM8L15x_StdPeriph_Driver\inc\ ^
-I global\ ^
-I driver\include\ ^
-I library\include\ ^
-I midware\include\ ^
-I app\include\ ^
driver\source\*.c ^
library\source\*.c ^
midware\source\*.c ^
app\source\*.c ^
