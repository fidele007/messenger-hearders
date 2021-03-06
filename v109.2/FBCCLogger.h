/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCCLogger <NSObject>
@required
-(void)removeAdditionalParametersForAllFilters;
-(void)setAdditionalParameters:(id)arg1 forFilter:(id)arg2;
-(void)startPerformanceLoggingForEvent:(unsigned long long)arg1 parameters:(id)arg2;
-(void)stopPerformanceLoggingForEvent:(unsigned long long)arg1 reason:(unsigned long long)arg2 parameters:(id)arg3;
-(double)preferredPerformanceTimerInterval;
-(void)logPerformanceForFilter:(id)arg1 parameters:(id)arg2;
-(void)setTimeMarker:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;

@end

