# include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Paix et Salut de Dieu sur Notre Bien Aimé !!!\n");
	printf("");
	signed char name; int old;
	printf("What is your name : ");
	scanf("%s", &name);
	printf("Haw old have you : ");
	scanf("%d", &old);
	printf("Welcom Mr/M. %s you have %d old",&name, &old);
	return 0;
}
