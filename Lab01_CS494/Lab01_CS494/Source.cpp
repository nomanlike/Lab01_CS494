#include"Header.h"
int gatecheck(string username)
{
	
	if (username.length() > 10)
		return 1;//1 is for too long name
	for (int i = 0; i < username.length(); i++)
		if ((username[i] < 'A') && (username[i] > 'Z'))
			if ((username[i] < 'a') && (username[i] > 'z'))
				if ((username[i] < '0') && (username[i] > '9'))
					if ((username[i] != '_'))
						return 2;//2 is for invalid character
	return 3;
}