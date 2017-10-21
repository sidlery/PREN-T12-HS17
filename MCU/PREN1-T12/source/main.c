/**
 * This is template for main module created by New Kinetis SDK 2.x Project Wizard. Enjoy!
 **/

#include "board.h"
#include "pin_mux.h"
#include "clock_config.h"

/* component header files PE */
#include "WAIT1.h"
#include "LED1.h"

/*!
 * @brief Application entry point.
 */
int main(void) {
  /* Init board hardware. */
  BOARD_InitPins();
  BOARD_BootClockRUN();
  BOARD_InitDebugConsole();

  /* Add your code here */

  /* Init der Komponenten */

  LED1_Init();
  WAIT1_Init();

  for(;;) { /* Infinite loop to avoid leaving the main function */

	  	  LED1_Neg(); /*toggle LED */
		  WAIT1_Waitms(500); /*Verbrenne 500ms*/

    __asm("NOP"); /* something to use as a breakpoint stop while looping */
  }
}
