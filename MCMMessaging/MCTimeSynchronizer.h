//
//  MCTimeSynchronizer.h
//  MCMMessaging
//
//  Created by Madis Nõmme on 4/27/11.
//  Copyright 2011 MobileCloud. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MCTimeSynchronizer : NSObject {
    
}

+ (MCTimeSynchronizer *)sharedSynchronizer;
- (void)startSyncingWithMCM;

@end
