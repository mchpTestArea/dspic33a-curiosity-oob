/*******************************************************************************
Copyright 2024 Microchip Technology Inc. (www.microchip.com)

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*******************************************************************************/

#ifndef LED_RGB_H
#define LED_RGB_H

#include "led_simple.h"
#include <stdbool.h>
#include <stdint.h>

void LED_RGB_Initialize(void);
void LED_RGB_On(void);
void LED_RGB_Off(void);
void LED_RGB_Toggle(void);
void LED_RGB_Set(bool on);
void LED_RGB_SetSolor(uint8_t red, uint8_t green, uint8_t blue);

extern struct LED_COLOR ledRGB;

#endif