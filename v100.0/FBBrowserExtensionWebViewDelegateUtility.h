/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBrowserExtensionWebViewDelegateProtocol.h>

@protocol FBBrowserSurface;
@class NSURL, NSString, FBBrowserExtensionAutofillScrollView;

@interface FBBrowserExtensionWebViewDelegateUtility : NSObject <FBBrowserExtensionWebViewDelegateProtocol> {

	/*^block*/id _autofillConfirmedCallback;
	NSURL* _previousLinkBrowsed;
	NSString* _previousWebsiteTitle;
	id<FBBrowserSurface> _browserSurface;
	FBBrowserExtensionAutofillScrollView* _autofillScrollView;

}

@property (nonatomic,retain) FBBrowserExtensionAutofillScrollView * autofillScrollView;              //@synthesize autofillScrollView=_autofillScrollView - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserSurface> browserSurface;                             //@synthesize browserSurface=_browserSurface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * previousWebsiteTitle;                                 //@synthesize previousWebsiteTitle=_previousWebsiteTitle - In the implementation block
@property (nonatomic,readonly) NSURL * previousLinkBrowsed;                                          //@synthesize previousLinkBrowsed=_previousLinkBrowsed - In the implementation block
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(NSURL *)previousLinkBrowsed;
-(NSString *)previousWebsiteTitle;
-(void)didPresentWebViewController:(id)arg1 ;
-(void)showAutofillScrollViewWithSession:(id)arg1 featureEnabledList:(id)arg2 autofillGroups:(id)arg3 autofillConfirmedCallback:(/*^block*/id)arg4 ;
-(void)hideAutofillScrollView;
-(id<FBBrowserSurface>)browserSurface;
-(void)setBrowserSurface:(id<FBBrowserSurface>)arg1 ;
-(void)autofillScrollViewDidTapAutofill:(id)arg1 selectedAutofillGroup:(id)arg2 ;
-(void)_didTapAutofill:(id)arg1 ;
-(FBBrowserExtensionAutofillScrollView *)autofillScrollView;
-(void)setAutofillScrollView:(FBBrowserExtensionAutofillScrollView *)arg1 ;
@end
