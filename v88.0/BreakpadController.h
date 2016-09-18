/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface BreakpadController : NSObject {

	NSObject*<OS_dispatch_queue> queue_;
	void* breakpadRef_;
	NSMutableDictionary* configuration_;
	BOOL enableUploads_;
	BOOL started_;
	int uploadIntervalInSeconds_;
	NSDictionary* uploadTimeParameters_;

}
+(id)sharedInstance;
-(void)sendStoredCrashReports;
-(void)setUploadInterval:(int)arg1 ;
-(void)setParametersToAddAtUploadTime:(id)arg1 ;
-(int)sendDelay;
-(void)reportWillBeSent;
-(void)threadUnsafeSendReportWithConfiguration:(id)arg1 withBreakpadRef:(void*)arg2 ;
-(void)setUploadingEnabled:(BOOL)arg1 ;
-(void)setUploadingURL:(id)arg1 ;
-(void)addUploadParameter:(id)arg1 forKey:(id)arg2 ;
-(void)removeUploadParameterForKey:(id)arg1 ;
-(void)withBreakpadRef:(/*^block*/id)arg1 ;
-(void)hasReportToUpload:(/*^block*/id)arg1 ;
-(void)getCrashReportCount:(/*^block*/id)arg1 ;
-(void)getNextReportConfigurationOrSendDelay:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start:(BOOL)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(id)initSingleton;
-(void)resetConfiguration;
@end

