/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/CKComponentHostingViewDelegate.h>
#import <Messenger/CKComponentProvider.h>

@class FBRapidReportingNetworkingController, NSString, FBUserSession, UIView, FBRapidReportingToolbox, CKComponentHostingView, FBMemRapidReportingPrompt;

@interface FBRapidReportingViewController : UIViewController <CKComponentHostingViewDelegate, CKComponentProvider> {

	FBRapidReportingNetworkingController* _networkingController;
	NSString* _reportableID;
	FBUserSession* _session;
	UIView* _shadowView;
	CGRect _keyboardFrame;
	BOOL _userInput;
	NSString* _location;
	FBRapidReportingToolbox* _toolbox;
	/*^block*/id _completion;
	CKComponentHostingView* _componentHostingView;
	FBMemRapidReportingPrompt* _metadata;

}

@property (nonatomic,retain) CKComponentHostingView * componentHostingView;              //@synthesize componentHostingView=_componentHostingView - In the implementation block
@property (nonatomic,retain) FBMemRapidReportingPrompt * metadata;                       //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithReportableID:(id)arg1 location:(id)arg2 session:(id)arg3 uiProvider:(id)arg4 additionalDataUploader:(id)arg5 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(CKComponentHostingView *)componentHostingView;
-(void)tappedHelpCenter;
-(void)submitReport:(id)arg1 context:(id)arg2 ;
-(void)tappedDone;
-(void)userInputChanged:(id)arg1 dirty:(id)arg2 ;
-(void)_updateContainerViewSize;
-(void)setComponentHostingView:(CKComponentHostingView *)arg1 ;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(FBMemRapidReportingPrompt *)metadata;
-(void)setMetadata:(FBMemRapidReportingPrompt *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)tappedCancel;
@end

