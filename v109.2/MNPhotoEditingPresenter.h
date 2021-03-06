/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBProvider, MNModalPresentation, MNPhotoEditingPresenterDelegate;
@class MNImageRequester, MNImageUploadCandidateStore, MNPhotoEditingViewController, NSString;

@interface MNPhotoEditingPresenter : NSObject <FBClassProvidable> {

	id<FBProvider> _photoEditingViewControllerProvider;
	id<MNModalPresentation> _modalPresenter;
	MNImageRequester* _imageRequester;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	MNPhotoEditingViewController* _photoEditingViewController;
	id<MNPhotoEditingPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentPhotoEditingViewWithContent:(id)arg1 ;
-(void)_photoEditingViewControllerDidCompleteEditingWithImage:(id)arg1 ;
-(id)initWithPhotoEditingViewControllerProvider:(id)arg1 modalPresenter:(id)arg2 imageRequester:(id)arg3 imageUploadCandidateStore:(id)arg4 ;
-(void)_didFetchImage:(id)arg1 ;
-(void)_presentPhotoEditingViewControllerWithImage:(id)arg1 ;
-(void)_willDismissPhotoEditingViewController;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setDelegate:(id<MNPhotoEditingPresenterDelegate>)arg1 ;
-(id<MNPhotoEditingPresenterDelegate>)delegate;
@end

