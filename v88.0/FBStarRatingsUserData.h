/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, FBStarRatingsState, FBStarRatingsSmartTriggerData, FBStarRatingsShowDialogResponse, FBStarRatingsDialogMetadata;

@interface FBStarRatingsUserData : NSObject <NSCoding, NSCopying> {

	BOOL _hasCompletedFlow;
	NSDate* _firstLoginTime;
	NSString* _bundleVersion;
	NSDate* _nextPingTime;
	FBStarRatingsState* _state;
	FBStarRatingsSmartTriggerData* _smartTriggerData;
	FBStarRatingsShowDialogResponse* _showDialogResponse;
	unsigned long long _initiationMode;
	NSString* _targetPurpose;
	FBStarRatingsDialogMetadata* _dialogMetadata;

}

@property (nonatomic,readonly) NSDate * firstLoginTime;                                       //@synthesize firstLoginTime=_firstLoginTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;                                      //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSDate * nextPingTime;                                           //@synthesize nextPingTime=_nextPingTime - In the implementation block
@property (nonatomic,copy) FBStarRatingsState * state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) FBStarRatingsSmartTriggerData * smartTriggerData;                  //@synthesize smartTriggerData=_smartTriggerData - In the implementation block
@property (nonatomic,copy) FBStarRatingsShowDialogResponse * showDialogResponse;              //@synthesize showDialogResponse=_showDialogResponse - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFlow;                                           //@synthesize hasCompletedFlow=_hasCompletedFlow - In the implementation block
@property (assign,nonatomic) unsigned long long initiationMode;                               //@synthesize initiationMode=_initiationMode - In the implementation block
@property (nonatomic,copy) NSString * targetPurpose;                                          //@synthesize targetPurpose=_targetPurpose - In the implementation block
@property (nonatomic,copy) FBStarRatingsDialogMetadata * dialogMetadata;                      //@synthesize dialogMetadata=_dialogMetadata - In the implementation block
-(unsigned long long)initiationMode;
-(NSString *)targetPurpose;
-(FBStarRatingsDialogMetadata *)dialogMetadata;
-(BOOL)isFirstLoginTimeForCurrentVersion;
-(BOOL)hasCompletedFlow;
-(NSDate *)nextPingTime;
-(FBStarRatingsShowDialogResponse *)showDialogResponse;
-(FBStarRatingsSmartTriggerData *)smartTriggerData;
-(void)setShowDialogResponse:(FBStarRatingsShowDialogResponse *)arg1 ;
-(void)setInitiationMode:(unsigned long long)arg1 ;
-(void)setTargetPurpose:(NSString *)arg1 ;
-(void)setDialogMetadata:(FBStarRatingsDialogMetadata *)arg1 ;
-(void)setNextPingTime:(NSDate *)arg1 ;
-(void)setHasCompletedFlow:(BOOL)arg1 ;
-(NSDate *)firstLoginTime;
-(void)setSmartTriggerData:(FBStarRatingsSmartTriggerData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(FBStarRatingsState *)state;
-(void)setState:(FBStarRatingsState *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleVersion;
@end

