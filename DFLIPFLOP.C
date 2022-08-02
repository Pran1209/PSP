#include<stdio.h>
#include<conio.h>


	/*

	Loop
	wait for input
	if clk = 1 then
		if d = 1 = output 1, 0
		if d = 0, out 0, 1
	else
		output 1, 0

	*/

void main()
{
	int clk, d, qn = 0, _qn = 0;
	clrscr();
	printf("***** D FLIP FLOP *****\n");
	printf("Enter the input d and clock, clock > 1 to exit: ");
	scanf(" %d %d", &d, &clk);

	while (clk < 2) {

		if(clk == 1) {
			if ( d == 1) {
				qn = 1;
				_qn = 0;
				printf("\n The flip-flop is in SET condition \n");
				printf("Qn: %d, Qn': %d", qn, _qn);
			}
			else if (d == 0){
				qn = 0;
				_qn = 1;
				printf("\n The flip-flop is in RESET condition \n");
				printf("Qn: %d, Qn': %d", qn, _qn);
			}
			else {
				// Invalid input
				printf("\nInvalid Input of d");
			}
		}
		else { // clk == 0
		printf("Qn: %d, Qn': %d ", qn,_qn);
		printf("\n The flip-flop will be in HOLD state. It will store the previous output values.");
		}


		printf("\n \n Enter the input d and clock, Clock > 1 to exit: ");
		scanf(" %d %d", &d, &clk);
	}

}