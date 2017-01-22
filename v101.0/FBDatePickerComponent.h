/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBDatePickerCollectionViewDataSourceDelegate;
@class FBDatePickerComponentCollectionViewDataSource;

@interface FBDatePickerComponent : CKCompositeComponent {

	FBDatePickerComponentCollectionViewDataSource* _dataSource;
	CKTypedComponentAction<> _action;
	id<FBDatePickerCollectionViewDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBDatePickerCollectionViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithSelectedDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 availableDates:(id)arg4 action:(CKTypedComponentAction<>)arg5 ;
-(void)setDelegate:(id<FBDatePickerCollectionViewDataSourceDelegate>)arg1 ;
-(id<FBDatePickerCollectionViewDataSourceDelegate>)delegate;
@end
