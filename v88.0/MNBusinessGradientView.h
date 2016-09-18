/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNBusinessView.h>

@class FBGradientView, MNBusinessGradientViewModel, NSString;

@interface MNBusinessGradientView : UIView <MNBusinessView> {

	FBGradientView* _gradientView;
	MNBusinessGradientViewModel* _viewModel;

}

@property (nonatomic,copy) MNBusinessGradientViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)_defaultGradientViewConfig;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNBusinessGradientViewModel *)viewModel;
-(void)setViewModel:(MNBusinessGradientViewModel *)arg1 ;
@end
