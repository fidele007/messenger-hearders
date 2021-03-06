/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBVideoTagConfiguration : FBValueObject <NSCopying> {

	long long _faceDetectAlgorithm;
	long long _faceDetectAccuracy;
	long long _serverSuggestionThreshold;
	CGSize _sampleSize;
	SCD_Struct_FB25 _sampleInterval;
	SCD_Struct_FB25 _sampleToleranceBefore;
	SCD_Struct_FB25 _sampleToleranceAfter;

}

@property (nonatomic,readonly) CGSize sampleSize;                                  //@synthesize sampleSize=_sampleSize - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 sampleInterval;                     //@synthesize sampleInterval=_sampleInterval - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 sampleToleranceBefore;              //@synthesize sampleToleranceBefore=_sampleToleranceBefore - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB25 sampleToleranceAfter;               //@synthesize sampleToleranceAfter=_sampleToleranceAfter - In the implementation block
@property (nonatomic,readonly) long long faceDetectAlgorithm;                      //@synthesize faceDetectAlgorithm=_faceDetectAlgorithm - In the implementation block
@property (nonatomic,readonly) long long faceDetectAccuracy;                       //@synthesize faceDetectAccuracy=_faceDetectAccuracy - In the implementation block
@property (nonatomic,readonly) long long serverSuggestionThreshold;                //@synthesize serverSuggestionThreshold=_serverSuggestionThreshold - In the implementation block
-(id)initWithSampleSize:(CGSize)arg1 sampleInterval:(SCD_Struct_FB25)arg2 sampleToleranceBefore:(SCD_Struct_FB25)arg3 sampleToleranceAfter:(SCD_Struct_FB25)arg4 faceDetectAlgorithm:(long long)arg5 faceDetectAccuracy:(long long)arg6 serverSuggestionThreshold:(long long)arg7 ;
-(CGSize)sampleSize;
-(SCD_Struct_FB25)sampleInterval;
-(SCD_Struct_FB25)sampleToleranceBefore;
-(SCD_Struct_FB25)sampleToleranceAfter;
-(long long)faceDetectAlgorithm;
-(long long)faceDetectAccuracy;
-(long long)serverSuggestionThreshold;
@end

