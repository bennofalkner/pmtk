/***

    ./src/lib/calctools.c 

    Protein Motion TK (pmtk) - A library and several tools to estimate protein motions from varying input
    Copyright (C) 2009-2014  Benjamin Falkner

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


*/






#ifdef __cplusplus
extern "C" 
#endif

#include <stdio.h>

int writeArray(const char *fname, const char *comment, float *array, size_t l)
{
	size_t i;
	FILE *f=stdout;
	if(fname)
		f=fopen(fname,"w");
	
	if(!f) return 0;
	fprintf(f,"#%s\n",comment);
	for(i=0;i<l;i++)
		fprintf(f,"%8lu      %f\n",i,array[i]);
	if(fname)
		fclose(f);
	return (int)l;
}
