#include <stdio.h>
#include <math.h>

struct PhanSo
{
	int TS;
	int MS;
};

void NhapPhanSo (struct PhanSo &PS);
void XuatPhanSo (struct PhanSo PS);
void ChuanHoaPS(struct PhanSo &PS);
void RutGonPS (struct PhanSo &PS);
struct PhanSo TongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
struct PhanSo HieuHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
struct PhanSo TichHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
struct PhanSo ThuongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2);
int main ()
 
 {
 	struct PhanSo PS1,PS2;
 	struct PhanSo PSTong;
 	struct PhanSo PSHieu;
 	struct PhanSo PSTich;
 	struct PhanSo PSThuong;
 	printf ("\n Nhap phan So thu 1:");
 	NhapPhanSo (PS1);
 	printf("\n Phan so thu nhat: ");
 	XuatPhanSo (PS1);
 	
 	printf ("\n Nhap phan So thu 2:");
 	NhapPhanSo (PS2);
 	printf(" \n Phan so thu hai: ");
 	XuatPhanSo (PS2);
 	
 	ChuanHoaPS(PS1);
 	printf ("\n phan So thu 1 sau khi chuan hoa:");
 	XuatPhanSo (PS1);
 	
 	RutGonPS(PS2);
 	printf ("\n phan So thu 2 sau khi rut gon:");
 	XuatPhanSo (PS2);
 	
 	PSTong = TongHaiPhanSo (PS1, PS2);
 	printf("\n Tong cua hai phan so PS1 va PS2 la : ");
 	XuatPhanSo (PS1);
 	printf(" + ");
 	XuatPhanSo (PS2);
 	printf(" = ");
 	XuatPhanSo(PSTong);
 	
 	PSHieu = HieuHaiPhanSo (PS1, PS2);
 	printf("\n Hieu cua hai phan so PS1 va PS2 la : ");
 	XuatPhanSo (PS1);
 	printf(" - ");
 	XuatPhanSo (PS2);
 	printf(" = ");
 	XuatPhanSo(PSHieu);
 	
 	PSTich = TichHaiPhanSo (PS1, PS2);
 	printf("\n Tich cua hai phan so PS1 va PS2 la : ");
 	XuatPhanSo (PS1);
 	printf(" * ");
 	XuatPhanSo (PS2);
 	printf(" = ");
 	XuatPhanSo(PSTich);
 	
 	PSThuong = ThuongHaiPhanSo (PS1, PS2);
 	printf("\n Thuong cua hai phan so PS1 va PS2 la : ");
 	XuatPhanSo (PS1);
 	printf(" / ");
 	XuatPhanSo (PS2);
 	printf(" = ");
 	XuatPhanSo(PSThuong);
 	return 0;
 }

void NhapPhanSo (struct PhanSo &PS)
{
	printf ("\n nhap tu so:");
	scanf ("%d",&PS.TS);
	printf ("\n nhap mau So:");
	scanf ("%d",&PS.MS);
}

void XuatPhanSo (struct PhanSo PS)
{
	printf ("%d/%d",PS.TS, PS.MS);
}

 void ChuanHoaPS(struct PhanSo &PS)
 {
 	if (PS.MS<0)
 	{
 		PS.MS=PS.MS*(-1);
 		PS.TS=PS.TS*(-1);
	}
 }
 
 int UCLN (int a,int b)
 {
 	for(int i=abs(a);i>0;i--)
 		if(a%i==0&&b%i==0)
 			return i;
 }
 
 void RutGonPS (struct PhanSo &PS)
 {
 	int uCLN=UCLN(PS.TS,PS.MS);
 	
 	PS.TS=PS.TS/uCLN;
 	PS.MS=PS.MS/uCLN;
}

struct PhanSo TongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSTong;
	
	PSTong.TS= (PS1.TS * PS2.MS) + (PS2.TS * PS1.MS);
	PSTong.MS= PS1.MS*PS2.MS;
	
	return PSTong;
}

struct PhanSo HieuHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSHieu;
	
	PSHieu.TS= (PS1.TS * PS2.MS) - (PS2.TS * PS1.MS);
	PSHieu.MS= PS1.MS*PS2.MS;
	
	return PSHieu;
}

struct PhanSo TichHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSTich;
	
	PSTich.TS= (PS1.TS * PS2.TS);
	PSTich.MS= PS1.MS*PS2.MS;
	
	return PSTich;
}

struct PhanSo ThuongHaiPhanSo (struct PhanSo PS1, struct PhanSo PS2)
{
	struct PhanSo PSThuong;
	
	PSThuong.TS= (PS1.TS * PS2.MS);
	PSThuong.MS= PS1.MS*PS2.TS;
	
	return PSThuong;	
}
