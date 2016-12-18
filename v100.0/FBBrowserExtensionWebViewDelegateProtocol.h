/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol FBBrowserExtensionWebViewDelegateProtocol <FBWebViewControllerDelegate,FBBrowserExtensionAutofillScrollViewDelegate>
@property (nonatomic,copy,readonly) NSString * previousWebsiteTitle; 
@property (nonatomic,readonly) NSURL * previousLinkBrowsed; 
@property (assign,nonatomic,__weak) id<FBBrowserSurface> browserSurface; 
@optional
-(void)webViewController:(id)arg1 didUpdateProgress:(double)arg2;

@required
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2 withError:(id)arg3;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2;
-(NSURL *)previousLinkBrowsed;
-(NSString *)previousWebsiteTitle;
-(void)didPresentWebViewController:(id)arg1;
-(void)showAutofillScrollViewWithSession:(id)arg1 featureEnabledList:(id)arg2 autofillGroups:(id)arg3 autofillConfirmedCallback:(/*^block*/id)arg4;
-(void)hideAutofillScrollView;
-(id<FBBrowserSurface>)browserSurface;
-(void)setBrowserSurface:(id)arg1;

@end

