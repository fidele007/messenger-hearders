/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, FBSphericalVideoConfig;

@interface FBVideoAssetEdits : NSObject <NSCopying, NSCoding> {

	BOOL _audioMuted;
	NSArray* _filterConfigs;
	FBSphericalVideoConfig* _sphericalVideoConfig;
	long long _hdUploadSelectionState;
	SCD_Struct_FB25 _videoDuration;
	CGRect _cropRectangle;
	SCD_Struct_FB26 _trimRange;

}

@property (nonatomic,readonly) SCD_Struct_FB25 videoDuration;                                   //@synthesize videoDuration=_videoDuration - In the implementation block
@property (getter=isAudioMuted,nonatomic,readonly) BOOL audioMuted;                             //@synthesize audioMuted=_audioMuted - In the implementation block
@property (nonatomic,readonly) CGRect cropRectangle;                                            //@synthesize cropRectangle=_cropRectangle - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB26 trimRange;                                       //@synthesize trimRange=_trimRange - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filterConfigs;                                    //@synthesize filterConfigs=_filterConfigs - In the implementation block
@property (nonatomic,copy,readonly) FBSphericalVideoConfig * sphericalVideoConfig;              //@synthesize sphericalVideoConfig=_sphericalVideoConfig - In the implementation block
@property (nonatomic,readonly) long long hdUploadSelectionState;                                //@synthesize hdUploadSelectionState=_hdUploadSelectionState - In the implementation block
-(BOOL)isTrimmed;
-(SCD_Struct_FB26)trimRange;
-(NSArray *)filterConfigs;
-(FBSphericalVideoConfig *)sphericalVideoConfig;
-(long long)hdUploadSelectionState;
-(id)initWithVideoDuration:(SCD_Struct_FB25)arg1 audioMuted:(BOOL)arg2 cropRectangle:(CGRect)arg3 trimRange:(SCD_Struct_FB26)arg4 filterConfigs:(id)arg5 sphericalVideoConfig:(id)arg6 hdUploadSelectionState:(long long)arg7 ;
-(id)editsWithCropRect:(CGRect)arg1 ;
-(id)editsWithHDUploadSelectionState:(long long)arg1 ;
-(id)editsWithTrimRange:(SCD_Struct_FB26)arg1 ;
-(id)editsWithAudioMuted:(BOOL)arg1 ;
-(id)editsWithFilterConfigs:(id)arg1 ;
-(void)addFilterWithName:(id)arg1 withParameters:(id)arg2 ;
-(id)initWithVideoDuration:(SCD_Struct_FB25)arg1 ;
-(id)editsWithAudioMuted:(BOOL)arg1 trimRange:(SCD_Struct_FB26)arg2 ;
-(id)editsWithSphericalVideoConfig:(id)arg1 ;
-(BOOL)shouldRestartTranscodeForNewEdits:(id)arg1 ;
-(void)addImageOverlayFilter:(id)arg1 ;
-(void)encodeTrimRange:(id)arg1 ;
-(void)decodeTrimRange:(id)arg1 ;
-(void)encodeVideoDuration:(id)arg1 ;
-(void)decodeVideoDuration:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAudioMuted;
-(SCD_Struct_FB25)videoDuration;
-(BOOL)hasEdits;
-(CGRect)cropRectangle;
@end

