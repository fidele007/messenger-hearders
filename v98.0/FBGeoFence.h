/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Messenger/FBLocationUpdate.h>

@class NSDate;

@interface FBGeoFence : NSObject <NSCoding, FBLocationUpdate> {

	NSDate* _timestamp;
	NSDate* _startDate;
	NSDate* _leaveDate;
	unsigned long long _geoFenceType;
	double _horizontalAccuracy;
	double _radius;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * leaveDate;                             //@synthesize leaveDate=_leaveDate - In the implementation block
@property (nonatomic,readonly) unsigned long long geoFenceType;                //@synthesize geoFenceType=_geoFenceType - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;                      //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) double radius;                                  //@synthesize radius=_radius - In the implementation block
-(id)initWithVisit:(id)arg1 timestamp:(id)arg2 logger:(id)arg3 ;
-(NSDate *)leaveDate;
-(id)initWithTimestamp:(id)arg1 startDate:(id)arg2 leaveDate:(id)arg3 geoFenceType:(unsigned long long)arg4 coordinate:(CLLocationCoordinate2D)arg5 horizontalAccuracy:(double)arg6 radius:(double)arg7 ;
-(unsigned long long)geoFenceType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(id)dictionaryRepresentation;
-(double)radius;
-(NSDate *)startDate;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
@end
