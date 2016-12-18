/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBHTMLAdDiagnosticsDelegate;
#import <Messenger/Messenger-Structs.h>
@class ASDisplayNode, NSObject;

@interface FBHTMLAdDiagnostics : NSObject {

	BOOL _isCancelled;
	ASDisplayNode* _webViewNode;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _workingQueue;
	id<FBHTMLAdDiagnosticsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBHTMLAdDiagnosticsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithWebViewNode:(id)arg1 callbackQueue:(id)arg2 ;
-(void)scheduleWithTimeIntervalSinceNow:(double)arg1 ;
-(void)_performDiagnosticsIfNecessary;
-(void)_validateScreenshotImage:(id)arg1 ;
-(BOOL)_screenshotImageMatchesEmptyAd:(id)arg1 bytesPerRow:(unsigned long long)arg2 imageSize:(CGSize)arg3 ;
-(BOOL)_screenshotImageMatchesInsetAd:(id)arg1 bytesPerRow:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBHTMLAdDiagnosticsDelegate>)arg1 ;
-(id<FBHTMLAdDiagnosticsDelegate>)delegate;
@end

