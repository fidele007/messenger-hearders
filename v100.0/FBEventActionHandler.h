/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventActionHandler : NSObject
+(id)setRsvpStatus:(id)arg1 forEvent:(id)arg2 session:(id)arg3 trackingCodes:(id)arg4 trackingNodes:(id)arg5 ref:(id)arg6 source:(id)arg7 onSuccess:(/*^block*/id)arg8 onError:(/*^block*/id)arg9 ;
+(id)_setWatchState:(id)arg1 forEvent:(id)arg2 session:(id)arg3 tracker:(id)arg4 actionName:(id)arg5 referrerExtraData:(id)arg6 currentExtraData:(id)arg7 trackingCodes:(id)arg8 trackingNodes:(id)arg9 ref:(id)arg10 refMechanism:(id)arg11 source:(id)arg12 sourceMechanism:(id)arg13 onSuccess:(/*^block*/id)arg14 onError:(/*^block*/id)arg15 ;
+(void)logEventStatusChangedIfNeed:(id)arg1 status:(id)arg2 event:(id)arg3 isPublicEvent:(BOOL)arg4 ;
+(id)_setRsvpStatus:(id)arg1 forEvent:(id)arg2 session:(id)arg3 tracker:(id)arg4 actionName:(id)arg5 referrerExtraData:(id)arg6 currentExtraData:(id)arg7 trackingCodes:(id)arg8 trackingNodes:(id)arg9 ref:(id)arg10 source:(id)arg11 onSuccess:(/*^block*/id)arg12 onError:(/*^block*/id)arg13 ;
+(id)setWatchState:(id)arg1 forEvent:(id)arg2 session:(id)arg3 tracker:(id)arg4 actionName:(id)arg5 referrerExtraData:(id)arg6 currentExtraData:(id)arg7 onSuccess:(/*^block*/id)arg8 onError:(/*^block*/id)arg9 ;
+(id)setWatchState:(id)arg1 forEvent:(id)arg2 session:(id)arg3 trackingCodes:(id)arg4 trackingNodes:(id)arg5 ref:(id)arg6 refMechanism:(id)arg7 source:(id)arg8 sourceMechanism:(id)arg9 onSuccess:(/*^block*/id)arg10 onError:(/*^block*/id)arg11 ;
+(id)removeEvent:(id)arg1 session:(id)arg2 tracker:(id)arg3 ;
+(id)setRsvpStatus:(id)arg1 forEvent:(id)arg2 session:(id)arg3 tracker:(id)arg4 actionName:(id)arg5 referrerExtraData:(id)arg6 currentExtraData:(id)arg7 onSuccess:(/*^block*/id)arg8 onError:(/*^block*/id)arg9 ;
@end

