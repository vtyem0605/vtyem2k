#include <stdio.h>

void NhapMang (int mangA[], int soPhanTuTrongMangA );
void XuatMang (int mangA[], int soPhanTuTrongMangA );
void copySoLeCuaMang (int mangA[],int soPhanTuTrongMangA, int mangB[], int *soPhanTuTrongMangB );
void copySoAmCuaMang (int mangA[], int soPhanTuTrongMangA, int mangC[], int *soPhanTuTrongMangC );
void copySoHoanHaoCuaMang (int mangA[], int soPhanTuTrongMangA, int mangD[], int *soPhanTuTrongMangD );
int kiemTraSoHoanHao(int n);

int main()
{
	int mangA[100];
	int soPhanTuTrongMangA;
	int mangB[100];
	int soPhanTuTrongMangB=0;
	int mangC[100];
	int soPhanTuTrongMangC=0;
	int mangD[100];
	int soPhanTuTrongMangD=0;

	printf (" Nhap so phan tu trong mang A:");
	scanf ("%d",&soPhanTuTrongMangA);
	NhapMang (mangA, soPhanTuTrongMangA );
	printf ("\n Cac phan tu trong mang la:");
	XuatMang ( mangA, soPhanTuTrongMangA );
	
	copySoLeCuaMang (mangA, soPhanTuTrongMangA, mangB, &soPhanTuTrongMangB );
	printf ("\n Cac so le copy tu mang a la:");
	XuatMang ( mangB, soPhanTuTrongMangB );

	copySoAmCuaMang (mangA, soPhanTuTrongMangA, mangC,  &soPhanTuTrongMangC );
	printf ("\n Cac so am copy tu mang a la:");
	XuatMang ( mangC, soPhanTuTrongMangC );
	
	copySoHoanHaoCuaMang (mangA,  soPhanTuTrongMangA, mangD, &soPhanTuTrongMangD );
	printf ("\n So hoan hao copy tu mang a la:");
	XuatMang ( mangD, soPhanTuTrongMangD );
	return 0;
}
void NhapMang (int mangA[],int soPhanTuTrongMangA )
{
	for (int i=0;i<soPhanTuTrongMangA;i++)
	{
		printf ("nhap a[%d]:",i);
		scanf ("%d",& mangA[i]);
	}
	
}

void XuatMang (int mangA[],int soPhanTuTrongMangA )
{
	for (int i=0;i<soPhanTuTrongMangA;i++)
		printf ("\t%d",mangA[i]);
}

void copySoLeCuaMang (int mangA[], int soPhanTuTrongMangA, int mangB[], int *soPhanTuTrongMangB )
{
	for (int i=0;i<soPhanTuTrongMangA;i++)
		if (mangA[i]%2 != 0)
		{
			mangB[*soPhanTuTrongMangB]=mangA[i];
			*soPhanTuTrongMangB =*soPhanTuTrongMangB +1;	
		}
}

void copySoAmCuaMang (int mangA[], int soPhanTuTrongMangA, int mangC[], int *soPhanTuTrongMangC )
{
	for (int i=0;i<soPhanTuTrongMangA;i++)
		if (mangA[i] <=-1)
		{
			mangC[*soPhanTuTrongMangC]=mangA[i];
			*soPhanTuTrongMangC=*soPhanTuTrongMangC+1;
		}
}

void copySoHoanHaoCuaMang (int mangA[], int soPhanTuTrongMangA, int mangD[], int *soPhanTuTrongMangD)
{

	for (int i=0;i<soPhanTuTrongMangA;i++)
	 	if (kiemTraSoHoanHao(mangA[i]) == 1)
	 	{
	 		mangD[*soPhanTuTrongMangD] = mangA[i];
	 		*soPhanTuTrongMangD = *soPhanTuTrongMangD +1;
		}
}

int kiemTraSoHoanHao(int n)
 {
 	int tongCacUoc = 0;
 	for (int i=1; i<n; i++)
 		if (n % i == 0)
 			tongCacUoc = tongCacUoc+i;
 	if ( tongCacUoc == n)
 		return 1;
 	else
	 	return 0;	
 }
