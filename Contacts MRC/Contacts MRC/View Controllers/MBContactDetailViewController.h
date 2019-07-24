//
//  MBContactDetailViewController.h
//  Contacts MRC
//
//  Created by Mitchell Budge on 7/24/19.
//  Copyright © 2019 Mitchell Budge. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MBContactDetailViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *emailTextField;
@property (weak, nonatomic) IBOutlet UITextField *phoneTextField;


@end

NS_ASSUME_NONNULL_END
