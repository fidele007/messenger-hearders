/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNInboxImpressionAnalyticsLogger : NSObject
-(void)_logItem:(id)arg1 duration:(double)arg2 numberOfAggregatedItems:(unsigned long long)arg3 ;
-(void)_logAggregatedItems:(id)arg1 ;
-(void)_logEventsIndividually:(id)arg1 ;
-(void)logDuration:(double)arg1 loggingData:(id)arg2 ;
-(void)logClick:(id)arg1 withClickTarget:(id)arg2 ;
-(void)logItemHide:(id)arg1 ;
-(void)logEvents:(id)arg1 ;
@end
