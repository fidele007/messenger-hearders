/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInAppNotificationViewControllerDelegate.h>
#import <Messenger/MNInAppNotificationPluginViewCloseActionHandler.h>
#import <Messenger/MNInAppNotificationPluginService.h>

@class MNInAppNotificationPluginServiceListenerAnnouncer, NSMutableDictionary, MNInAppNotificationViewController, MNInAppNotificationPluginView, NSString;

@interface MNInAppNotificationPluginServiceImpl : NSObject <MNInAppNotificationViewControllerDelegate, MNInAppNotificationPluginViewCloseActionHandler, MNInAppNotificationPluginService> {

	MNInAppNotificationPluginServiceListenerAnnouncer* _announcer;
	NSMutableDictionary* _notificationViewsByToken;
	MNInAppNotificationViewController* _inAppNotificationViewController;
	MNInAppNotificationPluginView* _inAppNotificationPlugInView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initInAppNotificationViewControllerIfNecessary;
-(void)_initInAppNotificationViewIfNecessary;
-(void)inAppNotificationViewControllerDidTapNotificationView:(id)arg1 ;
-(void)inAppNotificationViewControllerDidDismissNotificationView:(id)arg1 ;
-(void)inAppNotificationViewControllerDidPullDownNotificationView:(id)arg1 ;
-(id)presentBannerWithContentView:(id)arg1 andDismissAutomatically:(BOOL)arg2 ;
-(void)dismissBanner:(id)arg1 ;
-(void)inAppNotificationPluginViewUserDidPerformCloseAction:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

