//
//  TicketTableViewCell.h
//  CourseWorkAir
//
//  Created by Андрей on 06.02.2018.
//  Copyright © 2018 Андрей. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DataManager.h"
#import "APIManager.h"
#import "FavoriteTicket+CoreDataClass.h"

@interface TicketTableViewCell : UITableViewCell

@property (nonatomic, strong) UIImageView *airlineLogoView;
@property (nonatomic, strong) FavoriteTicket *favoriteTicket;
@property (nonatomic, strong) Ticket *ticket;

@end
