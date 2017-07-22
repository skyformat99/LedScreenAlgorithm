﻿/*
*********************************************************************************************************
*                                    (c) Copyright 2016, Ive Wang
*                                        All Rights Reserved
*
*
* File  : EffectUp.h
* By    : Ive Wang
* Date  : 2016-04-17
*********************************************************************************************************
*/

#ifndef __EFFECT_UP_H
#define __EFFECT_UP_H

/*
********************************************************************************************************* 
*                                         INCLUDE HEADER FILES
********************************************************************************************************* 
*/

#include "../App/Includes.h"

/*
********************************************************************************************************* 
*                                            MISCELLANEOUS
********************************************************************************************************* 
*/

#ifdef __EFFECT_UP_C
#define EFFECT_UP_EXT
#else
#define EFFECT_UP_EXT extern
#endif

/*
*********************************************************************************************************
*                                        EXPORT CONSTANT DEFINE
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            EXPORT FUNCTION
*********************************************************************************************************
*/

void Effect_UpDisappear(void *arg);
void Effect_UpAppear(void *arg);


#endif

/*
*********************************************************************************************************
*                                       End of file EffectUp.h
*********************************************************************************************************
*/