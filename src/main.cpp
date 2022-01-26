#include <stdio.h>
#include <string.h>
#include <FreeRTOS.h>
#include <task.h>
#include <bl_uart.h>

extern "C" void aos_msleep(int ms);

extern "C" void main(void)
{
    for(;;) {
        printf("Hello World!\n");
        aos_msleep(1000);
    }
}

