/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBBrowserDebugOverlayView;

@interface FBBrowserDebugOverlayCoordinator : NSObject {

	double _webViewStartLoadingtime;
	FBBrowserDebugOverlayView* _browserDebuggerOverlayView;

}

@property (nonatomic,retain) FBBrowserDebugOverlayView * browserDebuggerOverlayView;              //@synthesize browserDebuggerOverlayView=_browserDebuggerOverlayView - In the implementation block
-(void)printWebViewStartLoading:(id)arg1 ;
-(void)printWebViewLoadingTime;
-(void)printWebViewTTITime;
-(void)printWebViewPrefetched;
-(FBBrowserDebugOverlayView *)browserDebuggerOverlayView;
-(void)setBrowserDebuggerOverlayView:(FBBrowserDebugOverlayView *)arg1 ;
@end

