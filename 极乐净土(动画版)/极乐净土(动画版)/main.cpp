# include <stdio.h>
# include <iostream>
# include <graphics.h>
# include <windows.h>
# include <MMSystem.h>				//����������Ҫ��ͷ�ļ�
# pragma comment(lib,"winmm.lib")	//���߱�����,����winmm.lib���ļ�

# define COUNT 148

using namespace std;

int main()
{
	IMAGE images[COUNT];
	char fileName[128];

	cout<<"���ڼ���...."<<endl;

	//Ԥ�ȼ�����Դ
	for (int i = 1; i < 148; i++)
	{
		sprintf(fileName,"E:\\��Ŀ5-���־���ͼƬ֡\\images2\\_%04d_ͼ��-%d.jpg",148-i,i);
		loadimage(&images[i-1],fileName);  //&ȡ��ַ
	}
	
	initgraph(800,450);

	//�ظ�����"���.mp3"
	mciSendString(_T("play ���־���.mp3 repeat"),0,0,0);

	while (1)
	{
	//���β��Ÿ���ͼƬ
		for (int i = 0; i <148; i++)
		{
			/*
			sprintf(fileName,"E:\\��Ŀ5-���־���ͼƬ֡\\images2\\_%04d_ͼ��-%d.jpg",148-i,i);
			loadimage(0,fileName); //�ܺ�ʱ �Ż�����:Ԥ�ȼ���
			*/

			putimage(0,0,&images[i]);
			Sleep(75);		
		}
	}

	system("pause");
    closegraph();
	return 0;
}