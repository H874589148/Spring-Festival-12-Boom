// File: Spring-Festival-12-Boom.c

// Permission: CN-2082-2

// Author: Li.YiYi

// Dept: PE-362, UG

// Origin: TI-352132

// ����ʮ����


// �������������޳�û������������
//       ��������������
//     �����ߩ��������ߩ�
//     ��              ��
//     ����������      ��
//     �����ש�������  ��
//     ��              ��
//     ����������      ��
//     ��              ��
//     ������������������Code is far away from bug with the animal protecting
//         ����������    ���ޱ���,������bug
//         ����������
//         ������������������
//         �����������������ǩ�
//         ��������������������
//         �����������ש�����
//           ���ϩϡ����ϩ�
//           ���ߩ������ߩ�
//
// �������������о������թ�����������

#include<stdio.h>

#include"engine.h"                   //�������Ƿ�����ͷ�ļ� 

#include"login.h"                    //�����¼ϵͳ����ͷ�ļ� 

int main() {                         //������ 
	
	int i;
	
	destory_DoorLock();              //�ƻ��Ž�
	
	identity_recognition=True;       //�ն����ʶ��
	
	Obtain(net_visit);               //�����������Ȩ��
	
	Obtain(system_vist);             //ϵͳ����Ȩ�� 
	
	Change_securitySetting();        //�ı乤ҵ����ϵͳ�İ�ȫ����
	
	init_engine();                   //��������ʼ�� 
	
	while(engine_check_init()){      //����Ƿ��ʼ���ɹ� 
		
		for(i=0;i<12;i++){           //����ѭ��12�� 
			
			engine_fire();           //��������� 
			
			delay(500);              //��ʱ500���� 
			
			engine_pause();          //��������ͣ 
			
		}
			
	}
	
	engine_shutdown();               //�������ر� 
	
}
