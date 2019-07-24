//
//  MBContactsTableViewController.h
//  Contacts MRC
//
//  Created by Mitchell Budge on 7/24/19.
//  Copyright © 2019 Mitchell Budge. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBContactController.h"

NS_ASSUME_NONNULL_BEGIN

@interface MBContactsTableViewController : UITableViewController

@property (nonatomic, copy) MBContactController *contactsController;

@end

NS_ASSUME_NONNULL_END
