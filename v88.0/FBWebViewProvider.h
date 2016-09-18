/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewAnalytics, FBWebViewAlertHandler;
#import <Messenger/Messenger-Structs.h>
@interface FBWebViewProvider : NSObject {

	id<FBWebViewAnalytics> _analytics;
	id<FBWebViewAlertHandler> _alertHandler;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                    //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) id<FBWebViewAlertHandler> alertHandler;              //@synthesize alertHandler=_alertHandler - In the implementation block
-(id<FBWebViewAnalytics>)analytics;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 implementation:(int)arg3 ;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
@end

