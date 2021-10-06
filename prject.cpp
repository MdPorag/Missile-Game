#include<iostream>
#include<stdio.h>
#include<graphics.h>

void identity();
void game();
void loss();
void the_end();
void load();
void menu();

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(RED);
    settextstyle(0,0,9);
    outtextxy(380,150,"MISSILE");
    setcolor(BLUE);
    setlinestyle(0,0,3);
    circle(650,400,150);
    setcolor(RED);
    setfillstyle(9,RED);
    fillellipse(650,400,20,130);
    ellipse(650,400,0,180,20,130);
    getch();
    cleardevice();
    load();
    menu();
    cleardevice();
}
void identity()
{
    //delay(1000);
    setcolor(RED);
    settextstyle(0,0,7);
    outtextxy(100,150,"COMPUTER SCIENCE AND");
    outtextxy(380,250,"ENGINEERING");
    setcolor(BLUE);
    settextstyle(0,0,4);
    outtextxy(380,350,"NAME: MD RASSEDUZZAMAN SIKDER ");
    outtextxy(380,410,"ID: 20141201040");
    outtextxy(380,470,"YEAR: 1st YEAR");
    outtextxy(380,520,"SEMISTER: SECOND SEMISTER");
    setcolor(RED);
    settextstyle(0,0,3);
    outtextxy(500,650,"press 'ESC' for menu");
    char cb;
    while(1)
    {
        cb=getch();
        if(cb==27)
        {
            cleardevice();
            menu();
        }
    }
}
void load()
{
    delay(1000);
    setcolor(BLUE);
    settextstyle(0,0,8);
    outtextxy(300,300,"..LOADING..");
    int i=520;
    while(i<740)
    {
        setcolor(BLUE);
        line(515,375,515,409);
        line(515,375,744,375);
        line(515,409,744,409);
        line(744,375,744,409);
        setfillstyle(0,RED);
        bar(520,380,740,405);
        setcolor(RED);
        line(i,380,i,405);
        i+=1;
        delay(15);
    }
}
void menu()
{
    setfillstyle(9,BLUE);
    bar(10,10,1250,730);

    setcolor(YELLOW);
    setfillstyle(9,BLACK);
    setlinestyle(0,0,3);
    bar3d(300,200,800,260,10,30);
    bar3d(300,280,800,340,10,30);
    bar3d(300,360,800,420,10,30);
    bar3d(300,440,800,500,10,30);
    setcolor(RED);
    settextstyle(0,0,5);
    outtextxy(480,210,"PLAY");
    outtextxy(480,290,"ABOUT");
    outtextxy(480,370,"CREATOR");
    outtextxy(480,450,"EXIT");
    char cb;
    int i=1;
    while(1)
    {
        if(kbhit())
        {
            cb=getch();
            if(cb==0&&i==1)
            {
next:
                setcolor(YELLOW);
                settextstyle(0,0,5);
                outtextxy(480,210,"PLAY");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,290,"ABOUT");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,370,"CREATOR");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,450,"EXIT");
                i++;
                while(1)
                {
                    cb=getch();
                    if(cb==0)
                        goto next2;
                    else if(cb==27)
                        menu();
                    else if(cb==13)
                    {
                        cleardevice();
                        game();
                    }
                }
            }
            else if(cb==0&&i==2)
            {
next2:
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,210,"PLAY");
                setcolor(YELLOW);
                settextstyle(0,0,5);
                outtextxy(480,290,"ABOUT");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,370,"CREATOR");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,450,"EXIT");
                i++;
                while(1)
                {
                    cb=getch();
                    if(cb==0)
                        goto next3;
                    else if(cb==27)
                        menu();
                    else if(cb==13)
                    {
                        cleardevice();
                        setcolor(RED);
                        settextstyle(0,0,8);
                        outtextxy(320,100,"MISSILE GAME");
                        setcolor(9);
                        settextstyle(0,0,4);
                        outtextxy(100,250,"It's 3 level game.There are some ");
                        outtextxy(100,300,"boat's & missile.When boat's tripping");
                        outtextxy(100,350,"on the sea,then you shoot missile by");
                        outtextxy(100,400,"press ENTER.If missile hit the boat,");
                        outtextxy(100,450,"then vanish the boat.Accordingly you");
                        outtextxy(100,500,"can throw 5 missile per level.If you");
                        outtextxy(100,550,"miss 3 missile ,you loss or you pass");
                        outtextxy(100,600,"next level.Similarly you won the game.");
                        setcolor(RED);
                        settextstyle(0,0,3);
                        outtextxy(500,650,"press 'ESC' for menu");
                        char cb;
                        while(1)
                        {
                            cb=getch();
                            if(cb==27)
                            {
                                cleardevice();
                                menu();
                            }
                        }
                    }
                }
            }
            else if(cb==0&&i==3)
            {
next3:
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,210,"PLAY");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,290,"ABOUT");
                setcolor(YELLOW);
                settextstyle(0,0,5);
                outtextxy(480,370,"CREATOR");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,450,"EXIT");
                i++;
                while(1)
                {
                    cb=getch();
                    if(cb==0)
                        goto next4;
                    else if(cb==27)
                        menu();
                    else if(cb==13)
                    {
                        cleardevice();
                        identity();
                    }
                }
            }
            else if(cb==0&&i==4)
            {
next4:
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,210,"PLAY");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,290,"ABOUT");
                setcolor(RED);
                settextstyle(0,0,5);
                outtextxy(480,370,"CREATOR");
                setcolor(YELLOW);
                settextstyle(0,0,5);
                outtextxy(480,450,"EXIT");
                i=1;
                while(1)
                {
                    cb=getch();
                    if(cb==0)
                        goto next;
                    else if(cb==13)
                    {
                        cleardevice();
                        outtextxy(480,370,"EXIT");
                        goto finish;
                    }
                }
            }
        }
    }
