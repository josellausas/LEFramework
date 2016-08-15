//
//  AppDelegate.h
//  LEApp
//
//  Created by PP on 8/15/16.
//  Copyright © 2016 Zunware. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

/**
 *  A Sample App on how to use LEFrameworks
 */
@interface LEAppDelegate : UIResponder <UIApplicationDelegate>

#pragma mark - Views
@property (strong, nonatomic) UIWindow *window;

#pragma mark - CoreData
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

#pragma mark - LEFrameworks



@end

