/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBStorylineImagePickerPreview, FBMoviesPreviewCellDelegate;
@class FBBurstKenBurnsImageView, NSArray, FBBurstAnimationImageViewSpecifier, FBStorylineVideoDataBundle, UILabel, UIImageView, FBMoviesPreviewCellMetrics, FBUserSession, NSString;

@interface FBMoviesPreviewCell : UICollectionViewCell {

	FBBurstKenBurnsImageView* _moviePreviewView;
	NSArray* _specifiers;
	FBBurstAnimationImageViewSpecifier* _animationSpecifier;
	FBStorylineVideoDataBundle* _storylineVideoBundle;
	UILabel* _suggestionLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _playButton;
	UIImageView* _subtitleBorder;
	CGSize _subtitleLabelSize;
	CGSize _subtitleSize;
	FBMoviesPreviewCellMetrics* _metrics;
	UIImageView* _overlay;
	FBUserSession* _session;
	id<FBStorylineImagePickerPreview> _playerPreview;
	BOOL _maximumPhotoCountPerMovie;
	NSString* _moodIDToUseInThePicker;
	unsigned long long _maximumCutsPerVideo;
	id<FBMoviesPreviewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMoviesPreviewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * suggestionBarTitle; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(void)_updateSubtitleBorder;
-(id)_drawSubtitleBorder:(CGRect)arg1 ;
-(void)setSpecifiers:(id)arg1 session:(id)arg2 thumbnails:(id)arg3 shouldAutoplay:(BOOL)arg4 ;
-(NSString *)suggestionBarTitle;
-(void)setSuggestionBarTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMoviesPreviewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMoviesPreviewCellDelegate>)delegate;
-(NSString *)title;
-(NSString *)subtitle;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setSubtitle:(NSString *)arg1 ;
@end