finish:
    getch();
}
void game()
{
    setfillstyle(9,WHITE);
    bar(120,90,1250,700);
    setfillstyle(9,BLUE);
    bar(120,10,1250,90);
    setfillstyle(9,RED);
    pieslice(650,90,0,180,60);
    setcolor(RED);
    setlinestyle(0,0,5);
    line(120,10,1250,10);
    line(120,10,120,700);
    line(120,700,1250,700);
    line(1250,10,1250,700);
    setcolor(BLUE);//boat1111
    setlinestyle(0,0,4);
    arc(200,230,220,320,100);
    arc(160,260,0,360,10);
    arc(165,290,120,210,30);
    line(165,290,135,290);
    line(170,287,130,335);
    setcolor(WHITE);
    arc(150,230,255,290,110);
    arc(200,230,250,290,110);
    arc(250,230,250,290,110);
    setcolor(BLUE);//boat22222
    setlinestyle(0,0,4);
    arc(200,80,220,320,100);
    arc(160,110,0,360,10);
    arc(165,140,120,210,30);
    line(165,140,135,140);
    line(170,137,130,185);
    setcolor(WHITE);
    setlinestyle(0,0,2);
    arc(150,80,255,290,110);
    arc(200,80,250,290,110);
    arc(250,80,250,290,110);

    setcolor(YELLOW);
    settextstyle(0,0,2);
    outtextxy(10,20,"LEVEL");
    settextstyle(0,0,3);
    outtextxy(35,60,"1");

    bar3d(700,670,730,700,5,5);
    setfillstyle(9,RED);
    ellipse(715,665,0,180,3,30);

    setcolor(RED);
    settextstyle(0,0,2);
    outtextxy(1000,650,"press 'ESC' for menu");
    delay(1000);

    int x1=200,x2=160,x3=165,x4=170,x5=135,x6=130,ball=665,xx1=150,xx2=200,xx3=250;
    int y1=200,y2=160,y3=165,y4=170,y5=135,y6=130,yy1=150,yy2=200,yy3=250;
    int level=0,balll=0,miss=0,LEV=0,c=0;
    char cb;
    while(1)
    {
        //cleardevice();

        setfillstyle(9,WHITE);
        bar(120,90,1250,700);
        setcolor(YELLOW);
        settextstyle(0,0,2);
        outtextxy(10,20,"LEVEL");
        setfillstyle(9,BLUE);
        bar(120,10,1250,90);
        setfillstyle(9,RED);
        pieslice(650,90,0,180,60);
        setcolor(RED);
        setlinestyle(0,0,5);
        line(120,10,1250,10);
        line(120,10,120,700);
        line(120,700,1250,700);
        line(1250,10,1250,700);

        setcolor(BLUE);//boat
        setlinestyle(0,0,4);
        arc(x1,230,220,320,100);
        arc(x2,260,0,360,10);
        arc(x3,290,120,210,30);
        line(x3,290,x5,290);
        line(x4,287,x6,335);
        setcolor(WHITE);
        arc(xx1,230,255,290,110);
        arc(xx2,230,250,290,110);
        arc(xx3,230,250,290,110);
        setcolor(BLUE);//boat22222
        setlinestyle(0,0,4);
        arc(y1,80,220,320,100);
        arc(y2,110,0,360,10);
        arc(y3,140,120,210,30);
        line(y3,140,y5,140);
        line(y4,137,y6,185);
        setcolor(WHITE);
        setlinestyle(0,0,2);
        arc(yy1,80,255,290,110);
        arc(yy2,80,250,290,110);
        arc(yy3,80,250,290,110);

        bar3d(700,670,730,700,5,5);
        setfillstyle(9,RED);
        ellipse(715,665,0,180,3,30);
        setcolor(RED);
        settextstyle(0,0,2);
        outtextxy(1000,650,"press 'ESC' for menu");

        x1+=4,x2+=4,x3+=4,x4+=4,x5+=4,x6+=4;
        xx1+=4,xx2+=4,xx3+=4;
        y1+=2,y2+=2,y3+=2,y4+=2,y5+=2,y6+=2;
        yy1+=2,yy2+=2,yy3+=2;

        if(x1==1160)
            x1=200,x2=160,x3=165,x4=170,x5=135,x6=130;
        if(xx1==1110)
            xx1=150,xx2=200,xx3=250;
        if(y1==1160)
            y1=200,y2=160,y3=165,y4=170,y5=135,y6=130;
        if(yy1==1110)
            yy1=150,yy2=200,yy3=250;
        if(kbhit())
        {
            cb=getch();
            if(cb==27)
                menu();
            if(cb==13)
            {
                while(1)
                {
                    //cleardevice();

                    setfillstyle(9,WHITE);
                    bar(120,90,1250,700);
                    setcolor(RED);
                    settextstyle(0,0,2);
                    outtextxy(1000,650,"press 'ESC' for menu");
                    setcolor(YELLOW);
                    settextstyle(0,0,2);
                    outtextxy(10,20,"LEVEL");
                    setfillstyle(9,BLUE);
                    bar(120,10,1250,90);
                    setfillstyle(9,RED);
                    pieslice(650,90,0,180,60);
                    setcolor(RED);
                    setlinestyle(0,0,5);
                    line(120,10,1250,10);
                    line(120,10,120,700);
                    line(120,700,1250,700);
                    setfillstyle(9,RED);
                    ellipse(715,ball,0,180,3,30);
                    ball-=3;

                    setcolor(BLUE);//boat
                    setlinestyle(0,0,4);
                    arc(x1,230,220,320,100);
                    arc(x2,260,0,360,10);
                    arc(x3,290,120,210,30);
                    line(x3,290,x5,290);
                    line(x4,287,x6,335);
                    setcolor(WHITE);
                    arc(xx1,230,255,290,110);
                    arc(xx2,230,250,290,110);
                    arc(xx3,230,250,290,110);
                    setcolor(BLUE);//boat22222
                    setlinestyle(0,0,4);
                    arc(y1,80,220,320,100);
                    arc(y2,110,0,360,10);
                    arc(y3,140,120,210,30);
                    line(y3,140,y5,140);
                    line(y4,137,y6,185);
                    setcolor(WHITE);
                    setlinestyle(0,0,2);
                    arc(yy1,80,255,290,110);
                    arc(yy2,80,250,290,110);
                    arc(yy3,80,250,290,110);

                    bar3d(700,670,730,700,5,5);
                    setcolor(RED);
                    setfillstyle(9,RED);
                    ellipse(715,665,0,180,3,30);

                    if(level==0)
                    {
                        setcolor(YELLOW);
                        settextstyle(0,0,3);
                        outtextxy(35,60,"1");
                        delay(50);
                    }
                    if(level==1)
                    {
                        setcolor(YELLOW);
                        settextstyle(0,0,3);
                        outtextxy(35,60,"2");
                        delay(40);
                    }
                    if(level==2)
                    {
                        setcolor(YELLOW);
                        settextstyle(0,0,3);
                        outtextxy(35,60,"3");
                        delay(30);
                    }
                    if(ball<=124)
                    {
                        setcolor(YELLOW);
                        settextstyle(0,0,10);
                        outtextxy(500,400,"MISS");
                        ball=665;
                        balll++;
                        c=0;
                        if(balll==5)
                        {
                            level++;
                            balll=0,miss=0;
                        }
                        if(level==3)
                            the_end();
                        miss++;
                        if(miss==3)
                        {
                            loss();
                            goto end;
                        }

                        delay(1000);
                        goto next;
                    }
                    if((x1>610&&x1<790&&ball<=320)||(y1>610&&y1<790&&ball<=155))
                    {
                        if((y1>610&&y1<790&&ball<=155))
                        {
                            y1=200,y2=160,y3=165,y4=170,y5=135,y6=130;
                            yy1=150,yy2=200,yy3=250;
                        }
                        else if((x1>610&&x1<790&&ball<=320))
                        {
                            x1=200,x2=160,x3=165,x4=170,x5=135,x6=130;
                            xx1=150,xx2=200,xx3=250;
                        }
                        setcolor(YELLOW);
                        settextstyle(0,0,10);
                        outtextxy(500,400,"GOOD");
                        ball=665;
                        balll++;
                        c=0;
                        if(balll==5)
                        {
                            level++;
                            balll=0,miss=0;
                        }
                        if(level==3)
                        {
                            the_end();
                            goto end;
                        }

                        delay(1000);
                        goto next;
                    }

                    x1+=4,x2+=4,x3+=4,x4+=4,x5+=4,x6+=4;
                    xx1+=4,xx2+=4,xx3+=4;
                    y1+=2,y2+=2,y3+=2,y4+=2,y5+=2,y6+=2;
                    yy1+=2,yy2+=2,yy3+=2;

                    if(x1==1160)
                        x1=200,x2=160,x3=165,x4=170,x5=135,x6=130;
                    if(xx1==1110)
                        xx1=150,xx2=200,xx3=250;
                    if(y1==1160)
                        y1=200,y2=160,y3=165,y4=170,y5=135,y6=130;
                    if(yy1==1110)
                        yy1=150,yy2=200,yy3=250;
                }
            }
        }
next:
        if(level==0)
        {
            setcolor(YELLOW);
            settextstyle(0,0,3);
            outtextxy(35,60,"1");
            delay(50);
        }
        if(level==1)
        {
            setcolor(YELLOW);
            settextstyle(0,0,3);
            outtextxy(35,60,"2");
            delay(40);
        }
        if(level==2)
        {
            setcolor(YELLOW);
            settextstyle(0,0,3);
            outtextxy(35,60,"3");
            delay(30);
        }
        delay(50);
    }
end:
    cleardevice();
}

void loss()
{
    cleardevice();
    delay(1000);
    setcolor(YELLOW);
    setlinestyle(0,0,10);
    outtextxy(500,400,"YOU LOSE");
    delay(1000);
}
void the_end()
{
    cleardevice();
    delay(1000);
    setcolor(YELLOW);
    setlinestyle(0,0,10);
    outtextxy(500,400,"YOU WIN");
    delay(1000);
}
