/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMobileCanvas.h>

@protocol FBNavigationCoordinator;
@class UIViewController, FBUserSession;

@interface FBMobileCanvasWilde : FBMobileCanvas {

	UIViewController* _dialogViewController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;

}

@property (nonatomic,readonly) BOOL disablePullToRefresh; 
-(BOOL)handlePossibleBridgeRequestURL:(id)arg1 ;
-(id)initWithDialog:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 ;
-(BOOL)disablePullToRefresh;
@end
