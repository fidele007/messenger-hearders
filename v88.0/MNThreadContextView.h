/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MNAvatarImageDecorating, MNThreadContextViewDelegate;
@class FBRichTextView, UIImageView, UIView, UITapGestureRecognizer, UICollectionView, MNThreadContextViewModel, MNProfileImageView, MNThreadContextContactStatusView, NSString;

@interface MNThreadContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	FBRichTextView* _nameTextView;
	FBRichTextView* _contextTextView;
	FBRichTextView* _topDetailTextView;
	FBRichTextView* _bottomDetailTextView;
	UIImageView* _profileMaskImageView;
	UIView* _separatorView;
	UIView* _tapView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UICollectionView* _tagCollectionView;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNThreadContextViewModel* _threadContextViewModel;
	MNProfileImageView* _profileImageView;
	id<MNThreadContextViewDelegate> _delegate;
	MNThreadContextContactStatusView* _contactStatusView;

}

@property (nonatomic,retain) MNThreadContextViewModel * threadContextViewModel;                   //@synthesize threadContextViewModel=_threadContextViewModel - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                             //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadContextViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNThreadContextContactStatusView * contactStatusView;              //@synthesize contactStatusView=_contactStatusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForThreadContextViewModel:(id)arg1 maxWidth:(double)arg2 ;
-(MNProfileImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 avatarImageDecoration:(id)arg2 ;
-(MNThreadContextViewModel *)threadContextViewModel;
-(void)setThreadContextViewModel:(MNThreadContextViewModel *)arg1 ;
-(MNThreadContextContactStatusView *)contactStatusView;
-(void)_contextViewTapped:(id)arg1 ;
-(void)addContactButtonTapped:(id)arg1 ;
-(void)_configureThreadContextViewModel;
-(double)_bottomPaddingForRichTextView:(id)arg1 ;
-(void)_updateTextViewVisibilityState;
-(void)setDelegate:(id<MNThreadContextViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNThreadContextViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
