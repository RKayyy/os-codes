#include<stdio.h>
 
 int main()
 
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&n);
 
    printf("nEnter Process Burst Timen");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);#include<stdio.h>
 
int main()
{
      int i, limit, total = 0, x, counter = 0, time_quantum;
      int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10];
      float average_wait_time, average_turnaround_time;
      printf("nEnter Total Number of Processes:t");
      scanf("%d", &limit);
      x = limit;
      for(i = 0; i < limit; i++)
      {
            printf("nEnter Details of Process[%d]n", i + 1);
 
            printf("Arrival Time:t");
 
            scanf("%d", &arrival_time[i]);
 
            printf("Burst Time:t");
 
            scanf("%d", &burst_time[i]);
 
            temp[i] = burst_time[i];
      }
 
      printf("nEnter Time Quantum:t");
      scanf("%d", &time_quantum);
      printf("nProcess IDttBurst Timet Turnaround Timet Waiting Timen");
      for(total = 0, i = 0; x != 0;)
      {
            if(temp[i] <= time_quantum && temp[i] > 0)
            {
                  total = total + temp[i];
                  temp[i] = 0;
                  counter = 1;
            }
            else if(temp[i] > 0)
            {
                  temp[i] = temp[i] - time_quantum;
                  total = total + time_quantum;
            }
            if(temp[i] == 0 && counter == 1)
            {
                  x--;
                  printf("nProcess[%d]tt%dtt %dttt %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i];
                  turnaround_time = turnaround_time + total - arrival_time[i];
                  counter = 0;
            }
            if(i == limit - 1)
            {
                  i = 0;
            }
            else if(arrival_time[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
 
      average_wait_time = wait_time * 1.0 / limit;
      average_turnaround_time = turnaround_time * 1.0 / limit;
      printf("nnAverage Waiting Time:t%f", average_wait_time);
      printf("nAvg Turnaround Time:t%fn", average_turnaround_time);
      return 0;
}
    }
 
    wt[0]=0;   
 
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
 
    printf("nProcessttBurst TimetWaiting TimetTurnaround Time");
 
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("nP[%d]tt%dtt%dtt%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("nnAverage Waiting Time:%d",avwt);
    printf("nAverage Turnaround Time:%d",avtat);
 
    return 0;
}


// main function
int main() {
   //process id's
   int proc[] = { 1, 2, 3};
   int n = sizeof proc / sizeof proc[0];
   //Burst time of all processes
   int burst_time[] = {5, 8, 12};
   avgtime(proc, n, burst_time);
   return 0;
}
