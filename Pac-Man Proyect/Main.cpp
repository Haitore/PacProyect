#include <stdio.h>
#include <graphics.h>


void opcion1_menu();
void opcion2_menu();
int opcion3_menu();
void opcionlvl1_menu();
void opcionlvl2_menu();
void loop();
void nickname();
void selectlevel();
void creditos();
void map1();

int main(){
	initwindow(400,600,"PAC-MAN");
	setbkcolor(BLACK);
	loop();
	
	closegraph();
	return 0;
	
}

void loop(){
	readimagefile("MainMenu.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_DOWN)){
			delay (50);
			opcion1_menu();
		}	
	}
}

void opcion1_menu(){
	readimagefile("Opc1.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_SPACE)){
			delay (100);
			nickname();
			break;
		}
		else{
			if (GetAsyncKeyState(VK_DOWN)){
				delay (100);
				opcion2_menu();
				delay (100);
		
			}
			
		}
	}	
}

void opcion2_menu(){
	readimagefile("Opc2.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_SPACE)){
			creditos();
			break;
		}
		else{
			if (GetAsyncKeyState(VK_DOWN)){
				delay (100);
				opcion3_menu();
				delay (100);
		
			}
		}
	}
}

int opcion3_menu(){
	readimagefile("Opc3.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_SPACE)){
			closegraph();
			return 0;
		}
		else{
			if (GetAsyncKeyState(VK_DOWN)){
				loop();
				
			}
		}
	}
}

void nickname(){
	readimagefile("Nickname.jpg", 1, 1, getmaxx(), getmaxy());
	char nombre[15];
	printf("Introduce tu nombre: ");
	scanf("%s",nombre);
	readimagefile("Welcome.jpg", 1, 1, getmaxx(), getmaxy());
	settextstyle(3, 0, 4);
	outtextxy(70, 160, nombre);
	system("pause");
	selectlevel();
}

void creditos(){
	cleardevice();
	readimagefile("Credits.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_ESCAPE)){
			loop();
			break;
		}
	}
}

void selectlevel(){
	readimagefile("SelectLevel.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_DOWN)){
			delay (50);
			opcionlvl1_menu();
		}
	}
}

void opcionlvl1_menu(){
	readimagefile("LVL1.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_SPACE)){
			delay (100);
			map1();
			break;
		}
		else{
			if (GetAsyncKeyState(VK_DOWN)){
				delay (100);
				opcionlvl2_menu();
				delay (100);
		
			}
			
		}
	}	
}

void opcionlvl2_menu(){
	readimagefile("LVL2.jpg", 1, 1, getmaxx(), getmaxy());
	while (1){
		if (GetAsyncKeyState(VK_SPACE)){
			closegraph();
			break;
		}
		else{
			if (GetAsyncKeyState(VK_DOWN)){
				selectlevel();
				
			}
		}
	}
}

void map1(){
	char tecla;
	readimagefile("Stage1.jpg", 1, 1, getmaxx(), getmaxy());
	readimagefile("PAC1.jpg", 185, 452, 215, 482);
}
