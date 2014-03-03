//
//  PageViewController.h
//  ProjectProfile
//
//  Created by Dhwanil Shah on 3/2/14.
//  Copyright (c) 2014 Dhwanil Shah. All rights reserved.
//

#import <UIKit/UIKit.h>

//@interface PageViewController : UIViewController
@interface PageViewController : UIViewController <UIPageViewControllerDataSource>
@property (strong, nonatomic) NSArray *pageTitles;
@property (strong, nonatomic) NSArray *pageImages;


- (IBAction)startWalkthrough:(id)sender;
@property (strong, nonatomic) UIPageViewController *pageViewController;


@end
