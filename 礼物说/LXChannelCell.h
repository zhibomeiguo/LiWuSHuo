//
//  LXChannelCell.h
//  礼物说
//
//  Created by 曾令轩 on 15/12/13.
//  Copyright © 2015年 曾令轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LXChannel;

@interface LXChannelCell : UICollectionViewCell
@property (nonatomic, strong) LXChannel *channel;

+ (instancetype)cellWithCollectionView:(UICollectionView *)collectionView indexPath:(NSIndexPath *)indexPath;
- (instancetype)initWithCollectionView:(UICollectionView *)collectionView indexPath:(NSIndexPath *)indexPath;
@end
