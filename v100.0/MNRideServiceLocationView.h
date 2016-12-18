/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNBusinessView.h>

@class UIImageView, MNBusinessLabelView, MNRideServiceLocationViewModel, NSString;

@interface MNRideServiceLocationView : UIView <MNBusinessView> {

	UIImageView* _imageView;
	MNBusinessLabelView* _textLabel;
	MNRideServiceLocationViewModel* _viewModel;

}

@property (nonatomic,copy) MNRideServiceLocationViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNRideServiceLocationViewModel *)viewModel;
-(void)setViewModel:(MNRideServiceLocationViewModel *)arg1 ;
@end

