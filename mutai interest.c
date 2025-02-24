1./*
2.Student Name:AMOS KIPNGENOH MUTAI
3.Student Reg.No:D33-4506-2023
4.course unit:BMS 201
5.student year and semester:2.2
6.Test Quiz:SIMPLE INTEREST
7.*/
8.//Program to find the area of a rectangle 
9.# include<studio.h>
10.int main(){
11.float principal_amount,time,rate,simple_interest;
12.printf("program to calculate the simple_interest:\n");
13.printf("enter the principal_amount:\n");
14.scanf("%f"& principal_amount);
15.("Enter the time in year:\n");
16.scanf("%f"&time);
17.printf("enter the rate:\n);
18.scanf("%f"&rate);
19.simple_interest=(principal_amount*time*rate)/100;
20.printf("the simple interest is %.2f", simple_interest);
21.return 0;
22.}