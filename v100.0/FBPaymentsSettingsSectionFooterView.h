/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, FBPaymentsSettingsSectionFooterViewModel;

@interface FBPaymentsSettingsSectionFooterView : UIView {

	FBRichTextView* _labelView;
	FBPaymentsSettingsSectionFooterViewModel* _viewModel;

}

@property (nonatomic,copy) FBPaymentsSettingsSectionFooterViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(double)heightWithViewModel:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBPaymentsSettingsSectionFooterViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsSettingsSectionFooterViewModel *)arg1 ;
@end

