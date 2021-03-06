/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSMutableArray, NSString, NSDate, FBAnalytics;

@interface FBWebRedirectTracker : NSObject {

	NSTimer* _redirectChainLoggingTimer;
	NSMutableArray* _redirectChain;
	NSString* _originalUrl;
	BOOL _hasDataToLog;
	NSDate* _startDate;
	FBAnalytics* _analytics;
	BOOL _recording;

}

@property (getter=isRecording,nonatomic,readonly) BOOL recording;              //@synthesize recording=_recording - In the implementation block
-(void)_logRedirectChain;
-(id)_normalizeHost:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 userSession:(id)arg2 ;
-(void)recordURL:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)stopRecording;
-(BOOL)isRecording;
@end

