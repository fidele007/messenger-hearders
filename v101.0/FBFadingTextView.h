/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface FBFadingTextView : UIView {

	UILabel* _textLabel;
	UIImageView* _shadow;

}
+(void)showNetworkErrorViewIn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 ;
-(void)show;
-(void)layoutSubviews;
-(void)showInView:(id)arg1 ;
-(void)fadeOut;
-(void)removeFromView;
@end

