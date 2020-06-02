#pragma once
typedef
struct SSudent_
{
 char name[256];
 int group;
 float rating;
}SStudent;

int Input1(const char *sf, SStudent *s);
int Output1(const char *sf, SStudent *s);
