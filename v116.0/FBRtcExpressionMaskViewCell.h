/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRtcExpressionBaseCell.h>
#import <Messenger/FBRtcExpressionBaseCellProtocol.h>

@class UIImageView, FBNetworkImageView, UIView, UILabel, MNLoadingView, NSString;

@interface FBRtcExpressionMaskViewCell : FBRtcExpressionBaseCell <FBRtcExpressionBaseCellProtocol> {

	UIImageView* _localImageView;
	FBNetworkImageView* _networkImageView;
	UIView* _activeImageView;
	UIImageView* _assetsNotLoadedImageView;
	UILabel* _titleLabel;
	MNLoadingView* _progressView;
	BOOL _showTitle;
	BOOL _shouldShowNew;

}

@property (assign,nonatomic) BOOL showTitle;                        //@synthesize showTitle=_showTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldShowNew;                    //@synthesize shouldShowNew=_shouldShowNew - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithCellModel:(id)arg1 ;
-(void)_updateAssetsNotLoadedImageView;
-(BOOL)shouldShowNew;
-(void)setShouldShowNew:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(void)setShowTitle:(BOOL)arg1 ;
-(BOOL)showTitle;
-(void)_updateTitle;
-(void)_updateViewState;
-(void)_updateIconImageView;
-(void)_updateProgressView;
@end

