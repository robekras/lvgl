/**
 * @file lv_arc.h
 *
 */

#ifndef LV_ARC_H
#define LV_ARC_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../lv_conf_internal.h"

#if LV_USE_ARC != 0

#include "../lv_core/lv_obj.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/
/*Data of arc*/
typedef struct
{
    /*New data for this type */
    lv_coord_t angle_start;
    lv_coord_t angle_end;
    lv_style_dsc_t style_arc;
} lv_arc_ext_t;

/*Parts of the arc*/
enum {
    LV_ARC_PART_BG = LV_OBJ_PART_MAIN,
    LV_ARC_PART_ARC,
};
typedef uint8_t lv_arc_part_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create a arc objects
 * @param par pointer to an object, it will be the parent of the new arc
 * @param copy pointer to a arc object, if not NULL then the new object will be copied from it
 * @return pointer to the created arc
 */
lv_obj_t * lv_arc_create(lv_obj_t * par, const lv_obj_t * copy);

/*======================
 * Add/remove functions
 *=====================*/

/*=====================
 * Setter functions
 *====================*/

/**
 * Set the start angle of an arc. 0 deg: right, 90 bottom: right etc.
 * @param arc pointer to an arc object
 * @param start the start angle
 */
void lv_arc_set_start_angle(lv_obj_t * arc, int16_t start);

/**
 * Set the start angle of an arc. 0 deg: right, 90 bottom: right etc.
 * @param arc pointer to an arc object
 * @param end the end angle
 */
void lv_arc_set_end_angle(lv_obj_t * arc, int16_t end);

/*=====================
 * Getter functions
 *====================*/

/**
 * Get the start angle of an arc.
 * @param arc pointer to an arc object
 * @return the start angle [0..360]
 */
uint16_t lv_arc_get_angle_start(lv_obj_t * arc);

/**
 * Get the end angle of an arc.
 * @param arc pointer to an arc object
 * @return the end angle [0..360]
 */
uint16_t lv_arc_get_angle_end(lv_obj_t * arc);

/*=====================
 * Other functions
 *====================*/

/**********************
 *      MACROS
 **********************/

#endif /*LV_USE_ARC*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_ARC_H*/
