/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMediaPreviewActionSheetViewControllerDelegate.h>
#import <Messenger/MNPhotoEditingPresenterDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNMediaActionSheetPresentationListener, MNModalPresentation, MNMediaPreviewActionSheetPresenterDelegate;
@class NSString, FBAnalytics, MNTextAndAttachmentForwardContent, FBMSyncedThreadKey, NSArray, MNMediaPreviewActionSheetViewController, MNMediaPreviewActionSheetConfiguration, MNPhotoEditingPresenter, MNImageRequester;

@interface MNMediaPreviewActionSheetPresenter : NSObject <MNMediaPreviewActionSheetViewControllerDelegate, MNPhotoEditingPresenterDelegate, FBClassProvidable> {

	NSString* _conversationInitiator;
	FBAnalytics* _analytics;
	MNTextAndAttachmentForwardContent* _pendingContent;
	FBMSyncedThreadKey* _threadKey;
	NSArray* _recipientFBIDs;
	id<MNMediaActionSheetPresentationListener> _listener;
	MNMediaPreviewActionSheetViewController* _presentedVC;
	id<MNModalPresentation> _modalPresenter;
	MNMediaPreviewActionSheetConfiguration* _configuration;
	MNPhotoEditingPresenter* _photoEditingPresenter;
	MNImageRequester* _imageRequester;
	id<MNMediaPreviewActionSheetPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaPreviewActionSheetPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentActionSheetWithTitle:(id)arg1 content:(id)arg2 recipientFBIDs:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)presentPhotoEditingViewWithContent:(id)arg1 ;
-(void)presentActionSheetWithContent:(id)arg1 delay:(double)arg2 inThreadWithKey:(id)arg3 conversationInitiator:(id)arg4 ;
-(void)presentActionSheetWithViewController:(id)arg1 attributionViewModel:(id)arg2 conversationInitiator:(id)arg3 ;
-(id)initWithModalPresenter:(id)arg1 photoEditingPresenter:(id)arg2 listener:(id)arg3 imageRequester:(id)arg4 ;
-(id)_recipientFBIDs;
-(void)_logMediaPreviewActionSheetDidPresent;
-(void)_logMediaPreviewActionSheetDidTapSend;
-(void)mediaPreviewActionSheetViewControllerDidCancel:(id)arg1 ;
-(void)mediaPreviewActionSheetViewController:(id)arg1 didSendContent:(id)arg2 ;
-(void)mediaPreviewActionSheetViewController:(id)arg1 didTapEditContent:(id)arg2 ;
-(void)mediaPreviewActionSheetViewControllerDidDeselectContent:(id)arg1 ;
-(void)mediaPreviewActionSheetViewController:(id)arg1 didTapAttribution:(id)arg2 ;
-(BOOL)mediaPreviewActionSheetViewControllerAllowEditing:(id)arg1 ;
-(id)mediaPreviewActionSheetViewControllerCancelButtonTitle:(id)arg1 ;
-(void)photoEditingViewPresenterDidTapCancel:(id)arg1 ;
-(void)photoEditingViewPresenter:(id)arg1 didTapSendWithContent:(id)arg2 ;
-(void)setDelegate:(id<MNMediaPreviewActionSheetPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaPreviewActionSheetPresenterDelegate>)delegate;
-(void)_reset;
-(void)setConfiguration:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
@end

