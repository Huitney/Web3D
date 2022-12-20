
#include <gl/glut.h>
#include <math.h>


void main (int argc, char** argv)
{
	if (argc != 8)
		exit (1);
	double cx, cy, r;
	double min[2], max[2];

	cx = atof (argv[1]);
	cy = atof (argv[2]);
	r  = atof (argv[3]);

	min[0] = atof (argv[4]);
	min[1] = atof (argv[5]);
	max[0] = atof (argv[6]);
	max[1] = atof (argv[7]);

	printf ("%d\n", CircleRectCD (cx, cy, r, min, max));
	rere();
}
bool rere(){
	return(TRUE);
}