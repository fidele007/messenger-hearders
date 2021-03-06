/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNBotComposerAnalyticsLogger : NSObject
+(id)sharedLogger;
-(void)logQuickReplyIsSelected:(id)arg1 forPageID:(id)arg2 selectedIndex:(unsigned long long)arg3 numberOfQuickReplies:(unsigned long long)arg4 ;
-(void)logQuickRepliesPresentedForPageID:(id)arg1 quickReplies:(id)arg2 ;
-(void)logBotComposerMenuIconPresentedOnThreadOpen:(id)arg1 ;
-(void)logMenuOpenedAfterTappedOnMenuIcon:(id)arg1 ;
-(void)logMenuOptionIsSelected:(id)arg1 pageID:(id)arg2 selectedIndex:(unsigned long long)arg3 numberOfMenuOptions:(unsigned long long)arg4 ;
-(void)logSwitchToNormalComposerEvent:(id)arg1 ;
-(void)logSwitchBackToBotComposerEvent:(id)arg1 triggerEventType:(unsigned long long)arg2 ;
@end

