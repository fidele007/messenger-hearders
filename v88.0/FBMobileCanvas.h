/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBWebBridge, NSDictionary, FBMobileCanvasDialogWrapper;

@interface FBMobileCanvas : NSObject {

	FBWebBridge* _webBridge;
	NSDictionary* _metaTags;
	FBMobileCanvasDialogWrapper* _dialog;

}

@property (nonatomic,retain) FBMobileCanvasDialogWrapper * dialog;              //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,copy) NSDictionary * metaTags;                             //@synthesize metaTags=_metaTags - In the implementation block
-(void)_closeDialogWrapper:(id)arg1 ;
-(void)setMetaTags:(NSDictionary *)arg1 ;
-(NSDictionary *)metaTags;
-(void)fireActionButtonEvent;
-(void)fireCancelButtonEvent;
-(void)dialogClosed;
-(void)hijackedDialogClosed;
-(void)sendResultFromHijackedDialog:(id)arg1 fromURL:(id)arg2 ;
-(BOOL)handlePossibleBridgeRequestURL:(id)arg1 ;
-(void)attachToWebView;
-(void)openURL:(id)arg1 windowID:(id)arg2 ;
-(void)setCancelAction:(id)arg1 handleCancelEvent:(id)arg2 ;
-(void)closeWindowWithID:(id)arg1 ;
-(void)dialogDidLoad;
-(void)postMessage:(id)arg1 targetOrigin:(id)arg2 windowID:(id)arg3 ;
-(id)initWithDialog:(id)arg1 ;
-(FBMobileCanvasDialogWrapper *)dialog;
-(void)setDialog:(FBMobileCanvasDialogWrapper *)arg1 ;
@end

