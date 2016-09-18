/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBStickerResourceManager, FBMStickerViewDelegate;
@class FBStickerImageView, UIImage, FBStickerImagesDownloader, UIColor, FBMSticker, UIActivityIndicatorView;

@interface FBMStickerView : UIView {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBStickerImageView* _stickerImageView;
	unsigned long long _state;
	BOOL _isStickerImageLoaded;
	UIImage* _originalStickerImage;
	FBStickerImagesDownloader* _imagesDownloader;
	UIColor* _stickerTintColor;
	BOOL _showPlaceholderWhileLoading;
	BOOL _showLoadingIndicator;
	id<FBMStickerViewDelegate> _delegate;
	FBMSticker* _sticker;
	unsigned long long _layoutIdiom;
	long long _loadingIndicatorViewStyle;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) FBMSticker * sticker;                                    //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<FBMStickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long layoutIdiom;                          //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholderWhileLoading;                        //@synthesize showPlaceholderWhileLoading=_showPlaceholderWhileLoading - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicator;                               //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
@property (nonatomic,retain) UIColor * stickerTintColor;                              //@synthesize stickerTintColor=_stickerTintColor - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorViewStyle;                     //@synthesize loadingIndicatorViewStyle=_loadingIndicatorViewStyle - In the implementation block
-(id)initWithStickerResourceManager:(id)arg1 ;
-(FBMSticker *)sticker;
-(void)configureWithSticker:(id)arg1 callbackQueue:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)setStickerTintColor:(UIColor *)arg1 ;
-(void)setSticker:(FBMSticker *)arg1 ;
-(void)setShowLoadingIndicator:(BOOL)arg1 ;
-(void)configureWithSticker:(id)arg1 ;
-(void)stopAllAnimations;
-(unsigned long long)layoutIdiom;
-(UIColor *)stickerTintColor;
-(void)setShowPlaceholderWhileLoading:(BOOL)arg1 ;
-(void)setLayoutIdiom:(unsigned long long)arg1 ;
-(void)resumeLoadingAnimationIfNeeded;
-(id)getCurrentStickerImage;
-(void)setLoadingIndicatorViewStyle:(long long)arg1 ;
-(void)configureWithSticker:(id)arg1 originalImageSizeEnabled:(BOOL)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)startAnimationIfNeeded;
-(void)_didFetchCachedImage:(id)arg1 stickerFbId:(unsigned long long)arg2 originalImageSizeEnabled:(BOOL)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)_didLoadStickerImage:(id)arg1 withStickerFbId:(unsigned long long)arg2 loadedAsynchronously:(BOOL)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)_setStickerImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_downloadStickerImagesInCallbackQueue:(id)arg1 successBlock:(/*^block*/id)arg2 originalImageSizeEnabled:(BOOL)arg3 ;
-(void)_showLoading;
-(void)_hideLoading;
-(BOOL)_hasAnimationImages;
-(void)_loadAnimationIfNeeded:(/*^block*/id)arg1 ;
-(BOOL)showPlaceholderWhileLoading;
-(long long)loadingIndicatorViewStyle;
-(void)setDelegate:(id<FBMStickerViewDelegate>)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(id<FBMStickerViewDelegate>)delegate;
-(void)startAnimation:(BOOL)arg1 ;
-(void)stopAnimation;
-(BOOL)showLoadingIndicator;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)_startAnimation;
@end

