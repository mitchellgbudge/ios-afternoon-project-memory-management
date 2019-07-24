//
//  MBContactController.m
//  Contacts MRC
//
//  Created by Mitchell Budge on 7/24/19.
//  Copyright © 2019 Mitchell Budge. All rights reserved.
//

#import "MBContactController.h"

@implementation MBContactController

- (instancetype)init
{
    self = [super init];
    if (self) {
        _internalContacts = [[[NSMutableArray alloc] init] autorelease];
        [self testContact];
    }
    return self;
}

- (void)testContact {
    MBContact *test = [[MBContact alloc] initWithName:@"Mitchell" email:@"mitchell@gmail.com" phone:@"777-888-9999"];
    [self createContact:test];
}

- (NSArray *)contacts {
    return [_internalContacts copy];
}

- (void)createContact:(MBContact *)contact {
    [_internalContacts addObject:contact];
}

- (void)editContact:(MBContact *)contact {
    
}

- (void)deleteContact:(MBContact *)contact {
    [_internalContacts removeObject:contact];
}

@end
