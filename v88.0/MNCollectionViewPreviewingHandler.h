/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNVideoPreviewViewControllerDelegate.h>
#import <Messenger/MNSaveAttachmentListener.h>
#import <Messenger/MNPhotoNodeActionHandlerDelegate.h>
#import <Messenger/MNProfilePreviewViewControllerDelegate.h>
#import <Messenger/MNLinkPreviewViewControllerDelegate.h>
#import <Messenger/MNStickerPreviewViewControllerDelegate.h>
#import <Messenger/MNCollectionViewPreviewingHandling.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNCollectionViewPreviewingHandlerDelegate;
@class NSString, NSArray, MNCollectionViewPreviewingHandlerInjector, FBLazyCreator, MN3DTouchPreviewingExperimentContext;

@interface MNCollectionViewPreviewingHandler : NSObject <FBClassInjectable, MNVideoPreviewViewControllerDelegate, MNSaveAttachmentListener, MNPhotoNodeActionHandlerDelegate, MNProfilePreviewViewControllerDelegate, MNLinkPreviewViewControllerDelegate, MNStickerPreviewViewControllerDelegate, MNCollectionViewPreviewingHandling, FBClassProvidable> {

	NSString* _source;
	NSArray* _supplementaryViewElementKinds;
	MNCollectionViewPreviewingHandlerInjector* _injector;
	FBLazyCreator* _stickerResourceManagerCreator;
	FBLazyCreator* _stickerManagerCreator;
	MN3DTouchPreviewingExperimentContext* _3DTouchPreviewingExperimentContext;
	id<MNCollectionViewPreviewingHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNCollectionViewPreviewingHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)configureWithSource:(id)arg1 supplementaryViewElementKinds:(id)arg2 ;
-(void)attachmentDidSave:(unsigned long long)arg1 ;
-(void)attachmentSaveDidFailWithError:(id)arg1 attachmentType:(unsigned long long)arg2 ;
-(void)photoNodeActionHandlerWillOpenNode:(id)arg1 ;
-(BOOL)_isEligibleForPreviewing;
-(id)_photoPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_videoPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_profilePreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_threadPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_linkPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_addressPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(id)_stickerPreviewViewControllerForLocation:(CGPoint)arg1 withPreviewingContext:(id)arg2 ;
-(void)videoPreviewViewController:(id)arg1 willCommitWithData:(id)arg2 ;
-(void)videoPreviewViewController:(id)arg1 didSelectForwardWithMessage:(id)arg2 ;
-(void)videoPreviewViewController:(id)arg1 didSelectSaveWithMessage:(id)arg2 ;
-(BOOL)videoPreviewViewController:(id)arg1 canForwardWithMessage:(id)arg2 ;
-(void)photoNodeActionHandlerDidSelectForward:(id)arg1 ;
-(void)photoNodeActionHandlerDidSelectSave:(id)arg1 ;
-(void)linkPreviewViewController:(id)arg1 didSelectForwardWithURL:(id)arg2 ;
-(void)stickerPreviewViewController:(id)arg1 didSelectForwardWithMessage:(id)arg2 ;
-(void)profilePreviewViewController:(id)arg1 didSelectForwardWithURL:(id)arg2 ;
-(void)setDelegate:(id<MNCollectionViewPreviewingHandlerDelegate>)arg1 ;
-(id<MNCollectionViewPreviewingHandlerDelegate>)delegate;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
@end

