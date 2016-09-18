/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNStackedContainerView, MNHeaderView, MNButton;

@interface MNInstructionsView : UIView {

	MNStackedContainerView* _stackedContainerView;
	MNHeaderView* _headerView;
	MNButton* _openSettingsButton;
	MNButton* _dismissButton;
	double _topLayoutGuideLength;

}

@property (nonatomic,readonly) MNButton * openSettingsButton;              //@synthesize openSettingsButton=_openSettingsButton - In the implementation block
@property (nonatomic,readonly) MNButton * dismissButton;                   //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                  //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(id)initWithFrame:(CGRect)arg1 explanation:(id)arg2 instructionSteps:(id)arg3 backgroundColor:(id)arg4 ;
-(MNButton *)openSettingsButton;
-(void)layoutSubviews;
-(MNButton *)dismissButton;
@end

