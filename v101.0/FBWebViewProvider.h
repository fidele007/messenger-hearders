/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
-(id)webViewForBackgroundProcessingWithEmptyFrameAndProcessPoolContainer:(id)arg1 ;
-(id)webViewWithFrame:(CGRect)arg1 processPoolContainer:(id)arg2 implementation:(int)arg3 ;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
@end
