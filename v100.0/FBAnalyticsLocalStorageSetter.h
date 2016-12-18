/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnalyticsJavaScriptEvaluatorDelegate.h>

@class FBAnalyticsJavaScriptEvaluator, NSString;

@interface FBAnalyticsLocalStorageSetter : NSObject <FBAnalyticsJavaScriptEvaluatorDelegate> {

	FBAnalyticsJavaScriptEvaluator* _javaScriptEvaluator;
	BOOL _startedJavaScriptEvaluator;
	/*^block*/id _startCompletionBlock;

}

@property (nonatomic,copy) id startCompletionBlock;                 //@synthesize startCompletionBlock=_startCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJavaScriptEvaluator:(id)arg1 ;
-(void)setStartCompletionBlock:(id)arg1 ;
-(BOOL)localStorageExistsOnDisk;
-(void)_injectDeviceID:(id)arg1 usingHTML:(id)arg2 baseURL:(id)arg3 evaluatingJS:(id)arg4 ;
-(void)_onJavaScriptEvaluationComplete;
-(id)_localStorageFilePaths;
-(void)javaScriptEvaluator:(id)arg1 didSucceedWithResponse:(id)arg2 ;
-(void)javaScriptEvaluator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)startWithDeviceID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)startCompletionBlock;
-(void)dealloc;
-(id)init;
-(void)stop;
@end

