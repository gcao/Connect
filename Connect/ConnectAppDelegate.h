//
//  ConnectAppDelegate.h
//  Connect
//
//  Created by Guoliang Cao on 3/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ConnectViewController;

@interface ConnectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ConnectViewController *viewController;

@end
