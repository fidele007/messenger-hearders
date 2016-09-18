/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNInAppNotificationPluginServiceListener.h>

@class NSString;

@interface MNInAppNotificationPluginServiceListenerAnnouncer : FBAnnouncerBase <MNInAppNotificationPluginServiceListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inAppNotificationPluginService:(id)arg1 userDidTapContentInBanner:(id)arg2 ;
-(void)inAppNotificationPluginService:(id)arg1 didDismissBanner:(id)arg2 ;
-(void)inAppNotificationPluginService:(id)arg1 userDidTapCloseInInBanner:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

