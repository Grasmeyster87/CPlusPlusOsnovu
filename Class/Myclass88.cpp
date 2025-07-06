#include "Myclass88.h"


string Cap88::GetColor()
{
  return color;
}


void Model88::InspectMode()
{
	cout << " Кепка " << cap.GetColor() << " цвета." << endl;
}


void Human88::Think(int dumat)
{
 brain.Think(dumat);
}
void Human88::IspectTheCap()
{
	cout << " Моя кепка " << cap.GetColor() << " цвета." << endl;
}

	

void Human88::Brain::Think(int dumat)
{
 cout << "Я думаю! Количество раз: " << dumat << endl;
}
	


Human88::Human88()
{

}

Human88::~Human88()
{
}
