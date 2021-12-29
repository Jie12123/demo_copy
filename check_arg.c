#include"pcpy.h"

int check_arg(const char*SFile,int arg_num,int pronum)
{
	//源文件是否存在
	if((access(SFile,F_OK))!=0)
	{
		perror("Check_Arg error:SFile error  ");
		exit(-1);
	}
	//参数数量是否满足
	if(arg_num < 3||arg_num>4)
	{
		perror("Check_Arg error:arg_num error  ");
		exit(-1);	
	}
	//进程数量是否溢出
	if(pronum<=0||pronum>=100)
	{
		perror("Check_Arg errer:pronum 溢出\n");
		exit(-1);
	}
	return 0;
}
