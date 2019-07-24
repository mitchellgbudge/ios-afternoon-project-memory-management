//
//  MBContact.m
//  Contacts MRC
//
//  Created by Mitchell Budge on 7/24/19.
//  Copyright © 2019 Mitchell Budge. All rights reserved.
//

#import "MBContact.h"

@implementation MBContact

- (instancetype)initWithName:(NSString *)name email:(NSString *)email phone:(NSString *)phone {
    if (self) {
        _name = name;
        _email = email;
        _phone = phone;
    }
    return self;
}

@end
