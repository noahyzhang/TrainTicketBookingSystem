#pragma once

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

#define HEADER1 "-----------------------BOOK TICKET-------------------------\n"
#define HEADER2 "|  number  |start city|reach city|takeofftime|receivetime|price|ticketnumber|\n"
#define HEADER3 "|-------|------|------|-------|--------|--------|------|-----|"
#define FORMAT  "|%-10s|%-10s|%-10s|%-10s|%-10s|%5d|  %5d        |\n"
#define DATA  p->data.num,p->data.startcity,p->data.reachcity,p->data.takeofftime,p->data.receivetime,p->data.price,p->data.tecketnum

struct train{
	char num[10];            //列车号
	char startcity[10];       //出发城市 
	char reachcity[10];        //目的城市
	char takeofftime[10];        //发车时间
	char receivetime[10];         //到达时间
	int price;                 //票价
	int ticketnum;              //票数
};

struct man
{
	char num[10];              //ID
	char name[10];           //姓名
	int bookNum;           //定的票数
};


typedef struct node
{
	struct train data;
	struct node *next;
}Node, *Link;

typedef struct Man
{
	struct man data;
	struct Man *next;
}book, *bookLink;

int saveflag;

void menu();
void Traininfo(Link linkhead);
void printheader();
void printdata(Node *q);
void searchtrain(Link l);
void Bookticket(Link l, bookLink k);
void Modify(Link l);
void showtrain(Link l);
void SaveTrainInfo(Link l);
void SaveBookInfo(bookLink k);


