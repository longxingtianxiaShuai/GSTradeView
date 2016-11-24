//
//  ZCTradeView.h
//  GSTradeViewDemo
//
//  Created by 高帅 on 16/11/24.
//  Copyright © 2016年 qianxi. All rights reserved.
//  交易密码视图\负责整个项目的交易密码输入

#import <UIKit/UIKit.h>

@class ZCTradeKeyboard;

@protocol ZCTradeViewDelegate <NSObject>

@optional
/** 输入完成点击确定按钮 */
- (NSString *)finish:(NSString *)pwd;

@end

@interface ZCTradeView : UIView

@property (nonatomic, weak) id<ZCTradeViewDelegate> delegate;

/** 完成的回调block */
@property (nonatomic, copy) void (^finish) (NSString *passWord);

/** 快速创建 */
+ (instancetype)tradeView;

/** 弹出 */
- (void)show;
- (void)showInView:(UIView *)view;

@end
