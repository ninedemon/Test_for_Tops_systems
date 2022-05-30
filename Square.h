#ifndef SQUARE
#define SQUARE

class Square
{
private:
	RectangleShape squa;
	float lenght;
	float width;
	float pozx;
	float pozy;
	int colorone;
	int colortwo;
	int colorthree;
	float contour;
	int colorfour;
	int colorfive;
	int colorsix;
	float grad;


public:
	Square(float one=0.0f, float two=0.0f,float x=0.0f,float y=0.0f,int color1=0,int color2=0,int color3=0,float c=0.0f,int color4=0,int color5=0,int color6=0,float g=0.0f)
		:lenght(one),width(two),pozx(x),pozy(y),colorone(color1),colortwo(color2),colorthree(color3),contour(c),colorfour(color4),colorfive(color5),colorsix(color6),grad(g)
	{
		squa.setSize(Vector2f(lenght,width));
		squa.setPosition(Vector2f(pozx,pozy));
		squa.setFillColor(Color(colorone, colortwo, colorthree));
		squa.setOutlineThickness(contour);
		squa.setOutlineColor(Color(colorfour, colorfive, colorsix));
		squa.setRotation(grad);
	}

	RectangleShape access_squa()
	{
		return squa;
	}
};
#endif
