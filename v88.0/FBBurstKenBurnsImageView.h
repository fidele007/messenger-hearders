/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBKenBurnsAnimatorViewDataSource.h>
#import <Messenger/FBBurstImageView.h>

@class FBKenBurnsAnimatorView, FBBurstAnimationImageViewSpecifier, NSArray, NSString;

@interface FBBurstKenBurnsImageView : UIView <FBKenBurnsAnimatorViewDataSource, FBBurstImageView> {

	FBKenBurnsAnimatorView* _kenBurnsView;
	FBBurstAnimationImageViewSpecifier* _previousViewSpecifier;
	NSArray* _imageSpecifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)kenBurnsAnimatorView:(id)arg1 viewToBeShownAfterView:(id)arg2 ;
-(void)setViewSpecifier:(id)arg1 ;
-(void)restorePreviousViewSpecifier;
-(void)layoutSubviews;
-(void)stopAnimating;
-(void)startAnimating;
@end
