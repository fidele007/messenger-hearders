/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBAssetLocationInfo, NSDate, NSArray, NSDictionary;

@interface FBMagicStoryCollectionData : FBValueObject <NSCopying, NSCoding> {

	NSString* _uniqueId;
	FBAssetLocationInfo* _locationInfo;
	NSDate* _latestAssetCreationDate;
	NSArray* _groupedCollectionAssetInfos;
	double _classifierScore;
	NSDictionary* _classifierLoggingData;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * uniqueId;                                //@synthesize uniqueId=_uniqueId - In the implementation block
@property (nonatomic,copy,readonly) FBAssetLocationInfo * locationInfo;                 //@synthesize locationInfo=_locationInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDate * latestAssetCreationDate;                   //@synthesize latestAssetCreationDate=_latestAssetCreationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupedCollectionAssetInfos;              //@synthesize groupedCollectionAssetInfos=_groupedCollectionAssetInfos - In the implementation block
@property (nonatomic,readonly) double classifierScore;                                  //@synthesize classifierScore=_classifierScore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * classifierLoggingData;               //@synthesize classifierLoggingData=_classifierLoggingData - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                 //@synthesize type=_type - In the implementation block
-(id)initWithUniqueId:(id)arg1 locationInfo:(id)arg2 latestAssetCreationDate:(id)arg3 groupedCollectionAssetInfos:(id)arg4 classifierScore:(double)arg5 classifierLoggingData:(id)arg6 type:(unsigned long long)arg7 ;
-(double)classifierScore;
-(NSDictionary *)classifierLoggingData;
-(FBAssetLocationInfo *)locationInfo;
-(NSDate *)latestAssetCreationDate;
-(NSArray *)groupedCollectionAssetInfos;
-(unsigned long long)type;
-(NSString *)uniqueId;
@end

