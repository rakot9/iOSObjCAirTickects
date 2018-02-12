//
//  FavoriteTicket+CoreDataProperties.m
//  CourseWorkAir
//
//  Created by Андрей on 06.02.2018.
//  Copyright © 2018 Андрей. All rights reserved.
//

#import "FavoriteTicket+CoreDataProperties.h"

@implementation FavoriteTicket (CoreDataProperties)

+ (NSFetchRequest<FavoriteTicket *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"FavoriteTicket"];
}

@dynamic price;
@dynamic airline;
@dynamic departure;
@dynamic expires;
@dynamic flightNumber;
@dynamic returnDate;
@dynamic from;
@dynamic to;
@dynamic created;

@end
