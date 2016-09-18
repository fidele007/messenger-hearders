/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface FBMThreadLiveLocation : FBValueObject <NSCoding, NSCopying> {

	BOOL _canStopSendingLocation;
	BOOL _shouldShowEta;
	NSString* _messageLiveLocationId;
	NSString* _senderId;
	double _latitude;
	double _longitude;
	NSDate* _coordinateUpdatedTime;
	NSDate* _expirationTime;
	NSString* _offlineThreadingId;

}

@property (nonatomic,copy,readonly) NSString * messageLiveLocationId;              //@synthesize messageLiveLocationId=_messageLiveLocationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                           //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) double latitude;                                    //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                                   //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy,readonly) NSDate * coordinateUpdatedTime;                //@synthesize coordinateUpdatedTime=_coordinateUpdatedTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationTime;                       //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,readonly) BOOL canStopSendingLocation;                        //@synthesize canStopSendingLocation=_canStopSendingLocation - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowEta;                                 //@synthesize shouldShowEta=_shouldShowEta - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                 //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
-(NSString *)offlineThreadingId;
-(NSString *)senderId;
-(BOOL)canStopSendingLocation;
-(NSString *)messageLiveLocationId;
-(BOOL)shouldShowEta;
-(NSDate *)coordinateUpdatedTime;
-(id)initWithMessageLiveLocationId:(id)arg1 senderId:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 coordinateUpdatedTime:(id)arg5 expirationTime:(id)arg6 canStopSendingLocation:(BOOL)arg7 shouldShowEta:(BOOL)arg8 offlineThreadingId:(id)arg9 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)expirationTime;
-(double)latitude;
-(double)longitude;
@end

