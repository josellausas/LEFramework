//
//  LEFrameworkManager.h
//  LEFramework
//
//  Created by PP on 8/15/16.
//  Copyright © 2016 Zunware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LEDataSync.h"
#import "LEAppUpdater.h"
#import "LEContactsManager.h"


/**
 *  About
 *  ------
 *
 *  Singleton Manager for all the functionality provided by LEFramework
 *  This is the main point of interaction, a sort of API for getting things
 *  done.
 *
 *  @author jose@josellausas.com
 *  
 *  Usage
 *  -----
 *  In order to gain access to the features you must access the singleton by using:
 *  `[LEManager getInstance]`. This ensures we only have one.
 */
@interface LEManager : NSObject

@property LEDataSync* dataSyncer;

/**
 *  Singleton access
 *
 *  @return The instance of this class
 */
-(LEManager*)getInstance;

/**
 *  A classic
 */
-(void)helloWorld;

@end
