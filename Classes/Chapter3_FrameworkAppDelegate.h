//
//  Chapter3_FrameworkAppDelegate.h
//  Chapter3 Framework
//
//  Created by Joe Hogue and Paul Zirkle
//

#import <UIKit/UIKit.h>

#import "ResourceManager.h"
#include "GameStateManager.h"

@class Chapter3_FrameworkViewController;

@interface Chapter3_FrameworkAppDelegate : GameStateManager <UIApplicationDelegate> {
    UIWindow *window;
    Chapter3_FrameworkViewController *viewController;
	
	CFTimeInterval m_FPS_lastSecondStart;
	int m_FPS_framesThisSecond;
	
	CFTimeInterval m_lastUpdateTime;
	float m_estFramesPerSecond;	
}

- (void) gameLoop: (id) sender;

- (float) getFramesPerSecond;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Chapter3_FrameworkViewController *viewController;

@end

