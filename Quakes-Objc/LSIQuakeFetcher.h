//
//  LSIQuakeFetcher.h
//  Quakes-Objc
//
//  Created by Tobi Kuyoro on 14/05/2020.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSIQuake.h"

// Equivalent to typealias in Swift
typedef void (^LSIQuakeFetchCompletionBlock)(NSArray<LSIQuake *> * _Nullable quakes, NSError * _Nullable error);

NS_ASSUME_NONNULL_BEGIN

@interface LSIQuakeFetcher : NSObject

// Array of LSIQuakes, NSError - This is the result we're expecting

- (void)fetchQuakesInTimeInterval:(NSDateInterval *)interval
                  completionBlock:(LSIQuakeFetchCompletionBlock)completionBlock;

@end

NS_ASSUME_NONNULL_END
