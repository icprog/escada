void * vpDeviceThread (void * devr);

#define 	START_MAIN_PARAMS	1

static struct _Archive viewpac [] =
    {	{3,16,1,"Перепад давлений внутреннего контура СО (dP1)",1,0x1,"МПа"},
	{0,3,5,"Положение РО регулятора ГВС ()",1,0x1,"%"},
	{1,3,7,"Положение РО погодного регулятора ()",1,0x1,"%"},
	{31,4,51,"Температура о.с.в. внутреннего контура (С)",1,0x1,"С"},
	{32,4,57,"Температура п.с.в. внутреннего контура (С)",1,0x1,"С"},
	{2,3,77,"Выход погодного задатчика на регулятор",1,0x1,""},
	{3,3,79,"Выход задатчика регулятора ГВС",1,0x1,""},
	{4,3,73,"Выход погодного задатчика Tоб",1,0x1,""},
	{4,3,75,"Выход погодного задатчика Tпр",1,0x1,""},
	{5,4,39,"Температура ГВС (С)",1,0x1,"С"},
	{10,4,45,"Температура наружного воздуха (С)",1,0x1,"С"}};
