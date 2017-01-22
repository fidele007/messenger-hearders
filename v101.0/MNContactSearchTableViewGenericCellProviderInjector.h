/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNContactSearchPeopleCellActionButtonControlling;
@class FBProviderMapData, MNContactSearchTableViewPeopleCellProviderFactory, MNContactSearchTableViewTopResultCellProviderFactory;

@interface MNContactSearchTableViewGenericCellProviderInjector : NSObject {

	FBProviderMapData* _mapData;
	MNContactSearchTableViewPeopleCellProviderFactory* _peopleCellProviderFactory;
	MNContactSearchTableViewTopResultCellProviderFactory* _topResultCellProviderFactory;
	id<MNContactSearchPeopleCellActionButtonControlling> _actionButtonController;

}

@property (nonatomic,readonly) MNContactSearchTableViewPeopleCellProviderFactory * peopleCellProviderFactory;                    //@synthesize peopleCellProviderFactory=_peopleCellProviderFactory - In the implementation block
@property (nonatomic,readonly) MNContactSearchTableViewTopResultCellProviderFactory * topResultCellProviderFactory;              //@synthesize topResultCellProviderFactory=_topResultCellProviderFactory - In the implementation block
@property (nonatomic,readonly) id<MNContactSearchPeopleCellActionButtonControlling> actionButtonController;                      //@synthesize actionButtonController=_actionButtonController - In the implementation block
-(MNContactSearchTableViewPeopleCellProviderFactory *)peopleCellProviderFactory;
-(id<MNContactSearchPeopleCellActionButtonControlling>)actionButtonController;
-(MNContactSearchTableViewTopResultCellProviderFactory *)topResultCellProviderFactory;
-(id)initWithProviderMapData:(id)arg1 actionButtonController:(id)arg2 ;
@end
