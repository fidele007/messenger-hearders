/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNGameFunnelLogger : NSObject
+(void)startFunnelWithEntryPoint:(id)arg1 threadFBID:(id)arg2 ;
+(void)addActionWithActionName:(id)arg1 ;
+(void)addActionWithActionName:(id)arg1 tag:(id)arg2 ;
+(void)addActionWithActionName:(id)arg1 tag:(id)arg2 actionPayload:(id)arg3 ;
+(void)endFunnel;
+(id)funnelName;
@end

