/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationView.h>

@class UIView, FBBubbleView, UILabel, MNMessageLiveLocationTrayMapAnnotationModel;

@interface MNMessageLiveLocationTrayMapAnnotationView : MKAnnotationView {

	UIView* _profileView;
	FBBubbleView* _bubbleView;
	UILabel* _bubbleTitleLabel;
	UILabel* _bubbleSubtitleLabel;
	MNMessageLiveLocationTrayMapAnnotationModel* _viewModel;

}

@property (nonatomic,copy) MNMessageLiveLocationTrayMapAnnotationModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
-(void)setProfileView:(id)arg1 ;
-(void)showBubbleViewWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)hideBubbleView;
-(BOOL)shouldUpdateProfileViewForViewModel:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(MNMessageLiveLocationTrayMapAnnotationModel *)viewModel;
-(void)setViewModel:(MNMessageLiveLocationTrayMapAnnotationModel *)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end

