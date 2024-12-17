#include<stdio.h>


int main(){
	int soNguyenchoTruoc = 666; // gia tri so nguyen cho trc 
	int soNhap;

    printf(" Hay nhap so nguyen da cho truoc:  ");
	
	do{
		scanf ("%d",&soNhap);
		if ( soNhap!= soNguyenchoTruoc)
		{
			printf(" ban nhap sai roi hay nhap lai: ");
		}
	}while (soNhap != soNguyenchoTruoc);
	{
			printf(" ban da nhap dung so nguyen cho truoc la : %d",soNguyenchoTruoc);
	}
	

	return 0;
}
