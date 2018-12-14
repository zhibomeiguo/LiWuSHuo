//
//  LXGiftView.h
//  礼物说
//
//  Created by 曾令轩 on 15/12/9.
//  Copyright © 2015年 曾令轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LXPopItem;

@interface LXGiftView : UIView
+ (instancetype)viewWithItem:(LXPopItem *)item;
- (instancetype)initWithItem:(LXPopItem *)item;
@end
