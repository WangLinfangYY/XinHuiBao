//
//  ChildBaseViewController.h
//  GXApp
//
//  Created by GXJF on 16/6/29.
//  Copyright © 2016年 yangfutang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChildBaseViewController : UIViewController

//@property (nonatomic,retain)NSMutableArray *nameArray;

@property (nonatomic,strong)NSString *type;

- (void)createLabel:(NSString *)yourTitleStr;
- (void)createTableViewFromVC:(NSString *)yourTag;

@end
