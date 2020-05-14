//
//  NSDateInterval+LSIDayInterval.h
//  Quakes-Objc
//
//  Created by Tobi Kuyoro on 14/05/2020.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Category - the equivalent to a Swift Extension
@interface NSDateInterval (LSIDayInterval)

// + = class method
// [NSDateInterval ourMethodName];

// Uses the current date as the end interval
+ (NSDateInterval *)lsi_dateIntervalByAddingDays:(NSInteger)days;
+ (NSDateInterval *)lsi_dateIntervalByAddingDays:(NSInteger)days toDate:(NSDate *)date;

@end

NS_ASSUME_NONNULL_END
