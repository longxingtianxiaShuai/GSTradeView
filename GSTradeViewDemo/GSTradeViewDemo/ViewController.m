//
//  ViewController.m
//  GSTradeViewDemo
//
//  Created by 高帅 on 16/11/24.
//  Copyright © 2016年 qianxi. All rights reserved.
//

#import "ViewController.h"
#import "ZCTradeView.h"

@interface ViewController ()<ZCTradeViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)showTradeView:(id)sender {
     [[[ZCTradeView alloc] init] show];
}

-(NSString *)finish:(NSString *)pwd{
    
    return pwd;
}

@end
