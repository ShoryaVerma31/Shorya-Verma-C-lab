/*#include<stdio.h>

int main(){
    int distance, sec;
    float hrs,min, average_speed,average_time;
    
    printf("enter distance\n");
    scanf("%d",&distance);
    printf("enter time in hrs\n");
    scanf("%d",&hrs);
    printf("enter time in min\n");
    scanf("%d",&min);
    printf("enter time in sec\n");
    scanf("%d",&sec);
    min = min+(sec/60);
    hrs = hrs+(min/60 );
    average_speed = (distance/hrs);
    average_time = (hrs/distance);
    printf("average_speed=%f\n",average_speed);
    
    printf("average_time=%f\n",average_time);
    return 0;
}*/
#include <stdio.h>

int main() {
    int distance_km = 10;
    int minutes = 43, seconds = 30;
    
    // Total time in seconds
    int total_seconds = minutes * 60 + seconds;
    
    // Average time per km
    double avg_seconds_per_km = (double)total_seconds / distance_km;
    int avg_min_per_km = (int)(avg_seconds_per_km / 60);
    int avg_sec_per_km = (int)(avg_seconds_per_km) % 60;
    
    // Average speed in km/h
    double total_hours = total_seconds / 3600.0;
    double avg_speed = distance_km / total_hours;
    
    printf("Average time per km: %d min %d sec\n", avg_min_per_km, avg_sec_per_km);
    printf("Average speed: %.2f km/h\n", avg_speed);
    
    return 0;
}
