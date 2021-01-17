#include<iostream>
#include"dma.hpp"
int main()
{
	ABC* (pcd[5]);
	pcd[0]=new baseDMA("ohhh",100);
	pcd[1]=new lacksDMA("sdsa","sdas",300);
	pcd[2]=new lacksDMA("bke","nkc",200);
	pcd[3]=new hasDMA("nke","ksd",200);
	pcd[4]=new hasDMA(*dynamic_cast<hasDMA*>(pcd[3]));
	for(int i=0;i<5;i++)
	{
		pcd[i]->view();
	}
	return 0;
}