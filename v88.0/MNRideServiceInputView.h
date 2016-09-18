/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol MNRideServiceInputViewDelegate;
@class MNLoadingView, MNRideServiceNullStateView, UIScrollView, UIView, UISegmentedControl, UITableView, MNPaymentsPayActionFooterView, NSMutableDictionary, NSArray, NSString;

@interface MNRideServiceInputView : UIView <UITableViewDelegate, UITableViewDataSource> {

	MNLoadingView* _loadingView;
	MNRideServiceNullStateView* _nullStateView;
	UIScrollView* _scrollContainerView;
	UIView* _separator1;
	UISegmentedControl* _rideTypeSegments;
	UIView* _separator2;
	UITableView* _infoTableView;
	MNPaymentsPayActionFooterView* _confirmFooterView;
	NSMutableDictionary* _infoTableViewModels;
	long long _previousSelectedRideTypeIndex;
	id<MNRideServiceInputViewDelegate> _delegate;
	NSArray* _rideTypeViewModels;
	long long _rideTypesViewState;
	long long _confirmFooterViewState;

}

@property (assign,nonatomic,__weak) id<MNRideServiceInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * rideTypeViewModels;                                      //@synthesize rideTypeViewModels=_rideTypeViewModels - In the implementation block
@property (assign,nonatomic) long long rideTypesViewState;                                    //@synthesize rideTypesViewState=_rideTypesViewState - In the implementation block
@property (assign,nonatomic) long long confirmFooterViewState;                                //@synthesize confirmFooterViewState=_confirmFooterViewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didChangeSelectedSegmentIndex;
-(void)_didTapConfirmButton;
-(id)_viewLayoutsListWithSize:(CGSize)arg1 ;
-(void)_updateSelectedRideType;
-(long long)_selectedRideTypeWithViewModels:(id)arg1 ;
-(void)_updateRideTypesView;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(void)setConfirmFooterViewState:(long long)arg1 ;
-(void)setCellViewModel:(id)arg1 forRow:(long long)arg2 ;
-(void)setRideTypesViewState:(long long)arg1 ;
-(void)setRideTypeViewModels:(NSArray *)arg1 ;
-(NSArray *)rideTypeViewModels;
-(long long)rideTypesViewState;
-(long long)confirmFooterViewState;
-(void)setDelegate:(id<MNRideServiceInputViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNRideServiceInputViewDelegate>)delegate;
@end

