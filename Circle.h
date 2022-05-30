#ifndef CIRCLE
#define CIRCLE

class Circle
{
private:
	CircleShape circle;
	float radius;
	float xpoz;
	float ypoz;
	//RGBA 
	int colorone;
	int colortwo;
	int colorthree;
	float contour;
	//RGBA
	int colorfour;
	int colorfive;
	int colorsix;
	//Explicitly sets the number of points in the polygon
	int number_of_points; 
public:
	Circle(float one=0.0f,float x=0.0f,float y=0.0f,int color1=0, int color2=0,int color3=0,float two=0.0f,int color4=0,int color5=0,int color6=0,int num=0):
		radius(one),xpoz(x),ypoz(y),colorone(color1),colortwo(color2),colorthree(color3),contour(two),colorfour(color4),colorfive(color5),colorsix(color6),number_of_points(num)
	{
		//if num == zero, then we explicitly specify the number of points
		if (num > 0)
		{
			circle.setRadius(radius);
			circle.setPointCount(number_of_points);
		}
		//leaves the default value
		if (num==0)
			circle.setRadius(radius);
		//position object on OX and OY 
		circle.setPosition(Vector2f(xpoz, ypoz));
		//Color RGBA
		circle.setFillColor(Color(colorone, colortwo, colorthree));
		//contour thickness
		circle.setOutlineThickness(contour);
		//Color thickness
		circle.setOutlineColor(Color(colorfour, colorfive, colorsix));

	}

	CircleShape access_circle()
	{
		return circle;
	}
};

#endif
