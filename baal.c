#include<stdio.h>
#include<stdlib.h>

int leap(int y);

int main(int argc, char *argv[]){
	int day_dif = 0;
	int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int dd,mm,yyyy;
	int d2,m2,y2;
	int i;
	
	printf("Enter the first date: \n");
	if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
		printf("Invalid input\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter final date: \n");
	scanf("%d/%d/%d", &d2,&m2,&y2);
	
	if(y2>yyyy){
	}
	else if(y2==yyyy){
		if(m2>mm){
			if(mm==2){
				if(leap(yyyy)==1){
					day_dif += 29-dd;
				}
				else{
					day_dif += 28-dd;
				}
			}
			else{
				day_dif = day[mm-1] - dd;
			}
			mm++;
			for(i=mm;i<m2;i++){
				if(i==2){
					if(leap(yyyy)==1){
						day_dif += 29;
					}
					else{
						day_dif +=28;
					}
				} else{
					day_dif += day[i-1];
				}
			}
			day_dif += d2;
			printf("Difference in days: %d days /n", day_dif);
		} else if (mm == m2){
			if(d2>dd){
				printf("Difference in days: %d days /n", d2-dd);
			} else if(dd==d2){
				printf("Difference in days: zero days /n");
			} else{
				printf("Final date is greater than first date");
			}
		} else{
			printf("Final date is greater than first date");
		}
		
		return 0;
	}
}
	
	int leap(int y){
		if (y%400==0){
			return 1;
		}
		else {
			if(y%100==0){
				return 0;
			} else if(y%4==0){
			return 1;
			}
			else{
			return 0;
			}
		}
	}