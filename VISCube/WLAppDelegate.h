//
//  WLAppDelegate.h
//  VISCube
//
//  Created by liwang on 14-7-7.
//  Copyright (c) 2014年 liwang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RESideMenu.h"

@class WLRootViewController;
@interface WLAppDelegate : UIResponder <UIApplicationDelegate,RESideMenuDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) WLRootViewController *rootViewControler;

- (void)createMenuViewControllers;

- (void)createMenu;


@end