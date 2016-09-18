/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, MNMAISuggestionsProfileImageView, UIView;

@interface MNMAISuggestionView : UIView {

	FBUserSession* _session;
	MNMAISuggestionsProfileImageView* _profileImage;
	UIView* _leftCurtainView;
	UIView* _suggestionsCarouselView;

}

@property (nonatomic,retain) UIView * suggestionsCarouselView;              //@synthesize suggestionsCarouselView=_suggestionsCarouselView - In the implementation block
-(void)_layoutProfileImage;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)_layoutSuggestions;
-(void)setSuggestionsCarouselView:(UIView *)arg1 ;
-(UIView *)suggestionsCarouselView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

