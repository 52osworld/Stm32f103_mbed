#ifndef __DS18B20_H
#define __DS18B20_H 

#ifdef __cplusplus
extern "C" {
#endif 
#include "sys_nvic.h"   
#include "mbed.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//DS18B20��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/12
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////

#define	DS18B20_APB		RCC_APB2Periph_GPIOC
#define DS18B20_PORT	GPIOC
#define DS18B20_PIN 	GPIO_Pin_11

//IO��������
#define DS18B20_IO_IN() Ds18b20_1.input();//{GPIOC->CRH&=0XFFFF0FFF;GPIOC->CRH|=8<<12;}
#define DS18B20_IO_OUT() Ds18b20_1.output();// {GPIOC->CRH&=0XFFFF0FFF;GPIOC->CRH|=3<<12;}
////IO��������											   
#define	DS18B20_DQ_OUT PCout(11) //���ݶ˿�	PA0 
#define	DS18B20_DQ_IN  PCin(11)  //���ݶ˿�	PA0 
   	
u8 DS18B20_Init(void);//��ʼ��DS18B20
short DS18B20_Get_Temp(void);//��ȡ�¶�
void DS18B20_Start(void);//��ʼ�¶�ת��
void DS18B20_Write_Byte(u8 dat);//д��һ���ֽ�
u8 DS18B20_Read_Byte(void);//����һ���ֽ�
u8 DS18B20_Read_Bit(void);//����һ��λ
u8 DS18B20_Check(void);//����Ƿ����DS18B20
void DS18B20_Rst(void);//��λDS18B20    

#ifdef __cplusplus
}
#endif 

#endif















