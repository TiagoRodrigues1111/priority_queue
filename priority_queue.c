/*******************************************************************************************************************
* FILE NAME: priority_queue.c
*                                                                                                               
* PURPOSE: This file defines the functions declared in priority_queue.h, using arrays
*                                                                                                               
* FILE REFERENCES:                                                                                              
*                                                                                                               
* Name                          I/O                     Description                                             
* ----                          ---                     -----------                                             
* none     
                                                                                                          
* EXTERNAL VARIABLES:                                                                                           
*                                                                                        
*                                                                                                               
* Name          Type            I/O                     Description                                             
* ----          ----            ---                     -----------                                             
* none
*
*                                                                                                             
* EXTERNAL REFERENCES:                                                                                          
* Name                          Description                                                                     
* ----                          -----------                                                                     
*
*     
* ABNORMAL TERMINATION CONDITIONS, ERROR AND WARNING MESSAGES:                                                  
*             
*                                                                                                  
* ASSUMPTIONS, CONSTRAINTS, RESTRICTIONS:                                                                       
*
*
*
*
* NOTES:                                                                                                        
*
*
* REQUIREMENTS/FUNCTIONAL SPECIFICATIONS REFERENCES:                                                            
*
*                                                                                                               
* DEVELOPMENT HISTORY:                                                                                          
*                                                                                                               
* Date          Author                  Change Id       Release         Description Of Change                   
* ----------    ---------------         ---------       -------         ---------------------   
* 06-02-2025    Tiago Rodrigues                               1         File preparation   
*
*                                                                                                               
* ALGORITHM (PDL)
*    
*
*                                                                                                           
****************************************************************************************************************/


/* 0 copyright/licensing */
/***************************************************************************************************************/
/*
*       2025 Tiago Filipe Rodrigues tiagorodrigues1590@hotmail.com
*/
/***************************************************************************************************************/


/* 1 includes */
/*****************************************************/

#include "priority_queue.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*****************************************************/


/* 2 defines */
/*****************************************************/
#define INITIAL_ALLOC 3

/*****************************************************/


/* 3 external declarations */
/*****************************************************/

/*****************************************************/


/* 4 typedefs */
/*****************************************************/


/*****************************************************/


/* 5 global variable declarations */
/*****************************************************/

// Possible solutions:  queue_front and queue_size (increment to find the back )
//                      queue_front and queue_back (initiate queue_back as always +1 than it should )
struct priority_queue
{
        uint64_t priority_queue_size;
        uint64_t priority_queue_size_allocated;                  // num_of_elements
        uint64_t datatype_size;                         // num_of_bytes
        uint64_t k_aux;                                 // auxiliary 4 bytes for reallocation      
        void *priority_queue_data;
};


/*****************************************************/


/* 6 function prototypes */
/*****************************************************/

/*****************************************************/



/* 7 function declarations */
/*****************************************************/




/******************************************************************
*
* FUNCTION NAME: create_queue       
*
* PURPOSE: Allocates the needed memory for the queue wanted
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue	        void**	        I/O	pointer to the memory position of the queue to implement
* size_of_datatype      uint64_t        I       byte size of datatype to place in the queue
* elements_to_allocate  uint64_t        I       number of elements to allocate for the queue
*
* RETURNS: void
*
*
*
*****************************************************************/
void create_priority_queue(void** id_of_priority_queue, uint64_t size_of_datatype, uint64_t elements_to_allocate, uint8_t type_of_priority_queue)   // uint64_t elements_to_allocate
{
        /* LOCAL VARIABLES:
        *  Variable        Type    Description
        *  --------        ----    -----------
        *  None
        */
        if(NULL == id_of_priority_queue)
        {
                fprintf(stderr, "Priority queue pointer location is null\n");
                return ;
        }
                

        // Allocation of a priority_queue struct
        (*id_of_priority_queue) = malloc(1*sizeof(struct priority_queue));                       
        if(NULL == *id_of_priority_queue)
        {
                perror("Memory allocation failed");
                return ;
        }

        if(0 == elements_to_allocate)
                ((struct priority_queue*)(*id_of_priority_queue))->priority_queue_size_allocated = INITIAL_ALLOC;      // assumed that the number of elements to allocate initially is INITIAL_ALLOC (3 by default)
        else
                ((struct priority_queue*)(*id_of_priority_queue))->priority_queue_size_allocated = elements_to_allocate;

        ((struct priority_queue*)(*id_of_priority_queue))->priority_queue_size = 0;
        ((struct priority_queue*)(*id_of_priority_queue))->datatype_size = size_of_datatype;
        ((struct priority_queue*)(*id_of_priority_queue))->k_aux = 1;
        
        // Allocate space in the priority_queue for the array of values
        ((struct priority_queue*)(*id_of_priority_queue))->priority_queue_data = (void*) malloc(((struct priority_queue*)(*id_of_priority_queue))->priority_queue_size_allocated*((struct priority_queue*)(*id_of_priority_queue))->datatype_size);     
        if(NULL == ((struct priority_queue*)(*id_of_priority_queue))->priority_queue_data)
        {
                perror("Memory allocation failed");
                return ;
        }
        
        return ;        
}



