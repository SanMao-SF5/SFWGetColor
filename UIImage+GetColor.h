//
//  UIImage+GetColor.h
//  UIPopoverController
//
//  Created by 沈方武 on 14-11-25.
//  Copyright (c) 2014年 沈方武. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GetColor)
/**
 *  获得某个像素的颜色
 *
 *  @param point 像素点的位置
 */
- (UIColor *)pixelColorAtLocation:(CGPoint)point;
@end
