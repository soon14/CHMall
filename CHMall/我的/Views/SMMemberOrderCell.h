//
//  SMMemberOrderCell.h
//  CHMall
//
//  Created by pro on 2017/1/9.
//  Copyright © 2017年 Fyy. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface SMMemberOrderCell : UITableViewCell
@property (nonatomic,copy)void (^btnActionBlock)(int selectIndex);
@end
