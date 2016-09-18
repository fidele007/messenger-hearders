/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface FBFNNUXGradientUpsellView : UIView {

	CAGradientLayer* _backgroundLayer;
	UIImageView* _themeIcon;
	UILabel* _titleLabel;
	UIView* _noteView;

}
-(void)_configureAppearance:(id)arg1 ;
-(long long)_calculateLabelLinesNumWithConstrain:(CGSize)arg1 label:(id)arg2 ;
-(void)_resetTitleFontSizeWithMaxHeight:(double)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 upsellDataSource:(id)arg3 nuxType:(unsigned long long)arg4 ;
-(void)layoutSubviews;
@end

