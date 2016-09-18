/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBWebImageView.h>

@class FBWebImageRetryPlaceholderView, UIImageView, FBWebImageViewComponentSpecifier;

@interface FBWebImageComponentView : FBWebImageView {

	FBWebImageRetryPlaceholderView* _retryPlaceholderView;
	UIImageView* _placeholderImageView;
	BOOL _userSetUserInteractionEnabled;
	FBWebImageViewComponentSpecifier* _componentSpecifier;

}

@property (nonatomic,retain) FBWebImageViewComponentSpecifier * componentSpecifier;              //@synthesize componentSpecifier=_componentSpecifier - In the implementation block
-(void)_updateImagePlaceholderView;
-(void)_updateRetryPlaceholderView;
-(void)_performDownload;
-(void)setComponentSpecifier:(FBWebImageViewComponentSpecifier *)arg1 ;
-(void)restartDownload;
-(FBWebImageViewComponentSpecifier *)componentSpecifier;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)cancelDownload;
@end

