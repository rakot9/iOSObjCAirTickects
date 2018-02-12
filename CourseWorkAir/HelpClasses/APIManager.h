//
//  APIManager.h
//  CourseWorkAir
//
//  Created by Андрей on 06.02.2018.
//  Copyright © 2018 Андрей. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataManager.h"

#define AirlineLogo(iata) [NSURL URLWithString:[NSString stringWithFormat:@"https://pics.avs.io/200/200/%@.png", iata]];


@interface APIManager : NSObject

+ (instancetype)sharedInstance;
- (void)cityForCurrentIP:(void (^)(City *city))completion;
- (void)ticketsWithRequest:(SearchRequest)request withCompletion:(void (^)(NSArray *tickets))completion;
- (void)mapPricesFor:(City *)origin withCompletion:(void (^)(NSArray *prices))completion;

@end
