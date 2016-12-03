/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCCLogger <NSObject>
@required
-(void)removeAdditionalParametersForAllFilters;
-(void)setAdditionalParameters:(id)arg1 forFilter:(id)arg2;
-(void)startPerformanceLoggingForEvent:(unsigned long long)arg1 parameters:(id)arg2;
-(void)stopPerformanceLoggingForEvent:(unsigned long long)arg1 reason:(unsigned long long)arg2;
-(double)preferredPerformanceTimerInterval;
-(void)logPerformanceForFilter:(id)arg1 parameters:(id)arg2;

@end
