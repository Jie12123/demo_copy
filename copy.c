#include"pcpy.h"

int main(int argc,char**argv)
{
	int pos = atoi(argv[4]);
	int blocksize = atoi(argv[3]);
	char buf[blocksize];
	bzero(buf,sizeof(buf));
	//argv[1]=sfile argv[2]=dfile argv[3]=blocksize argv[4]=pos
	int sfd = open(argv[1],O_RDONLY);
	int dfd = open(argv[2],O_WRONLY|O_CREAT,0664);
	lseek(sfd,pos,SEEK_SET);
	lseek(dfd,pos,SEEK_SET);
	printf("Copy CPro pid [%d] pos [%d] block [%d]\n",getpid(),pos,blocksize);	
	int rsize;
	rsize = read(sfd,buf,sizeof(buf));
	write(dfd,buf,rsize);
	printf("Copy finish\n");
	return 0 ;
	
}
