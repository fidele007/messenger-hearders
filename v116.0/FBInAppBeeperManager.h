/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInAppBeeperContainerViewDelegate.h>

@protocol FBInAppBeeperManagerDelegate;
@class FBTransparentWindow, FBInAppBeeperContainerViewController, NSString;

@interface FBInAppBeeperManager : NSObject <FBInAppBeeperContainerViewDelegate> {

	FBTransparentWindow* _beeperWindow;
	FBInAppBeeperContainerViewController* _inAppBeeperContainerViewController;
	long long _currentContentViewPriority;
	id<FBInAppBeeperManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInAppBeeperManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)showBeeperForInAppContentView:(id)arg1 config:(id)arg2 ;
-(void)inAppBeeperContainerViewDidDisappear:(id)arg1 withDismissalAction:(int)arg2 ;
-(void)inAppBeeperContainerViewWillAppear:(id)arg1 ;
-(void)_observeViewWillAppearNotificationNames:(id)arg1 ;
-(void)_actionSheetOrAlertViewWillAppear:(id)arg1 ;
-(BOOL)canShowBeeperWithPriority:(long long)arg1 ;
-(BOOL)_isBeeperShowing;
-(BOOL)canShowBeeper;
-(void)hideBeeperForInAppContentView:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<FBInAppBeeperManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBInAppBeeperManagerDelegate>)delegate;
@end

