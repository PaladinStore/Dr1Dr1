//
//  AppDelegate.h
//  32 bit only iOS 13.5 Jailbreak
//
//  Created by PaladinStore on 2020-22-7.
//  Copyright © 2020 PalandinStore. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;






@end

