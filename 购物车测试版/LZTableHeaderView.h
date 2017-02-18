//
//  LZTableHeaderView.h
//  购物车测试版
//
//  Created by 纵昂 on 2017/2/16.
//  Copyright © 2017年 纵昂. All rights reserved.
//
//1.自定义的HeaderFooterView一般是用在列表的头部标题，显示不同的状态信息。系统自带的HeaderFooterView不能很好地达到显示效果。如果只需要显示文字，可以使用调用
//2
#import <UIKit/UIKit.h>
typedef void(^buttonClickBlock)(BOOL select);
@interface LZTableHeaderView : UITableViewHeaderFooterView
@property (copy,nonatomic)NSString *title;
@property (copy,nonatomic)buttonClickBlock lzClickBlock;
@property (assign,nonatomic)BOOL select;

@end
