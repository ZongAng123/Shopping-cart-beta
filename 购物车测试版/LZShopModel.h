//
//  LZShopModel.h
//  购物车测试版
//
//  Created by 纵昂 on 2017/2/16.
//  Copyright © 2017年 纵昂. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LZShopModel : NSObject
@property (assign,nonatomic)BOOL select;
@property (copy,nonatomic)NSString *shopID;
@property (copy,nonatomic)NSString *shopName;
@property (copy,nonatomic)NSString *sID;
@property (strong,nonatomic,readonly)NSMutableArray *goodsArray;

- (void)configGoodsArrayWithArray:(NSArray*)array;

@end
