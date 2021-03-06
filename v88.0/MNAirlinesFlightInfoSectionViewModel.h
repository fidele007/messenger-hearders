/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBusinessStackedContainerViewModel, MNBusinessTableRowViewModel, MNAirlinesAToAViewModel;

@interface MNAirlinesFlightInfoSectionViewModel : FBValueObject <NSCopying> {

	BOOL _showSeparator;
	MNBusinessStackedContainerViewModel* _flightInfo;
	MNBusinessTableRowViewModel* _airportNames;
	MNAirlinesAToAViewModel* _airportToAirport;

}

@property (nonatomic,copy,readonly) MNBusinessStackedContainerViewModel * flightInfo;              //@synthesize flightInfo=_flightInfo - In the implementation block
@property (nonatomic,copy,readonly) MNBusinessTableRowViewModel * airportNames;                    //@synthesize airportNames=_airportNames - In the implementation block
@property (nonatomic,copy,readonly) MNAirlinesAToAViewModel * airportToAirport;                    //@synthesize airportToAirport=_airportToAirport - In the implementation block
@property (nonatomic,readonly) BOOL showSeparator;                                                 //@synthesize showSeparator=_showSeparator - In the implementation block
-(MNBusinessTableRowViewModel *)airportNames;
-(MNAirlinesAToAViewModel *)airportToAirport;
-(id)initWithFlightInfo:(id)arg1 airportNames:(id)arg2 airportToAirport:(id)arg3 showSeparator:(BOOL)arg4 ;
-(MNBusinessStackedContainerViewModel *)flightInfo;
-(BOOL)showSeparator;
@end

