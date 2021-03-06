/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBrowserExtensionWebViewDelegateProtocol.h>

@protocol FBBrowserExtensionLoggerProtocol, FBBrowserSurface;
@class NSString, NSURL, FBUserSession, FBBrowserExtensionWebViewDelegateUtility, FBMessengerExtensionFavoriteItemManagementHandler;

@interface MNBrowserExtensionWebViewDelegate : NSObject <FBBrowserExtensionWebViewDelegateProtocol> {

	FBUserSession* _session;
	/*^block*/id _webViewTitleChangedBlock;
	id<FBBrowserExtensionLoggerProtocol> _logger;
	FBBrowserExtensionWebViewDelegateUtility* _browserExtensionWebViewDelegateUtility;
	NSString* _pageID;
	NSString* _logSource;
	NSString* _surface;
	FBMessengerExtensionFavoriteItemManagementHandler* _favoriteItemManagementHandler;
	id<FBBrowserSurface> _browserSurface;

}

@property (nonatomic,copy,readonly) NSString * pageID;                                                                       //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * logSource;                                                                    //@synthesize logSource=_logSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                                                                      //@synthesize surface=_surface - In the implementation block
@property (nonatomic,retain) FBMessengerExtensionFavoriteItemManagementHandler * favoriteItemManagementHandler;              //@synthesize favoriteItemManagementHandler=_favoriteItemManagementHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserSurface> browserSurface;                                                     //@synthesize browserSurface=_browserSurface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * previousWebsiteTitle; 
@property (nonatomic,readonly) NSURL * previousLinkBrowsed; 
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 favoriteItemTappedWithURL:(id)arg2 selected:(BOOL)arg3 ;
-(NSString *)logSource;
-(id)initWithSession:(id)arg1 pageID:(id)arg2 logSource:(id)arg3 surface:(id)arg4 webViewTitleChangedBlock:(/*^block*/id)arg5 logger:(id)arg6 ;
-(void)setFavoriteItemManagementHandler:(FBMessengerExtensionFavoriteItemManagementHandler *)arg1 ;
-(NSURL *)previousLinkBrowsed;
-(NSString *)previousWebsiteTitle;
-(void)_logFailedToLoadURL:(id)arg1 withError:(id)arg2 ;
-(void)didPresentWebViewController:(id)arg1 ;
-(void)showAutofillScrollViewWithSession:(id)arg1 featureEnabledList:(id)arg2 autofillGroups:(id)arg3 autofillConfirmedCallback:(/*^block*/id)arg4 ;
-(void)hideAutofillScrollView;
-(id<FBBrowserSurface>)browserSurface;
-(void)setBrowserSurface:(id<FBBrowserSurface>)arg1 ;
-(void)autofillScrollViewDidTapAutofill:(id)arg1 selectedAutofillGroup:(id)arg2 ;
-(FBMessengerExtensionFavoriteItemManagementHandler *)favoriteItemManagementHandler;
-(NSString *)pageID;
-(NSString *)surface;
@end

