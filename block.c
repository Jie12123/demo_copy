#include"pcpy.h"

int block(const char *SFile, int pronum)
{
	int filesize;
	int fd = open(SFile,O_RDONLY);
	filesize = lseek(fd ,0,SEEK_END);//获取文件大小
	if(filesize%pronum==0)//计算block大小
		return filesize / pronum;
	else
		return (filesize / pronum)+1;
	
}
