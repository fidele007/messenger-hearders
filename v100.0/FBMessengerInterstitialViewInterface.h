/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView, FBMessengerInterstitialContext, FBMessengerInterstitialViewStickerType, UILabel;


@protocol FBMessengerInterstitialViewInterface <FBClassProvidable>
@property (assign,nonatomic,__weak) id<FBMessengerInterstitialViewDelegate> delegate; 
@property (nonatomic,retain) UIScrollView * scrollView; 
@property (assign,nonatomic) BOOL shouldShowRedirectButton; 
@property (assign,nonatomic) BOOL shouldHideFriends; 
@property (nonatomic,retain) FBMessengerInterstitialContext * context; 
@property (nonatomic,retain) FBMessengerInterstitialViewStickerType * stickerType; 
@property (assign,nonatomic) double topLayoutGuideLength; 
@property (assign,nonatomic) double bottomLayoutGuideLength; 
@property (nonatomic,readonly) UILabel * titleLabel; 
@required
-(void)setTopLayoutGuideLength:(double)arg1;
-(void)setBottomLayoutGuideLength:(double)arg1;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(void)setShouldShowRedirectButton:(BOOL)arg1;
-(void)setShouldHideFriends:(BOOL)arg1;
-(void)setStickerType:(id)arg1;
-(void)setLearnMoreButtonTitle:(id)arg1;
-(void)setInstallButtonTitle:(id)arg1;
-(void)setRedirectButtonTitle:(id)arg1;
-(BOOL)shouldHideFriends;
-(void)setFacepileText:(id)arg1;
-(void)setFriendPicUrls:(id)arg1;
-(BOOL)shouldShowRedirectButton;
-(FBMessengerInterstitialViewStickerType *)stickerType;
-(void)setDelegate:(id)arg1;
-(id<FBMessengerInterstitialViewDelegate>)delegate;
-(void)setStyle:(long long)arg1;
-(void)setScrollView:(id)arg1;
-(UIScrollView *)scrollView;
-(FBMessengerInterstitialContext *)context;
-(UILabel *)titleLabel;
-(void)setContext:(id)arg1;
-(void)setTitleText:(id)arg1;
-(void)setDescriptionText:(id)arg1;
-(void)setBottomView:(id)arg1;

@end

