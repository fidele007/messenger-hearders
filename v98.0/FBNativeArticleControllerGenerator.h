/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBNativeArticleAdapter;
#import <Messenger/Messenger-Structs.h>
@class NSObject, BFExecutor, FBRichStoryBlockControllerRegistry, FBUserSession, NSDictionary;

@interface FBNativeArticleControllerGenerator : NSObject {

	BOOL _didBeginGeneration;
	NSObject*<OS_dispatch_queue> _workingQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BFExecutor* _callbackExecutor;
	FBRichStoryBlockControllerRegistry* _blockControllerRegistry;
	FBRichStoryBlockControllerRegistry* _annotationRegistry;
	/*^block*/id _fallbackCompletionBlock;
	/*^block*/id _completionBlock;
	FBUserSession* _session;
	NSDictionary* _analyticsExtras;
	id<FBNativeArticleAdapter> _adapter;

}
-(void)_recoverWithFallbackControllerAndError:(id)arg1 ;
-(void)_initiateFetchOfExternalResources;
-(void)_generatePrimaryControllersWithFontResourceHandles:(id)arg1 ;
-(void)_generateFallbackControllers;
-(id)_generateArticleControllersWithStyleSheet:(id)arg1 fontResourceHandles:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_generateArticleControllerWithStyleSheet:(id)arg1 usingFontResourceHandles:(id)arg2 viewportSize:(CGSize)arg3 ;
-(id)initWithBlockAdapter:(id)arg1 blockControllerRegistry:(id)arg2 annotationRegistry:(id)arg3 workingQueue:(id)arg4 callbackQueue:(id)arg5 fallbackCompletionBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 session:(id)arg8 analyticsExtras:(id)arg9 ;
-(void)generate;
-(void)_begin;
@end
