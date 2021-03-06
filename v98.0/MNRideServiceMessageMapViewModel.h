/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNRideServiceMessageMapViewModel : FBValueObject <NSCopying> {

	NSArray* _mapPoints;
	double _regionLatitude;
	double _regionLongitude;
	double _regionSpanLat;
	double _regionSpanLon;

}

@property (nonatomic,copy,readonly) NSArray * mapPoints;              //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) double regionLatitude;                 //@synthesize regionLatitude=_regionLatitude - In the implementation block
@property (nonatomic,readonly) double regionLongitude;                //@synthesize regionLongitude=_regionLongitude - In the implementation block
@property (nonatomic,readonly) double regionSpanLat;                  //@synthesize regionSpanLat=_regionSpanLat - In the implementation block
@property (nonatomic,readonly) double regionSpanLon;                  //@synthesize regionSpanLon=_regionSpanLon - In the implementation block
-(id)initWithMapPoints:(id)arg1 regionLatitude:(double)arg2 regionLongitude:(double)arg3 regionSpanLat:(double)arg4 regionSpanLon:(double)arg5 ;
-(double)regionLatitude;
-(double)regionLongitude;
-(double)regionSpanLat;
-(double)regionSpanLon;
-(NSArray *)mapPoints;
@end

