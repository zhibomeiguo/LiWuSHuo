//
//  LXCommentCell.h
//  礼物说
//
//  Created by 曾令轩 on 15/12/10.
//  Copyright © 2015年 曾令轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LXCommentFrame;

@interface LXCommentCell : UITableViewCell
@property (nonatomic, strong) LXCommentFrame *commentFrame;

+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end
