/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBugReportModalViewControllerPresenting <NSObject>
@optional
-(id)urlForAbuseReportComponent;
-(id)viewControllerForURL:(id)arg1 onBugReporterNavStack:(BOOL)arg2;
-(void)presentWebViewForURL:(id)arg1;
-(BOOL)isViewControllerPresented:(id)arg1;
-(void)pushNavigationViewController:(id)arg1;
-(void)popNavigationViewController;
-(id)urlForSendFeedback;
-(void)presentWebView:(id)arg1 delegate:(id)arg2;
-(void)presentPhotoPermissionsRequestWithDelegate:(id)arg1;
-(id)descriptionSuffix;
-(id)userid;
-(void)logAnalyticsEvent:(id)arg1 extra:(id)arg2;
-(id)configuration;

@required
-(void)dismissViewController:(id)arg1;
-(void)presentPhotoPermissionsRequestFromView:(id)arg1;
-(id)currentWindow;
-(BOOL)shouldEnableShakeToReport;
-(id)uploaderWithUserSession:(id)arg1;
-(void)presentViewController:(id)arg1;

@end

