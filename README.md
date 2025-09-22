This project implements a Car Black Box (Event Data Recorder) on the STM32F407 microcontroller.
It continuously records critical vehicle data (acceleration, GPS, CAN bus frames) and stores it on an SD card.
When a crash/impact is detected via the accelerometer, the system saves both pre-event and post-event data, helping in accident analysis and safety research.
