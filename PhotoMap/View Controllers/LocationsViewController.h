//
//  LocationsViewController.h
//  PhotoMap
//
//  Created by emersonmalca on 7/8/18.
//  Copyright © 2018 Codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LocationsViewControllerDelegate

- (void)didPickLocationWithLatitude:(NSNumber *)latitude longitude:(NSNumber *)longitude;

@end

@interface LocationsViewController : UIViewController
@property (weak, nonatomic) id<LocationsViewControllerDelegate> delegate;


@end
