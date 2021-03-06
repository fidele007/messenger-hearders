/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebViewDelegate.h>

@protocol FBWebView, FBAnalyticsJavaScriptEvaluatorDelegate;
@class UIView, NSString;

@interface FBAnalyticsJavaScriptEvaluator : NSObject <FBWebViewDelegate> {

	UIView*<FBWebView> _webView;
	id<FBAnalyticsJavaScriptEvaluatorDelegate> _delegate;
	NSString* _javaScriptToEvaluate;

}

@property (nonatomic,copy) NSString * javaScriptToEvaluate;                                    //@synthesize javaScriptToEvaluate=_javaScriptToEvaluate - In the implementation block
@property (assign,nonatomic) id<FBAnalyticsJavaScriptEvaluatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)setJavaScriptToEvaluate:(NSString *)arg1 ;
-(NSString *)javaScriptToEvaluate;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 thenEvaluateJS:(id)arg3 ;
-(void)setDelegate:(id<FBAnalyticsJavaScriptEvaluatorDelegate>)arg1 ;
-(id<FBAnalyticsJavaScriptEvaluatorDelegate>)delegate;
-(void)stop;
@end

