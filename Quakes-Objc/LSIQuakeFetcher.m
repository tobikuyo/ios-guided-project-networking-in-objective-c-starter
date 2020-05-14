//
//  LSIQuakeFetcher.m
//  Quakes-Objc
//
//  Created by Tobi Kuyoro on 14/05/2020.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import "LSIQuakeFetcher.h"
#import "LSIQuake.h"
#import "LSIQuakeResults.h"
#import "LSIErrors.h"
#import "LSILog.h"

@implementation LSIQuakeFetcher

// Overriding the NSObject init (we don't need to redeclare in the .h file)
- (instancetype)init {
    self = [super init];
    if (self) {

    }

    return self;
}

- (void)fetchQuakesInTimeInterval:(NSDateInterval *)interval
                  completionBlock:(LSIQuakeFetchCompletionBlock)completionBlock {
    
}

@end
