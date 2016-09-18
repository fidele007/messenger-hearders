/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoAutoPlayRule.h>

@class FBReachabilityAnnouncer;

@interface FBVideoNetworkConnectionAutoPlayRule : FBVideoAutoPlayRule {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	double _minBandwidth;
	BOOL _autoplayForUnknownBandwidth;

}
-(id)initWithReachabilityAnnouncer:(id)arg1 minBandwidth:(double)arg2 autoplayForUnknownBandwidth:(BOOL)arg3 ;
-(id)reasonForErrorCode:(unsigned long long)arg1 ;
-(unsigned long long)shouldAutoplay;
@end

