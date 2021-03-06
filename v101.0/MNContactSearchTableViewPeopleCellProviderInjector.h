/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNContactSearchPeopleCellActionButtonControlling;
@class FBProviderMapData, MNPeopleCellFactory, MNThreadParticipantNameFormatter;

@interface MNContactSearchTableViewPeopleCellProviderInjector : NSObject {

	FBProviderMapData* _mapData;
	MNPeopleCellFactory* _peopleCellFactory;
	MNThreadParticipantNameFormatter* _threadNameFormatter;
	id<MNContactSearchPeopleCellActionButtonControlling> _actionButtonController;

}

@property (nonatomic,readonly) MNPeopleCellFactory * peopleCellFactory;                                                  //@synthesize peopleCellFactory=_peopleCellFactory - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * threadNameFormatter;                                   //@synthesize threadNameFormatter=_threadNameFormatter - In the implementation block
@property (nonatomic,readonly) id<MNContactSearchPeopleCellActionButtonControlling> actionButtonController;              //@synthesize actionButtonController=_actionButtonController - In the implementation block
-(MNPeopleCellFactory *)peopleCellFactory;
-(id<MNContactSearchPeopleCellActionButtonControlling>)actionButtonController;
-(id)initWithProviderMapData:(id)arg1 actionButtonController:(id)arg2 ;
-(MNThreadParticipantNameFormatter *)threadNameFormatter;
@end

