//
//  UIButton+Extention.h
//  LSDEmojiKeyBoard
//
//  Created by 神州锐达 on 2017/4/27.
//  Copyright © 2017年 OnePiece. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Extention)

+(instancetype)getBtnTitle:(NSString *)title image:(NSString *)image  selectedImage:(NSString *)selectedImage target:(id)target action:(SEL)action type:(NSInteger)type;

@end
