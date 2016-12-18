/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAnimationActionOverriding.h>
#import <Messenger/MNSeenHeadView.h>

@class UIImageView, MNSeenHeadActionOverrider, FBMUser, MNProfileImageUserIdentifier, UIImage, NSString;

@interface MNSingleSeenHeadView : UIView <MNAnimationActionOverriding, MNSeenHeadView> {

	UIImageView* _headView;
	UIImageView* _headBorderView;
	MNSeenHeadActionOverrider* _seenHeadActionOverrider;
	unsigned long long _seenHeadSize;
	FBMUser* _DEPRECATED_user;
	MNProfileImageUserIdentifier* _profileImageIdentifier;

}

@property (nonatomic,copy) FBMUser * DEPRECATED_user;                                          //@synthesize DEPRECATED_user=_DEPRECATED_user - In the implementation block
@property (nonatomic,copy) MNProfileImageUserIdentifier * profileImageIdentifier;              //@synthesize profileImageIdentifier=_profileImageIdentifier - In the implementation block
@property (nonatomic,retain) UIImage * headImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long seenHeadSize;                                  //@synthesize seenHeadSize=_seenHeadSize - In the implementation block
+(CGSize)sizeForSeenHeadSize:(unsigned long long)arg1 ;
-(void)setSeenHeadSize:(unsigned long long)arg1 ;
-(id)initWithUsesManhattanPath:(BOOL)arg1 ;
-(MNProfileImageUserIdentifier *)profileImageIdentifier;
-(BOOL)shouldOverrideActionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id)actionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 andTemplateAnimation:(id)arg4 ;
-(unsigned long long)seenHeadSize;
-(void)setProfileImageIdentifier:(MNProfileImageUserIdentifier *)arg1 ;
-(void)setHeadImage:(UIImage *)arg1 ;
-(UIImage *)headImage;
-(void)setHeadImage:(id)arg1 animated:(BOOL)arg2 ;
-(FBMUser *)DEPRECATED_user;
-(void)setDEPRECATED_user:(FBMUser *)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

