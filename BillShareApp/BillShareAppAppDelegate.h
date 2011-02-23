//
//  BillShareAppAppDelegate.h
//  BillShareApp
//
//  Created by Arunram Kalaiselvan on 2/22/11.
//  Copyright 2011 eDen Groups. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BillShareAppAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
