/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerResourceManager;
#import <Messenger/Messenger-Structs.h>
@class FBPopoverController, UILongPressGestureRecognizer, MNComposerBigPreviewViewController, MNPhotoViewImageDownloadController, MNMediaCollectionViewCell;

@interface MNComposerBigPreviewGestureHandler : NSObject {

	FBPopoverController* _previewPopoverController;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	MNComposerBigPreviewViewController* _previewViewController;
	id<FBStickerResourceManager> _stickerResourceManager;
	MNPhotoViewImageDownloadController* _photoDownloadController;
	CGRect _keyboardFrame;
	MNMediaCollectionViewCell* _currentCollectionViewCellPreviewed;

}

@property (nonatomic,retain) MNMediaCollectionViewCell * currentCollectionViewCellPreviewed;              //@synthesize currentCollectionViewCellPreviewed=_currentCollectionViewCellPreviewed - In the implementation block
-(CGSize)_resolvePopoverContentSize;
-(CGSize)_countMaxPopoverContentSize;
-(void)setCurrentCollectionViewCellPreviewed:(MNMediaCollectionViewCell *)arg1 ;
-(id)composerBigPreviewViewController;
-(void)_updatePopoverPosition;
-(id)initWithStickerResourceManager:(id)arg1 photoViewImageDownloadController:(id)arg2 ;
-(void)attachHandlerToCollectionView:(id)arg1 ;
-(void)detachHandlerFromCollectionView:(id)arg1 ;
-(MNMediaCollectionViewCell *)currentCollectionViewCellPreviewed;
-(void)dealloc;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_handleLongPressGesture:(id)arg1 ;
@end

