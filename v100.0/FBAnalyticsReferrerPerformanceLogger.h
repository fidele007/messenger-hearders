/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBAnalyticsReferrerPerformanceLogger : NSObject {

	NSString* _analyticsModule;
	NSDictionary* _referralInfo;
	NSString* _logSessionID;

}
+(void)configureViewControllerIfApplicable:(id)arg1 withURL:(id)arg2 ;
+(id)parametersDictionaryFromURL:(id)arg1 ;
+(id)URLParametersWithReferrerType:(id)arg1 referrerID:(id)arg2 ;
-(id)initWithReferralInfo:(id)arg1 module:(id)arg2 ;
-(void)logEvent:(id)arg1 ;
@end

