//
//  DetailViewController.h
//  AddressBooks
//
//  Created by dev on 12/21/15.
//  Copyright © 2015 dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *lblContactName;
@property (strong, nonatomic) IBOutlet UIImageView *imgContactImage;
@property (strong, nonatomic) IBOutlet UITableView *tblContactDetails;

@end
