/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MNPhotoMaskView, NSString;

@interface MNThreadSectionTitleBadgeView : UIView {

	UILabel* _textLabel;
	MNPhotoMaskView* _maskView;
	NSString* _badgeText;

}

@property (nonatomic,copy) NSString * badgeText;              //@synthesize badgeText=_badgeText - In the implementation block
-(void)setBadgeText:(NSString *)arg1 ;
-(NSString *)badgeText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

