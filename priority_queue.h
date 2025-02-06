
/*******************************************************************************************************
* NAME: priority_queue.h                                                              
*                                                                                                       
* PURPOSE: This file defines the function prototypes for a priority_queue implementation                                                                      
*                                                                                                       
* GLOBAL VARIABLES: None                                                                                
*                                                                                                       
*                                                                                                       
* DEVELOPMENT HISTORY:                                                                                  
*                                                                                                       
* Date          Author          Change Id       Release         Description Of Change                   
* ----------    --------------- ---------       -------         -----------------------------------     
* 06-02-2025    Tiago Rodrigues                       1         File preparation     
*                                                                                                      
*******************************************************************************************************/
#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

/* 0 copyright/licensing */
/**********************************************************************
*
* 2025 Tiago Filipe Rodrigues tiagorodrigues1590@hotmail.com
*
***********************************************************************/

#ifdef __cplusplus
extern "C" {
#endif



/* 1 includes */
/*****************************************************/
#include <stdint.h>

/*****************************************************/

/* 2 defines */
/*****************************************************/

/*****************************************************/

/* 3 external declarations */
/*****************************************************/

/*****************************************************/

/* 4 typedefs */
/*****************************************************/

/*****************************************************/

/* 5 global variable declarations */
/*****************************************************/


/*****************************************************/


/* 6 function prototypes */
/*****************************************************/


/******************************************************************
*
* FUNCTION NAME:        
*
* PURPOSE: 
*
* ARGUMENTS:
*
* ARGUMENT 	        TYPE	        I/O	DESCRIPTION
* --------              ----            ---     ------------
*
* RETURNS: 
*
*
*
*****************************************************************/
void create_priority_queue(void** priority_queue, uint64_t size_of_datatype, uint8_t type_of_priority_queue);   // uint64_t elements_to_allocate

void priority_queue_push(void* id_of_queue, void* data_to_push);

void priority_queue_pop(void* id_of_queue);

void* priority_queue_top(void* id_of_queue);

uint8_t check_priority_queue_is_empty(void* id_of_queue);

uint64_t check_priority_queue_size(void* id_of_queue);

void free_priority_queue(void* priority_queue);



// void change_priority();



#ifdef __cplusplus
}
#endif


#endif

























