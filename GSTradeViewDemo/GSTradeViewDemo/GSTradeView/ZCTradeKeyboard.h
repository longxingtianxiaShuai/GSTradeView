//
//  ZCTradeKeyboard.h
//  GSTradeViewDemo
//
//  Created by 高帅 on 16/11/24.
//  Copyright © 2016年 qianxi. All rights reserved.
//  交易密码键盘




#import <Foundation///Foundation.h>

static NSString *ZCTradeKeyboardDeleteButtonClick = @"ZCTradeKeyboardDeleteButtonClick";
static NSString *ZCTradeKeyboardOkButtonClick = @"ZCTradeKeyboardOkButtonClick";
static NSString *ZCTradeKeyboardNumberButtonClick = @"ZCTradeKeyboardNumberButtonClick";
static NSString *ZCTradeKeyboardNumberKey = @"ZCTradeKeyboardNumberKey";

#import <UIKit/UIKit.h>
#import "UIView+Extension.h"

@class ZCTradeKeyboard;

@protocol ZCTradeKeyboardDelegate <NSObject>

@optional
/** 数字按钮点击 */
- (void)tradeKeyboard:(ZCTradeKeyboard *)keyboard numBtnClick:(NSInteger)num;
/** 删除按钮点击 */
- (void)tradeKeyboardDeleteBtnClick;
/** 确定按钮点击 */
- (void)tradeKeyboardOkBtnClick;
@end

@interface ZCTradeKeyboard : UIView
// 代理
@property (nonatomic, weak) id<ZCTradeKeyboardDelegate> delegate;
@end
