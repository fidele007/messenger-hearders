/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebViewDelegate <NSObject>
@optional
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2;
-(BOOL)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5;
-(void)webView:(id)arg1 didStartNavigationRequest:(id)arg2;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 progressChanged:(double)arg2;
-(void)webView:(id)arg1 titleChanged:(id)arg2;
-(void)webView:(id)arg1 URLChanged:(id)arg2;
-(void)webView:(id)arg1 navigationHistoryChangedCanGoBack:(BOOL)arg2 canGoForward:(BOOL)arg3;
-(void)webView:(id)arg1 loadingStateChanged:(BOOL)arg2;
-(void)webViewBlockingResourcesLoaded:(id)arg1;
-(void)webViewWillPushNavigationState:(id)arg1;
-(void)webViewWillPopNavigationState:(id)arg1;
-(void)webViewSelectionChanged:(id)arg1;
-(void)webView:(id)arg1 scriptMessageReceivedFrom:(id)arg2 websiteURL:(id)arg3 messageName:(id)arg4 messageParams:(id)arg5;
-(void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

