//
//  UIAlertView+Quick.h
//  GSTradeViewDemo
//
//  Created by 高帅 on 16/11/24.
//  Copyright © 2016年 qianxi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (Quick)

+ (void)showWithTitle:(NSString *)title message:(NSString *)message delegate:(id /**<>*/)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION NS_EXTENSION_UNAVAILABLE_IOS("Use UIAlertController instead.");

@end
