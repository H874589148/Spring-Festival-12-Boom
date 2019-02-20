// File: Spring-Festival-12-Boom.c

// Permission: CN-2082-2

// Author: Li.YiYi

// Dept: PE-362, UG

// Origin: TI-352132

// 春节十二响


// ━━━━━神兽出没━━━━━━
//       ┏┓　　　┏┓
//     ┏┛┻━━━┛┻┓
//     ┃　　　　　　　┃
//     ┃　　　━　　　┃
//     ┃　┳┛　┗┳　┃
//     ┃　　　　　　　┃
//     ┃　　　┻　　　┃
//     ┃　　　　　　　┃
//     ┗━┓　　　┏━┛Code is far away from bug with the animal protecting
//         ┃　　　┃    神兽保佑,代码无bug
//         ┃　　　┃
//         ┃　　　┗━━━┓
//         ┃　　　　　　　┣┓
//         ┃　　　　　　　┏┛
//         ┗┓┓┏━┳┓┏┛
//           ┃┫┫　┃┫┫
//           ┗┻┛　┗┻┛
//
// ━━━━━━感觉萌萌哒━━━━━━

#include<stdio.h>
#include"engine.h"

int main() {
	
	int i;
	
	init_engine();
	
	while(engine_check_init()){
		
		for(i=0;i<12;i++){
			
			engine_fire();
			
			delay(500);
			
		}
			
	}
	
	engine_shutdown();
	
}
