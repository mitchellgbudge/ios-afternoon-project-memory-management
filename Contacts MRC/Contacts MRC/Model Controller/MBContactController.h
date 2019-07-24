//
//  MBContactController.h
//  Contacts MRC
//
//  Created by Mitchell Budge on 7/24/19.
//  Copyright © 2019 Mitchell Budge. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MBContact.h"

NS_ASSUME_NONNULL_BEGIN

@interface MBContactController : NSObject

@property (nonatomic, readonly) NSArray<MBContact *> *contacts;
@property NSMutableArray *internalContacts;

- (void)createContact:(MBContact *)contact;
- (void)editContact:(MBContact *)contact;
- (void)deleteContact:(MBContact *)contact;

@end

NS_ASSUME_NONNULL_END
