/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface MNRideServiceRideTypeViewModel : FBValueObject <NSCopying> {

	BOOL _requireDestination;
	NSString* _name;
	NSString* _imageUrl;
	NSString* _typeId;
	NSNumber* _seatCount;

}

@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageUrl;               //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeId;                 //@synthesize typeId=_typeId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seatCount;              //@synthesize seatCount=_seatCount - In the implementation block
@property (nonatomic,readonly) BOOL requireDestination;                //@synthesize requireDestination=_requireDestination - In the implementation block
-(NSString *)imageUrl;
-(id)initWithName:(id)arg1 imageUrl:(id)arg2 typeId:(id)arg3 seatCount:(id)arg4 requireDestination:(BOOL)arg5 ;
-(NSString *)typeId;
-(NSNumber *)seatCount;
-(BOOL)requireDestination;
-(NSString *)name;
@end
