/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBInsights : NSObject
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(unsigned long long)flushBehavior;
+(void)setFlushBehavior:(unsigned long long)arg1 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 ;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 session:(id)arg3 ;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 ;
+(void)flush;
+(id)appVersion;
+(void)setAppVersion:(id)arg1 ;
@end

