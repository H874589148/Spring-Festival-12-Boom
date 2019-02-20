// File: Spring-Festival-12-Boom.c

// Permission: CN-2082-2

// Author: Li.YiYi

// Dept: PE-362, UG

// Origin: TI-352132

// 春节十二响


// ━━━━━神兽出没━━━━━━
//      ┏┓ 　┏┓
//     ┏┛┻━━━┛┻┓
//     ┃       ┃
//     ┃   ━   ┃
//     ┃ ┳┛ ┗┳ ┃
//     ┃       ┃
//     ┃   ┻   ┃
//     ┃       ┃
//     ┗━┓   ┏━┛Code is far away from bug with the animal protecting
//       ┃　 ┃    神兽保佑,代码无bug
//       ┃　 ┃
//       ┃　 ┗━━━┓
//       ┃       ┣┓
//       ┃       ┏┛
//       ┗┓┓┏━┳┓┏┛
//        ┃┫┫ ┃┫┫
//        ┗┻┛ ┗┻┛
//
// ━━━━━━感觉萌萌哒━━━━━━

#include<stdio.h>

#include"engine.h"                   //导入行星发动机头文件 

#include"login.h"                    //导入登录系统所需头文件 

int main() {                         //主函数 
	
	int i;
	
	destory_DoorLock();              //破坏门禁
	
	identity_recognition=True;       //终端身份识别
	
	Obtain(net_visit);               //申请网络访问权限
	
	Obtain(system_vist);             //系统操作权限 
	
	Change_securitySetting();        //改变工业控制系统的安全设置
	
	init_engine();                   //发动机初始化 
	
	while(engine_check_init()){      //检查是否初始化成功 
		
		for(i=0;i<12;i++){           //建立循环12次 
			
			engine_fire();           //发动机点火 
			
			delay(500);              //延时500毫秒 
			
			engine_pause();          //发动机暂停 
			
		}
			
	}
	
	engine_shutdown();               //发动机关闭 
	
}
