#ifndef __HISI_FB_COMMON_H__
#define __HISI_FB_COMMON_H__

#define HISIFB_IOCTL_MAGIC 'M'

#define HISIFB_LCD_DIRTY_REGION_INFO_GET _IOW(HISIFB_IOCTL_MAGIC, 801, struct lcd_dirty_region_info)

//this head file to save the structs that both ade and dss will use
//note: if the left_align is 8,right_align is 8,and w_min is larger than 802,then w_min should be set to 808,
//make sure that it is 8 align,if w_min is set to 802,there will be an error.left_align,right_align,top_align
//bottom_align,w_align,h_align,w_min and h_min's valid value should be larger than 0,top_start and bottom_start
//maybe equal to 0.if it's not surpport partial update,these value should set to invalid value(-1).
typedef struct lcd_dirty_region_info {
    int left_align;
    int right_align;
    int top_align;
    int bottom_align;

    int w_align;
    int h_align;
    int w_min;
    int h_min;

    int top_start;
    int bottom_start;
} lcd_dirty_region_info_t;

#endif