/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FBBrowserSecuritySheetContentView : UIView {

	UIImageView* _lockImageView;
	UILabel* _urlLabel;
	UILabel* _secureLabel;
	BOOL _isPageSecure;
	double _contentHeight;

}

@property (nonatomic,readonly) double contentHeight;              //@synthesize contentHeight=_contentHeight - In the implementation block
-(float)_getUILabelContentTextHeight:(id)arg1 withFont:(id)arg2 andWidth:(float)arg3 ;
-(id)initWithURL:(id)arg1 andIsPageSecure:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)contentHeight;
@end

