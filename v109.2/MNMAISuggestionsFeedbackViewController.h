/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNActionSheetPresenting.h>

@protocol FBStickerResourceManager, MNActionSheetPresentationDelegate, MNMAISuggestionsFeedbackViewControllerDelegate;
@class UITableView, NSArray, MNMAction, FBImageDownloader, FBMobileConfigContextManager, MNMAISuggestionsFeedbackConfiguration, NSString;

@interface MNMAISuggestionsFeedbackViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNActionSheetPresenting> {

	UITableView* _feedbackTableView;
	NSArray* _feedbackItems;
	NSArray* _previewItems;
	MNMAction* _suggestion;
	id<FBStickerResourceManager> _stickerResourceManager;
	FBImageDownloader* _imageDownloader;
	FBMobileConfigContextManager* _configManager;
	MNMAISuggestionsFeedbackConfiguration* _configuraion;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;
	id<MNMAISuggestionsFeedbackViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MNMAction * suggestion;                                                        //@synthesize suggestion=_suggestion - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsFeedbackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;               //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(void)actionSheetDidResize;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(void)actionSheetWillDismiss;
-(id)initWithStickerResourceManager:(id)arg1 imageDownloader:(id)arg2 configContextManager:(id)arg3 configuration:(id)arg4 ;
-(void)setupFeedbackSheetWithSuggestion:(id)arg1 ;
-(void)cleanupFeedbackSheet;
-(id)_feedbackItemsForSuggestion:(id)arg1 configuration:(id)arg2 ;
-(id)_previewItemsForSuggestion:(id)arg1 ;
-(id)_getStickerPreviewViewModelIfNecessary:(id)arg1 ;
-(id)_getPreviewViewModelIfNecessary:(id)arg1 ;
-(void)setDelegate:(id<MNMAISuggestionsFeedbackViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNMAISuggestionsFeedbackViewControllerDelegate>)delegate;
-(void)loadView;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
-(MNMAction *)suggestion;
@end

