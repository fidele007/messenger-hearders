/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadListViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowLoadingView;
	BOOL _shouldShowEditButton;
	BOOL _shouldShowMoreCell;
	BOOL _disableEditActionForPrimaryThreadList;
	BOOL _disableEditActionForSecondaryThreadList;
	BOOL _shouldFetchInboxUnits;
	unsigned long long _headerViewType;
	long long _threadListType;
	unsigned long long _threadListEditActionType;

}

@property (nonatomic,readonly) unsigned long long headerViewType;                         //@synthesize headerViewType=_headerViewType - In the implementation block
@property (nonatomic,readonly) long long threadListType;                                  //@synthesize threadListType=_threadListType - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLoadingView;                                //@synthesize shouldShowLoadingView=_shouldShowLoadingView - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEditButton;                                 //@synthesize shouldShowEditButton=_shouldShowEditButton - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMoreCell;                                   //@synthesize shouldShowMoreCell=_shouldShowMoreCell - In the implementation block
@property (nonatomic,readonly) unsigned long long threadListEditActionType;               //@synthesize threadListEditActionType=_threadListEditActionType - In the implementation block
@property (nonatomic,readonly) BOOL disableEditActionForPrimaryThreadList;                //@synthesize disableEditActionForPrimaryThreadList=_disableEditActionForPrimaryThreadList - In the implementation block
@property (nonatomic,readonly) BOOL disableEditActionForSecondaryThreadList;              //@synthesize disableEditActionForSecondaryThreadList=_disableEditActionForSecondaryThreadList - In the implementation block
@property (nonatomic,readonly) BOOL shouldFetchInboxUnits;                                //@synthesize shouldFetchInboxUnits=_shouldFetchInboxUnits - In the implementation block
-(BOOL)shouldShowMoreCell;
-(long long)threadListType;
-(BOOL)shouldFetchInboxUnits;
-(BOOL)shouldShowEditButton;
-(unsigned long long)headerViewType;
-(unsigned long long)threadListEditActionType;
-(BOOL)disableEditActionForPrimaryThreadList;
-(BOOL)disableEditActionForSecondaryThreadList;
-(id)initWithHeaderViewType:(unsigned long long)arg1 threadListType:(long long)arg2 shouldShowLoadingView:(BOOL)arg3 shouldShowEditButton:(BOOL)arg4 shouldShowMoreCell:(BOOL)arg5 threadListEditActionType:(unsigned long long)arg6 disableEditActionForPrimaryThreadList:(BOOL)arg7 disableEditActionForSecondaryThreadList:(BOOL)arg8 shouldFetchInboxUnits:(BOOL)arg9 ;
-(BOOL)shouldShowLoadingView;
@end

