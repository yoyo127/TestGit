//
//  AppDelegate.h
//  MeetingManage
//
//  Created by 毕佳音 on 2018/3/14.
//  Copyright © 2018年 Merak. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "MerakNavigationController.h"
#import "RACSubject.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

@property (strong, nonatomic) UINavigationController *navigationController;

@property (strong, nonatomic) MerakNavigationController *signinNavigationController;

@property (strong, nonatomic) MerakNavigationController *mobileMainNavigationController;

@property (strong, nonatomic) MerakNavigationController *registerNavigationController;

@property (atomic, assign) BOOL canInvokeService;

@property (strong, nonatomic) RACSubject *networkErrorHandleSubject;
@property (strong, nonatomic) RACSubject *businessErrorHandleSubject;

@property (strong, nonatomic) RACSubject *jumpToRegisterSubject;

@property (strong, nonatomic) NSString *deviceToken;

+ (AppDelegate *) sharedAppDelegate;

+ (NSString *)getUUID;

+ (BOOL)isLanguageEnglish;

- (void)setNavigationStyle;

- (void)saveContext;

@property (nonatomic, strong) NSString *openUrl;

@end

