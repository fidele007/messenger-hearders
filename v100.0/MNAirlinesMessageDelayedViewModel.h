/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNAirlinesHeaderViewModel, MNBusinessStackedContainerViewModel, MNAirlinesFlightInfoSectionViewModel;

@interface MNAirlinesMessageDelayedViewModel : FBValueObject <NSCopying> {

	MNAirlinesHeaderViewModel* _headerViewModel;
	MNBusinessStackedContainerViewModel* _passengerSeatAssignmentViewModel;
	MNAirlinesFlightInfoSectionViewModel* _flightInfoSectionViewModel;

}

@property (nonatomic,copy,readonly) MNAirlinesHeaderViewModel * headerViewModel;                                         //@synthesize headerViewModel=_headerViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * passengerSeatAssignmentViewModel;              //@synthesize passengerSeatAssignmentViewModel=_passengerSeatAssignmentViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNAirlinesFlightInfoSectionViewModel * flightInfoSectionViewModel;                   //@synthesize flightInfoSectionViewModel=_flightInfoSectionViewModel - In the implementation block
-(MNAirlinesHeaderViewModel *)headerViewModel;
-(MNAirlinesFlightInfoSectionViewModel *)flightInfoSectionViewModel;
-(MNBusinessStackedContainerViewModel *)passengerSeatAssignmentViewModel;
-(id)initWithHeaderViewModel:(id)arg1 passengerSeatAssignmentViewModel:(id)arg2 flightInfoSectionViewModel:(id)arg3 ;
@end

