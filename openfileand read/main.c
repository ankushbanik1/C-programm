# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;

	char dataToBeWritten[50]
		= "i am ankush banik";


	filePointer = fopen("GfgTest.c", "w") ;

	if ( filePointer == NULL )
	{
		printf( "GfgTest.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;

		if ( strlen ( dataToBeWritten ) > 0 )
		{

			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}

		fclose(filePointer) ;

		printf("Data successfully written in file GfgTest.c\n");
		printf("The file is now closed.") ;
	}
getch();
}


