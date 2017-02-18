//
//  LZGoodsModel.h
//  购物车测试版
//
//  Created by 纵昂 on 2017/2/16.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface LZGoodsModel : NSObject

@property (nonatomic,assign) BOOL select;
@property (assign,nonatomic)NSInteger count;
@property (copy,nonatomic)NSString *goodsID;
@property (copy,nonatomic)NSString *goodsName;
@property (copy,nonatomic)NSString *price;
@property (strong,nonatomic)UIImage *image;

@end
