//
//  DetailViewController.h
//  SampleApp
//
//  Created by rachel1126 on 15/9/13.
//  Copyright (c) 2015年 Evis.me. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

