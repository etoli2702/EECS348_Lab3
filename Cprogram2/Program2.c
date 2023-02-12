/*
 * Program2.c
 *
 *  Created on: Feb 10, 2023
 *      Author: Elija
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *text = fopen("input.txt", "r");
	if (text == NULL){
		printf("Error");
		return 1;
	}
    int x;
    char txt[100];
    while(!feof(text)){
        fscanf(text, "%s", &txt);
    }
    if (txt == "0" || txt == "1"){
		return 1;
	}
    x = atoi(txt);
    for(int td2 = 0; td2 < x/8; td2++){
        for(int td1 = 0; td1 < x/7; td1++){
            for(int td = 0; td < x/6; td++){
                for(int fg = 0; fg < x/3; fg++){
                    for(int sf = 0; sf < x/2; sf++){
                        if (sf * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 == x){
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td2, td1, td, fg, sf);
                        }
                    }
                }
            }
        }
    }
}