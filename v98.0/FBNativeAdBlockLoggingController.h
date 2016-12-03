/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCache, FBUserSession;

@interface FBNativeAdBlockLoggingController : NSObject {

	FBCache* _lastImpressionLogDatesCache;
	FBUserSession* _userSession;
	BOOL _useTrackingCodesLogging;

}
-(void)logNativeAdImpressionWithStoryBlock:(id)arg1 nativeAdObject:(id)arg2 analyticsInfo:(id)arg3 ;
-(void)logNativeAdPerfWithStoryBlock:(id)arg1 analyticsInfo:(id)arg2 ;
-(void)logNativeAdClickWithClickType:(unsigned long long)arg1 storyBlock:(id)arg2 nativeAdObject:(id)arg3 analyticsInfo:(id)arg4 ;
-(void)_sendLoggingRequestInternal:(id)arg1 withExtraData:(id)arg2 ;
-(id)_getRequestURL:(id)arg1 withExtraData:(id)arg2 ;
-(id)initWithImpressionLoggingCache:(id)arg1 session:(id)arg2 ;
-(void)logNativeAdMultiShareChildImpressionWithStoryBlock:(id)arg1 childStoryBlock:(id)arg2 childAdObject:(id)arg3 analyticsInfo:(id)arg4 ;
@end
