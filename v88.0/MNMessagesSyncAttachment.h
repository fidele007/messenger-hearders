/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, MNMessagesSyncAttachmentAppAttribution, MNMessagesSyncImageMetadata, MNMessagesSyncVideoMetadata, MNMessagesSyncAudioMetadata, NSMutableDictionary;

@interface MNMessagesSyncAttachment : NSObject <TBase, NSCoding> {

	NSString* __id;
	NSString* __mimeType;
	NSString* __filename;
	long long __fbid;
	long long __fileSize;
	MNMessagesSyncAttachmentAppAttribution* __attributionInfo;
	NSString* __xmaGraphQL;
	MNMessagesSyncImageMetadata* __imageMetadata;
	MNMessagesSyncVideoMetadata* __videoMetadata;
	MNMessagesSyncAudioMetadata* __audioMetadata;
	NSMutableDictionary* __data;
	BOOL __id_isset;
	BOOL __mimeType_isset;
	BOOL __filename_isset;
	BOOL __fbid_isset;
	BOOL __fileSize_isset;
	BOOL __attributionInfo_isset;
	BOOL __xmaGraphQL_isset;
	BOOL __imageMetadata_isset;
	BOOL __videoMetadata_isset;
	BOOL __audioMetadata_isset;
	BOOL __data_isset;

}

@property (setter=setId:,getter=id,nonatomic,retain) NSString * id; 
@property (setter=setMimeType:,getter=mimeType,nonatomic,retain) NSString * mimeType; 
@property (setter=setFilename:,getter=filename,nonatomic,retain) NSString * filename; 
@property (assign,setter=setFbid:,getter=fbid,nonatomic) long long fbid; 
@property (assign,setter=setFileSize:,getter=fileSize,nonatomic) long long fileSize; 
@property (setter=setAttributionInfo:,getter=attributionInfo,nonatomic,retain) MNMessagesSyncAttachmentAppAttribution * attributionInfo; 
@property (setter=setXmaGraphQL:,getter=xmaGraphQL,nonatomic,retain) NSString * xmaGraphQL; 
@property (setter=setImageMetadata:,getter=imageMetadata,nonatomic,retain) MNMessagesSyncImageMetadata * imageMetadata; 
@property (setter=setVideoMetadata:,getter=videoMetadata,nonatomic,retain) MNMessagesSyncVideoMetadata * videoMetadata; 
@property (setter=setAudioMetadata:,getter=audioMetadata,nonatomic,retain) MNMessagesSyncAudioMetadata * audioMetadata; 
@property (setter=setData:,getter=data,nonatomic,retain) NSMutableDictionary * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)fbid;
-(void)read:(id)arg1 ;
-(BOOL)audioMetadataIsSet;
-(MNMessagesSyncAudioMetadata *)audioMetadata;
-(BOOL)idIsSet;
-(void)unsetId;
-(void)setFbid:(long long)arg1 ;
-(BOOL)fbidIsSet;
-(void)unsetFbid;
-(BOOL)dataIsSet;
-(void)unsetData;
-(void)setAttributionInfo:(MNMessagesSyncAttachmentAppAttribution *)arg1 ;
-(void)setXmaGraphQL:(NSString *)arg1 ;
-(void)setImageMetadata:(MNMessagesSyncImageMetadata *)arg1 ;
-(void)setVideoMetadata:(MNMessagesSyncVideoMetadata *)arg1 ;
-(void)setAudioMetadata:(MNMessagesSyncAudioMetadata *)arg1 ;
-(id)initWithId:(id)arg1 mimeType:(id)arg2 filename:(id)arg3 fbid:(long long)arg4 fileSize:(long long)arg5 attributionInfo:(id)arg6 xmaGraphQL:(id)arg7 imageMetadata:(id)arg8 videoMetadata:(id)arg9 audioMetadata:(id)arg10 data:(id)arg11 ;
-(BOOL)mimeTypeIsSet;
-(void)unsetMimeType;
-(BOOL)filenameIsSet;
-(void)unsetFilename;
-(BOOL)fileSizeIsSet;
-(void)unsetFileSize;
-(MNMessagesSyncAttachmentAppAttribution *)attributionInfo;
-(BOOL)attributionInfoIsSet;
-(void)unsetAttributionInfo;
-(NSString *)xmaGraphQL;
-(BOOL)xmaGraphQLIsSet;
-(void)unsetXmaGraphQL;
-(MNMessagesSyncImageMetadata *)imageMetadata;
-(BOOL)imageMetadataIsSet;
-(void)unsetImageMetadata;
-(MNMessagesSyncVideoMetadata *)videoMetadata;
-(BOOL)videoMetadataIsSet;
-(void)unsetVideoMetadata;
-(void)unsetAudioMetadata;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(NSString *)mimeType;
-(void)validate;
-(long long)fileSize;
-(void)setFilename:(NSString *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(NSString *)filename;
@end

