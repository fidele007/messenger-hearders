/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface MNRideServiceDriverInformationViewModel : FBValueObject <NSCopying> {

	NSString* _driverName;
	NSNumber* _driverRating;
	NSString* _vehicleMake;
	NSString* _vehicleModel;
	NSString* _vehiclePlate;

}

@property (nonatomic,copy,readonly) NSString * driverName;                //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * driverRating;              //@synthesize driverRating=_driverRating - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleMake;               //@synthesize vehicleMake=_vehicleMake - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleModel;              //@synthesize vehicleModel=_vehicleModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehiclePlate;              //@synthesize vehiclePlate=_vehiclePlate - In the implementation block
-(NSNumber *)driverRating;
-(NSString *)vehicleMake;
-(NSString *)vehiclePlate;
-(id)initWithDriverName:(id)arg1 driverRating:(id)arg2 vehicleMake:(id)arg3 vehicleModel:(id)arg4 vehiclePlate:(id)arg5 ;
-(NSString *)driverName;
-(NSString *)vehicleModel;
@end
