/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayRule.h>

@class FBReachabilityAnnouncer;

@interface FBVideoNetworkConnectionAutoPlayRule : FBVideoAutoPlayRule {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	double _minBandwidth;
	BOOL _autoplayForUnknownBandwidth;
	double _minConfidence;
	unsigned long long _maxSampleStaleness;

}
-(id)initWithReachabilityAnnouncer:(id)arg1 minBandwidth:(double)arg2 autoplayForUnknownBandwidth:(BOOL)arg3 minConfidence:(double)arg4 maxSampleStaleness:(unsigned long long)arg5 ;
-(id)reasonForErrorCode:(unsigned long long)arg1 ;
-(unsigned long long)shouldAutoplay;
@end