/******************************************************************
*
* FUNCTION NAME: check_queue_front
*
* PURPOSE: Returns the memory position of the element that is currently on the front of the queue
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue   void*	        I	pointer to the memory position of the queue to check
* 
*
* RETURNS: void* (pointer to the memory position of the element at the front of the queue)
*
*
*
*****************************************************************/
void* priority_queue_top(void* id_of_priority_queue)
{


}




/******************************************************************
*
* FUNCTION NAME: queue_pop
*
* PURPOSE: Removes one position from the front of the queue
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue   void*	        I	pointer to the memory position of the queue to pop from
*
*
* RETURNS: void
*
*
*
*****************************************************************/
void priority_queue_pop(void* id_of_priority_queue)
{




        return;
}



/******************************************************************
*
* FUNCTION NAME: queue_push
*
* PURPOSE: Pushes an element to the back of the queue
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue   void*	        I	pointer to the memory position of the queue to which the element is being push to
* data_to_push  void*	        I	pointer to the memory position of the data to push into the queue
*
*
* RETURNS: void
*
*
*
*****************************************************************/
void priority_queue_push(void* id_of_priority_queue, void* data_to_push)
{

}



/******************************************************************
*
* FUNCTION NAME: check_queue_is_empty
*
* PURPOSE: Checks if the queue is empty or not
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue   void*	        I	pointer to the memory position of the queue to check
*
*
* RETURNS: uint8_t
*
*
*
*****************************************************************/
uint8_t check_priority_queue_is_empty(void* id_of_priority_queue)
{
        /* LOCAL VARIABLES:
        *  Variable        Type    Description
        *  --------        ----    -----------
        *  None
        */
        if(NULL == id_of_priority_queue)
        {
                fprintf(stderr, "Queue pointer location is null\n");
                return 0;
        }
                
        if(0 == ((struct priority_queue*)id_of_priority_queue)->priority_queue_size)
                return 1;
        else
                return 0;


}


/******************************************************************
*
* FUNCTION NAME: check_queue_size
*
* PURPOSE: Will return the current element count in the queue
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue   void*	        I	pointer to the memory position of the queue to check
*
*
* RETURNS: uint64_t (size of the queue)
*
*
*
*****************************************************************/
uint64_t check_priority_queue_size(void* id_of_priority_queue)
{
        /* LOCAL VARIABLES:
        *  Variable        Type    Description
        *  --------        ----    -----------
        *  None
        */
        if(NULL == id_of_priority_queue)
        {
                fprintf(stderr, "Priority queue pointer location is null\n");
                return 0;
        }

        return ((struct priority_queue*)id_of_priority_queue)->priority_queue_size;



}

/******************************************************************
*
* FUNCTION NAME: free_queue
*
* PURPOSE: Frees the memory allocated for the queue
*
* ARGUMENTS:
*
* ARGUMENT 	TYPE	        I/O	DESCRIPTION
* id_of_queue   void*	        I	pointer to the memory position of the queue to free
*
*
* RETURNS: void
*
*
*
*****************************************************************/
void free_priority_queue(void* id_of_priority_queue)
{

        /* LOCAL VARIABLES:
        *  Variable        Type    Description
        *  --------        ----    -----------
        *  None
        */
        if(NULL == id_of_priority_queue)
                return;

        if(NULL != ((struct priority_queue*)id_of_priority_queue)->priority_queue_data)
                free(((struct priority_queue*)id_of_priority_queue)->priority_queue_data);
        
        free(id_of_priority_queue);
        return ;


}