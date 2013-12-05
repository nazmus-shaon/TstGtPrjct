//
//  TGPDetailViewController.h
//  TstGtPrjct
//
//  Created by Nazmus Shaon on 05/12/13.
//  Copyright (c) 2013 Nazmus Shaon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TGPDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
