/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBEventLogger : NSObject
+(id)getSourceStringFromTracker:(id)arg1 ;
+(id)getReferringSourceStringFromTracker:(id)arg1 ;
+(id)getMechanismStringFromTracker:(id)arg1 ;
+(id)getReferringMechanismStringFromTracker:(id)arg1 ;
+(id)surfaceToString:(long long)arg1 ;
+(id)mechanismToString:(long long)arg1 ;
+(id)_dictionaryToJsonString:(id)arg1 ;
+(void)_fillAnalyticsNode:(id)arg1 surface:(id)arg2 mechanism:(id)arg3 extraData:(id)arg4 ;
+(id)genActionHistoryWithInputClass:(Class)arg1 referrerExtraData:(id)arg2 currentExtraData:(id)arg3 tracker:(id)arg4 ;
+(id)genActionHistoryWithInputClass:(Class)arg1 ref:(id)arg2 refMechanism:(id)arg3 source:(id)arg4 sourceMechanism:(id)arg5 trackingNodes:(id)arg6 ;
+(id)sharedLogger;
-(void)logWithTracker:(id)arg1 action:(id)arg2 extras:(id)arg3 ;
-(void)logWithTracker:(id)arg1 action:(id)arg2 eventId:(id)arg3 ;
-(void)logWithTracker:(id)arg1 action:(id)arg2 ;
-(void)logWithTracker:(id)arg1 action:(id)arg2 extras:(id)arg3 eventId:(id)arg4 ;
@end

