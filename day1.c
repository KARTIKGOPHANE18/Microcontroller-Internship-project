#include "stm32f4xx_hal.h"

void SystemClock_Config(void);
void MX_GPIO_Init(void);

int main(void) {
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    while (1) {
        HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12); // LED Green
        HAL_Delay(500);

        if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET) {
            HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13); // LED Orange
            HAL_Delay(200);
        }
    }
}