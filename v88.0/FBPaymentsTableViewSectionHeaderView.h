/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>
#import <Messenger/FBPaymentsViewModelConfigurable.h>

@protocol FBPaymentsLoadingIndicatorControlling;
@class FBPaymentsTableViewSectionHeaderViewModel, NSString;

@interface FBPaymentsTableViewSectionHeaderView : UITableViewHeaderFooterView <FBPaymentsEdgeInsetsConfigurable, FBPaymentsViewModelConfigurable> {

	id<FBPaymentsLoadingIndicatorControlling> _loadingIndicatorController;
	FBPaymentsTableViewSectionHeaderViewModel* _viewModel;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) FBPaymentsTableViewSectionHeaderViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(FBPaymentsTableViewSectionHeaderViewModel *)viewModel;
-(void)setViewModel:(FBPaymentsTableViewSectionHeaderViewModel *)arg1 ;
@end

