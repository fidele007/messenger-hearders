/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/MNEmojiTrayViewDelegate.h>
#import <Messenger/MNEmojiVariationsPickerDelegate.h>
#import <Messenger/MNEmojiGridLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNEmojiDataSourceListening.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNNewEmojiTrayViewControllerDelegate;
@class MNEmojiTrayView, UILongPressGestureRecognizer, FBPopoverController, MNEmojiVariationsPicker, MNEmojiDataSource, NSString;

@interface MNNewEmojiTrayViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MNEmojiTrayViewDelegate, MNEmojiVariationsPickerDelegate, MNEmojiGridLayoutDelegate, UICollectionViewDelegateFlowLayout, MNEmojiDataSourceListening, UIGestureRecognizerDelegate, FBClassProvidable> {

	MNEmojiTrayView* _emojiTrayView;
	long long _selectedCategory;
	UILongPressGestureRecognizer* _skinToneLongPressRecognizer;
	UILongPressGestureRecognizer* _hawtEmojiLongPressRecognizer;
	FBPopoverController* _popoverController;
	MNEmojiVariationsPicker* _emojiVariationsPicker;
	MNEmojiDataSource* _emojiDataSource;
	NSString* _currentHawtEmoji;
	id<MNNewEmojiTrayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNNewEmojiTrayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithEmojiDataSource:(id)arg1 ;
-(void)_didLongPressForSkinToneOption:(id)arg1 ;
-(void)_didLongPressForHawtInteraction:(id)arg1 ;
-(void)_dismissVisibleEmojiVariationsPickerAnimated:(BOOL)arg1 ;
-(void)_presentSkinTonesForEmojiAtIndexPathIfNeeded:(id)arg1 shouldShowInstruction:(BOOL)arg2 ;
-(void)_setSelectedCategory:(long long)arg1 ;
-(BOOL)_isValidIndexPath:(id)arg1 ;
-(id)_getEmojiAtLocation:(CGPoint)arg1 ;
-(void)_initPopoverControllerIfNeeded;
-(void)_initEmojiVariationsPickerIfNeeded;
-(CGPoint)_midPointForEmojiAtIndexPath:(id)arg1 ;
-(void)_dismissPopoverControllerWithSelectedEmoji:(id)arg1 ;
-(void)emojiTrayViewDidPressBackspaceButton:(id)arg1 ;
-(void)emojiVariationsPickerDidPickEmoji:(id)arg1 ;
-(void)emojiVariationsPickerDidBeginLongPressingEmoji:(id)arg1 ;
-(void)emojiVariationsPickerDidCancelLongPressingEmoji;
-(void)emojiVariationsPickerDidEndLongPressingEmoji:(id)arg1 deepPress:(BOOL)arg2 ;
-(double)widthForEmojiCategoryLabelAtIndexPath:(id)arg1 ;
-(void)emojiGridLayoutDidLayoutCurrentFirstVisibleCategory:(long long)arg1 ;
-(void)emojiSkinToneDidUpdate;
-(void)setDelegate:(id<MNNewEmojiTrayViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNNewEmojiTrayViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

