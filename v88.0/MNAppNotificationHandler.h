/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/FBMAppInitializedListening.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol MNSecureThreadServiceControlling;
@class MNAppNotificationHandlerInjector, NSMutableArray, NSString;

@interface MNAppNotificationHandler : NSObject <FBClassInjectable, FBMAppInitializedListening, UIAlertViewDelegate> {

	MNAppNotificationHandlerInjector* _injector;
	BOOL _readyToHandleNotifications;
	id<MNSecureThreadServiceControlling> _secureMessagingService;
	NSMutableArray* _queuedActions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSMutableArray * queuedActions;                  //@synthesize queuedActions=_queuedActions - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 actionIdentifier:(id)arg3 responseInfo:(id)arg4 userTappedNotification:(BOOL)arg5 isColdStart:(BOOL)arg6 notificationHandledBlock:(/*^block*/id)arg7 ;
-(BOOL)_handleNonAPNSNotification:(id)arg1 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 actionIdentifier:(id)arg3 responseInfo:(id)arg4 userTappedNotification:(BOOL)arg5 ;
-(void)_navigateToThreadQuery:(id)arg1 ;
-(void)_doHandleNotificationsForApplication:(id)arg1 launchedWithOptions:(id)arg2 userTapped:(BOOL)arg3 ;
-(void)handleNotificationsForApplication:(id)arg1 launchedWithOptions:(id)arg2 userTapped:(BOOL)arg3 ;
-(void)discardPendingNotifications;
-(NSMutableArray *)queuedActions;
-(void)setQueuedActions:(NSMutableArray *)arg1 ;
@end
